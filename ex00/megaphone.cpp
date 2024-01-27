/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:32:50 by gbazart           #+#    #+#             */
/*   Updated: 2024/01/27 16:55:52 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; argv[i]; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				std::cout << (char)toupper(argv[i][j]);
			}
		}
		std::cout << std::endl;
	}
	return (0);
}