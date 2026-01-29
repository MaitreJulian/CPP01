/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:39:19 by julian            #+#    #+#             */
/*   Updated: 2026/01/29 15:42:25 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon 
{
    
private:
    std::string type;
public:

    Weapon();
    Weapon(std::string type);
    ~Weapon();
    
    const std::string& getType() const;
    void setType(const std::string& type);
};



#endif