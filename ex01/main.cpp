/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:14:37 by julian            #+#    #+#             */
/*   Updated: 2026/01/29 15:29:34 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* horde = zombieHorde(5, "Zombie");
    if (horde) {
        for (int i = 0; i < 5; ++i) {
            horde[i].announce();
        }
        delete[] horde;
    }
    return 0;
}