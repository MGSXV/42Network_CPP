/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:59:12 by sel-kham          #+#    #+#             */
/*   Updated: 2023/05/16 23:19:39 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const str_t BitcoinExchange::dataFile = "data.csv";

BitcoinExchange::BitcoinExchange(void) { }

BitcoinExchange::BitcoinExchange(const char *filename) : dataStream(BitcoinExchange::dataFile), inputStream(filename), inputFile(filename)
{
	
	if (!this->inputFile.c_str() || !this->inputFile[0])
		throw std::runtime_error(INPUT_ERR);
	if (!dataStream.is_open())
		throw std::runtime_error(DATA_ERR);
	if (!inputStream.is_open())
		throw std::runtime_error(INPUT_ERR);
	this->day = 0;
	this->month = 0;
	this->year = 0;
	this->value = -1.0;
}

BitcoinExchange::~BitcoinExchange(void)
{
	this->dataStream.close();
	this->inputStream.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &be)
{
	*this = be;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange other)
{
	this->day = other.day;
	this->month = other.month;
	this->year = other.year;
	this->value = other.value;
	this->inputStream.close();
	this->inputStream.open(this->inputFile);
	this->dataStream.close();
	this->dataStream.open(BitcoinExchange::dataFile);
	this->data = other.data;
	this->input = other.input;
	return (*this);
}

const char* BitcoinExchange::NegativeNUmberException::what(void) const throw()
{
	return ("\033[0;31mError: not a positive number.\033[0;37m");
}

const char* BitcoinExchange::BadInputException::what(void) const throw()
{
	return ("\033[0;31mError: bad input => \033[0;37m");
}

const char* BitcoinExchange::BadValueException::what(void) const throw()
{
	return ("\033[0;31mError: input in invalid format.\033[0;37m");
}

const char* BitcoinExchange::LargeNumberException::what(void) const throw()
{
	return ("\033[0;31mError: too large number.\033[0;37m");
}

const char* BitcoinExchange::OldDateException::what(void) const throw()
{
	return ("\033[0;31mError: date is too old.\033[0;37m");
}

void	BitcoinExchange::analyze(void)
{
	
	this->dataParser();
	this->fileReader(this->inputStream, '|', "date | value", this->input, str_t("input"));
}
#include <iomanip>


void	BitcoinExchange::getResults(void)
{
	map_t::iterator it;
	
	it = this->data.find(this->date_str);
	if (it != this->data.end())
	{
		std::cout << it->first << " => " << this->value << " = " << this->value * it->second << std::endl;
		return ;
	}
	it = this->data.lower_bound(this->date_str);
	if (this->data.begin() != it)
	{ 
		--it;
		std::cout  <<  this->date_str << " => " << this->value << " = " << std::setprecision(16) << this->value * it->second  << std::endl;
	}
	else
		throw BitcoinExchange::OldDateException();
}

void	BitcoinExchange::fileReader(std::ifstream &stream, const char sep, const char *header, map_t &map, str_t det)
{
	str_t	line;

	std::getline(stream, line);
	if (str_t(header) != line)
		throw std::runtime_error(UNKNOWN_COLUMN_ERR);
	while (std::getline(stream, line))
	{
		try
		{
			this->line_parser(line, sep, det);
			this->getResults();
		}
		catch(const BitcoinExchange::BadInputException &e)
		{
			
			std::cerr << str_t(e.what()) + this->date_str << '\n';
		}
		catch(const BitcoinExchange::LargeNumberException &e)
		{
			std::cerr << e.what() << '\n';
		}
		catch(const BitcoinExchange::BadValueException &e)
		{
			std::cerr << e.what() << '\n';
		}
		catch(const BitcoinExchange::NegativeNUmberException &e)
		{
			std::cerr << e.what() << '\n';
		}
		catch(const BitcoinExchange::OldDateException &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

void	BitcoinExchange::line_parser(str_t &str, const char sep, str_t f)
{
	str_t	key;
	str_t	value;
	int		index;

	index = str.find(sep);
	this->date_str = str;
	if (index < 0)
		throw BitcoinExchange::BadInputException();
	if (f == str_t("data"))
	{
		this->date_str = str.substr(0, index);
		this->value = atof(str.substr(index + 1, str.size()).c_str());
	}
	else
	{
		key = str.substr(0, index);
		value = str.substr(index + 1, str.length());
		this->trim(key);
		this->date_str = key;
			this->date_str = key;
		if (!this->dateParser(key))
			throw BitcoinExchange::BadInputException();
		this->trim(value);
		this->floatParser(value);
	}
		
}

bool	BitcoinExchange::dateParser(str_t &date)
{
	str_t tmp;
	
	if (date.size() != 10)
		return (false);
	tmp = date.substr(0, 4);
	this->year = this->intParser(tmp);
	tmp = date.substr(5, 2);
	this->month = this->intParser(tmp);
	tmp = date.substr(8, 2);
	this->day = this->intParser(tmp);
	if (!this->isValidDate())
		return (false);
	return (true);
}

bool	BitcoinExchange::isValidDate(void)
{
	if (this->day > 31 || this->day < 1)
		return (false);
	if (this->month < 1 || this->month > 12)
		return (false);
	if (this->month == 2)
	{
		if (!this->isLeapYear(this->year) && this->day > 28)
			return (false);
		else if (this->isLeapYear(this->year) && this->day > 29)
			return (false);
	}
	else
		if (this->day > 30 && (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11))
			return (false);
	return (true);
}

bool	BitcoinExchange::isLeapYear(int year) const
{
	return (!(year % 4) && ((year % 100) || !(year % 400)));
}

void	BitcoinExchange::dataParser(void)
{
	str_t	line;
	
	std::getline(this->dataStream, line);
	if (str_t("date,exchange_rate") != line)
		throw std::runtime_error(UNKNOWN_COLUMN_ERR);
	while (std::getline(this->dataStream, line))
	{
		this->line_parser(line, ',', str_t("data"));
		this->data.insert(std::pair<str_t, double> (this->date_str, this->value));
	}
}

void	BitcoinExchange::floatParser(str_t &val)
{
	double d;

	if (!this->isDouble(val) && this->intParser(val) == -1)
		throw BitcoinExchange::BadValueException();
	d = atof(val.c_str());
	if (d)
	{
		if (d < 0.0)
			throw BitcoinExchange::NegativeNUmberException();
		else if (d > 1000.0)
			throw BitcoinExchange::LargeNumberException();
		this->value = d;
	}
	else
	{
		this->value = d;
	}
}

int	BitcoinExchange::intParser(str_t &val)
{
	int	i;
	i = atoi(val.c_str());
	if (val.find_first_not_of("0123456789") != val.npos)
		return -1;
	if (i)
		return (i);
	else if (!i && val.find_first_not_of("0123456789") != val.npos)
		return (i);
	return -1;
}

void	BitcoinExchange::trim(str_t &s)
{
	
	int	i;

	while (s[0] == ' ')
		s.erase(s.begin());
	i = s.size() - 1;
	while (s.size() && s[s.size() - 1] == ' ')
		s.pop_back();
}

bool	BitcoinExchange::isDouble(str_t &input) const
{
	int		i;
	int		size;
	bool	dPoint;
	
	i = -1;
	dPoint = false;
	size = (int) input.size();
	while (++i < size)
	{
		if (i == 0)
			continue ;
		if (!dPoint && input[i] == '.')
		{
			dPoint = true;
			continue ;
		}
		else if (dPoint && input[i] == '.')
			return (false);
		else if (!isdigit(input[i]))
			return (false);
	}
	if (!isdigit(input[i - 1]) || !dPoint)
		return (false);
	return (true);
}
