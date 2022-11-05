/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:07:27 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 20:07:27 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

public:
    Brain();
    Brain(Brain const& src);
    ~Brain();

    Brain& operator=(Brain const& rhs);
    void getIdea(int i) const;

private:
    std::string _ideas[100];
};

#endif 