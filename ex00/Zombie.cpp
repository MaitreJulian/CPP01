/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:00:05 by jvenkata          #+#    #+#             */
/*   Updated: 2026/02/13 13:26:33 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Default constructor Zombie" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << name << " is destroyed by destructor" << std::endl;
}

Zombie::Zombie(std::string zombie_name )
{
    name = zombie_name;
    std::cout << "Constructor creates " << name << std::endl;
}


void Zombie::announce()
{
    std::cout << name << ": BraiiiiiinnnzzzZ..." << std::endl;
}
