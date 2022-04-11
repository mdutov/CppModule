# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/27 19:13:37 by tcynthia          #+#    #+#              #
#    Updated: 2022/03/28 19:28:02 by tcynthia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# subject
echo
./Conversion inf
echo 
./Conversion nan
echo
./Conversion 42f

# additional
echo
./Conversion a
echo 
./Conversion z
echo 
./Conversion 1
echo 
./Conversion 9
echo 
./Conversion 32
echo 
./Conversion 33
echo 
./Conversion 126
echo 
./Conversion 777
echo
./Conversion 3399999
echo
./Conversion 12345678910
echo 
./Conversion 123.0f
echo 
./Conversion 123.456
echo 
./Conversion 123.456f
echo 
./Conversion nan
echo 
./Conversion nanf
echo 
./Conversion inf
echo 
./Conversion inff
