/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:42:35 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/20 01:27:03 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen Karen;
    Karen.complain("DEBUG");
    Karen.complain("INFO");
    Karen.complain("WARNING");
    Karen.complain("ERROR");
    
    Karen.complain("qwerty");

    return (0);
}
