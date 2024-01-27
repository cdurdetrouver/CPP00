/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:38:17 by gbazart           #+#    #+#             */
/*   Updated: 2024/01/27 18:51:05 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>
#include <stdbool.h>

int	main(void)
{
	PhoneBook repertoire = PhoneBook();
	Contact hamza = Contact("hamza", "lamnaou", "hlamnaou", "0644776925", "gc2 rl");
	hamza >> std::cout;
}
