/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:06:00 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/14 15:31:09 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon{
    public:
        Weapon(std::string ataque);
        const std::string &getType() const;
        void    setType(std::string type);

    private:
        std::string _type;
};