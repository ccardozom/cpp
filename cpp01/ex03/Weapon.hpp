/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccardozo <ccardozo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:06:00 by ccardozo          #+#    #+#             */
/*   Updated: 2021/10/13 16:27:59 by ccardozo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon{
    public:
        Weapon();
        std::string getType() const;
        void    setType(std::string type);

    private:
        std::string _type;
};