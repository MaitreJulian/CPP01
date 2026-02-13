/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 23:12:48 by julian            #+#    #+#             */
/*   Updated: 2026/01/29 23:13:03 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
class Harl
{
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public :
        Harl();
        ~Harl();
        void complain( std::string level );
};

#endif