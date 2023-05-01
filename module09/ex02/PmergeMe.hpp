/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 06:10:58 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/05/01 07:17:56 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef P_MERGE_ME_HPP_
#define P_MERGE_ME_HPP_

#include	<iostream>
#include	<vector>
#include	<deque>
#include	<time.h>
#include	<iterator>
#include	<set>

void	PmergeMe(int ac, char **av);
bool	CheckInput(int argc, char **argv);
bool	noRepeat(char **argv);

void	print_output(char **argv, std::vector<int> vector_sorted, double vector_time, std::deque<int> deque_sorted, double deque_time);
void	print_unsorted(char **argv);
void	print_sorted(std::vector<int> vector_sorted);
void	print_times(std::vector<int> vector_sorte, double vector_sorted, std::deque<int> deque_sorted, double deque_time);

std::vector<int>	vector_container(int argc, char **argv);
std::deque<int>		deque_container(int argc, char **argv);

template <typename Container>
void	argv_convertion(int argc, char **argv, Container &stack);

template <typename Container>
void	sort(Container &stack, int start, int end);

template <typename Container>
void	merge(Container &stack, int start, int mid, int end);


#endif