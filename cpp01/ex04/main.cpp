/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:42:35 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/20 01:58:27 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replace(std::string line, std::string from, std::string to)
{
	size_t i = 0;
	size_t pos;
	
	while (i < line.length())
	{
		pos = line.find(from);
		if (pos != std::string::npos)
		{
			line.erase(pos, from.length());
			line.insert(pos, to);
			i = pos + to.length();
		}
		else
			i++;
	}
	
	return (line);
}


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Bad arguments" << std::endl;
		return (0);
	}
	std::string filename(argv[1]);
	std::string from(argv[2]);
	std::string to(argv[3]);
	std::string line;
	std::ofstream fout;
	std::ifstream fin;
	
	fin.open(filename.c_str());
	if (!fin)
	{
		std::cout << "No such file or permissions" << std::endl;
		return (0);
	}
	filename += ".replace";
	fout.open(filename.c_str());
	
	while (std::getline(fin, line))
	{
		line = replace(line, from, to);
		fout << line << std::endl;
	}
	
	return (0);
}
