/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:25:03 by mtrembla          #+#    #+#             */
/*   Updated: 2023/02/09 12:25:06 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    char c;
    
	for(int i = 1; argv[i]; i++) {
    	for (int j = 0; j < strlen(argv[i]); j++) {
			c = toupper(argv[i][j]);
			std::cout << c;
		}
    	std::cout << " ";
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
    return(0);
}

// {
//     int i = 0;
//     int j = 0;

//     while(argc > 1 && argv[++i])
//     {
//         while(argv[i][j])
//             putchar(toupper(argv[i][j++]));
//         std::cout << " ";
//         j = 0;
//     }
//     if (argc == 1)
//     std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
//     std::cout << std::endl;
//     return(0);
// }
