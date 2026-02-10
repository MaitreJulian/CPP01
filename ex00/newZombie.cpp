/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:05:27 by jvenkata          #+#    #+#             */
/*   Updated: 2026/01/21 15:14:45 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *new_Zombie(std::string name)
{
    Zombie *newZombie;
    
    newZombie = new Zombie(name);
    return(newZombie);
}