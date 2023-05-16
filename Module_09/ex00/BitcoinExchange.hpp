/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:20:24 by sel-kham          #+#    #+#             */
/*   Updated: 2023/05/16 02:02:01 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BITCOINEXCHANGE_HPP__
# define __BITCOINEXCHANGE_HPP__

# include <iostream>
# include <fstream>
# include <string>
# include <map>
# include <exception>

# define RED_COLOR "\033[0;31m"
# define DEFAULT_COLOR "\033[0;37m"
# define INPUT_ERR "Error: could not open file."
# define DATA_ERR "Error: could not open database."
# define EMPTY_FILE_ERR "Error: input file is empty."
# define UNKNOWN_COLUMN_ERR "Error: unknown columns."

typedef std::string str_t;
typedef std::map<str_t, double>  map_t;

class BitcoinExchange
{
private:
	int					day;
	int					month;
	int 				year;
	double				value;
	str_t				date_str;
	map_t				data;
	map_t				input;
	std::ifstream		dataStream;
	std::ifstream		inputStream;
	static const str_t	dataFile;
	const str_t			inputFile;
	// Private class methods
	void	line_parser(str_t &str, const char sep, str_t det);
	void	fileReader(std::ifstream &stream, const char sep, const char *header, map_t &map, str_t det);
	bool	dateParser(str_t &date);
	void	floatParser(str_t &val);
	int		intParser(str_t &val);
	void	dataParser(void);
	bool	isValidDate(void);
	bool	isLeapYear(int year) const;
	void	trim(str_t &s);
	void	getResults(void);
	bool	isDouble(str_t &input) const;
public:
	// Constructors and destructors
	BitcoinExchange(void);
	~BitcoinExchange(void);
	BitcoinExchange(const char *inputfile);
	BitcoinExchange(const BitcoinExchange &be);
	// Operators overload
	BitcoinExchange& operator=(const BitcoinExchange other);
	// Class methods
	void	analyze(void);
	class NegativeNUmberException : public std::exception
	{
		public:
			const char* what(void) const throw();
	};
	class LargeNumberException : public std::exception
	{
		public:
			const char* what(void) const throw();
	};
	class BadInputException : public std::exception
	{
		public:
			const char* what(void) const throw();
	};
	class BadValueException : public std::exception
	{
		public:
			const char* what(void) const throw();
	};
	class OldDateException : public std::exception
	{
		public:
			const char* what(void) const throw();
	};
};

#endif