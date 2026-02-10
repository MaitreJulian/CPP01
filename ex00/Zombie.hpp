/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:37:41 by julian            #+#    #+#             */
/*   Updated: 2026/02/10 10:37:52 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
    Zombie(std::string name);
    ~Zombie();
    void announce() const;

private:
    std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif