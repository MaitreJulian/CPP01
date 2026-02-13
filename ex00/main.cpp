/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:38:43 by julian            #+#    #+#             */
/*   Updated: 2026/02/13 13:29:19 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
    Zombie* zombie1 = new_Zombie("Zombie1");
    zombie1->announce();
    delete zombie1;

    randomChump("Zombie2");

    return 0;
}
