/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:40:05 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/20 02:09:43 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    //stack; field of view - function main();
    Zombie main_stack_zombie;
    main_stack_zombie.set_name("1_Stack_in_main");
    main_stack_zombie.announce();
    
    //heap
    Zombie *dinamic_heap_zombie;
    dinamic_heap_zombie = newZombie("2_Heap");
    dinamic_heap_zombie->announce();

    //stack; field of view - function randomChump();
    randomChump("3_Stack_in_function");
    
    delete dinamic_heap_zombie;

    return(0);    
}
