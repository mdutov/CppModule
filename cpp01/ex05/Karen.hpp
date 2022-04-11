/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:42:35 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/20 02:04:22 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
    private:     
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        
        std::string level_array[4];
        void nothing( void );
        
    public:
        void complain( std::string level );

        Karen();
        ~Karen();
};

#endif
