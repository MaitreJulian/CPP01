/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:00:31 by jvenkata          #+#    #+#             */
/*   Updated: 2026/01/21 15:16:37 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string  name;
        
    public:
        Zombie();
        Zombie(std::string zombie_name);
        ~Zombie();
        
        void announce();
};

Zombie *new_Zombie(std::string name);
void randomChump( std::string name );


#endif