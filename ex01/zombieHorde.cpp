/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:13:31 by julian            #+#    #+#             */
/*   Updated: 2026/01/29 14:24:20 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0) return NULL;

    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        horde[i] = Zombie(name);
    }
    return horde;
}