/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:36:22 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/09 22:39:46 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; ++i)
		{
			for (int j = 0; argv[i][j]; ++j)
				std::cout << (char)std::toupper(argv[i][j]);
			if (i < argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<  std::endl;
	return 0;
}