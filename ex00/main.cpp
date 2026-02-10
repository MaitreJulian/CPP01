/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:38:43 by julian            #+#    #+#             */
/*   Updated: 2026/02/10 10:38:52 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* zombie1 = newZombie("Zombie1");
    zombie1->announce();
    delete zombie1;

    randomChump("Zombie2");

    return 0;
}
