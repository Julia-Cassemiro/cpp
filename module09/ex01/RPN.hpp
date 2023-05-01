/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 08:11:15 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/04/30 16:44:13 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
#define RPN_H

#include <iostream>
#include <stack>
#include <iomanip>

class RPN
{
    public:
        RPN ();
        RPN (const RPN &a);
        ~RPN ();
        RPN & operator = (const RPN &a);

        void    ReadInput(std::string input);
        int     CalculationResult(int n1, int n2, char o);
    
	private:
        std::stack<int>     _numbers;
};

#endif