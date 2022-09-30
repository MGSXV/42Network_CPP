/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:47:47 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/30 19:51:30 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

void	replace_string(std::string &line, char *_toReplace, char *_new)
{
	std::string	toReplace;
	std::string	replaceWith;
	std::string	tmp;
	size_t		first;
	size_t		end;

	toReplace = _toReplace;
	replaceWith = _new;
	tmp = "";
	first = 0;
	end = 0;
	do
	{
		end = line.find(toReplace, first);
		if (end < line.length())
		{
			tmp += line.substr(first, end - first);
			tmp += replaceWith;
			first = end + toReplace.length();
		}
	}	while (end < line.length());
	tmp += line.substr(first, end - first);
	line = tmp;
}

int	main(int argc, char **argv)
{
	std::ifstream	srcFile;
	std::ofstream	dstFile;
	std::string		content;
	std::string		outName;

	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Input error!" << std::endl;
		return (1);
	}
	srcFile.open(argv[1], std::fstream::in);
	if (!srcFile)
	{
		std::cout << "Please specify a valid file name!" << std::endl;
		return (1);
	}
	outName = argv[1];
	outName += ".replace";
	dstFile.open(outName.c_str(), std::ios_base::app | std::ios_base::out | std::ios_base::in | std::ios_base::trunc );
	if (!dstFile)
	{
		std::cout << "Error opening destination file!" << std::endl;
		return (1);
	}
	while (srcFile)
	{
		std::getline(srcFile, content);
		replace_string(content, argv[2], argv[3]);
		dstFile << content << std::endl;
	}
	srcFile.close();
	dstFile.close();
	return (0);
}
