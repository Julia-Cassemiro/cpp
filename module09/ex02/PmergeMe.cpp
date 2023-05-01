/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 06:19:25 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/05/01 07:23:48 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


void	PmergeMe(int argc, char **argv){

	std::vector<int>	vector_sorted;
	std::deque<int>		deque_sorted;
	clock_t				start, end;
	double				vector_time, deque_time;

	start = clock();
	vector_sorted = vector_container(argc, argv);
	end = clock();
	vector_time = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1e6;

	start = clock();
	deque_sorted = deque_container(argc, argv); // merge sort 
	end = clock();
	deque_time = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1e6;
	print_output(argv, vector_sorted, vector_time, deque_sorted, deque_time);
	return ;
}




/* ------------------------ P R I N T ------------------------ */

void	print_output(char **argv, std::vector<int> vector_sorted, double vector_time, std::deque<int> deque_sorted, double deque_time){
	print_unsorted(argv);
	print_sorted(vector_sorted);
	print_times(vector_sorted, vector_time, deque_sorted, deque_time);
}

void	print_unsorted(char **argv) {
	std::cout << "Before: ";
	for (int i = 1; argv[i]; i++)
	{
		std::cout << argv[i] << " ";
		if (i > 8)
		{
			std::cout << "[...]";
			break;
		}
	}
	std::cout << std::endl;
}

void	print_sorted(std::vector<int> vector_sorted) {
	int i = 0;
	std::cout << "After: ";
	for (std::vector<int>::const_iterator it = vector_sorted.begin(); it != vector_sorted.end(); ++it, i++)
	{
		std::cout << *it << ' ';
		if (i > 7)
		{
			std::cout << "[...]";
			break;
		}
	}
	std::cout << std::endl;
}

void	print_times(std::vector<int> vector_sorted, double vector_time, std::deque<int> deque_sorted, double deque_time){
	std::cout	<< "Time to process a range of " << vector_sorted.size()
		<< " elements with std::vector: " << vector_time << " us" << std::endl;

	std::cout	<< "Time to process a range of " << deque_sorted.size()
		<< " elements with std::deque: " << deque_time << " us" << std::endl;
}




/* ------------------------ V E C T O R ------------------------ */

std::vector<int>	vector_container(int argc, char **argv){
	std::vector<int>	vector_stack; //create vector

	argv_convertion(argc, argv, vector_stack);
	sort(vector_stack, 0, vector_stack.size() - 1);
	return vector_stack;
}





/* ------------------------ D E Q U E ------------------------ */

std::deque<int>	deque_container(int argc, char **argv){
	std::deque<int>	deque_stack;

	argv_convertion(argc, argv, deque_stack);
	sort(deque_stack, 0, deque_stack.size() - 1);
	return deque_stack;
}





/* ------------------------ B O T H   ------------------------ */


template <typename Container>
void	argv_convertion(int argc, char **argv, Container &stack){ //iterar
	for (int i = 1; i < argc; i++){
		int tmp = std::atoi(argv[i]);
		stack.push_back(tmp);
	}
	return ;
}


template <typename Container>
void	sort(Container &stack, int start, int end){
	if (start < end){
		int	mid = (start + end) / 2; //midle
		sort(stack, start, mid); //order first
		sort(stack, mid + 1, end); //order the second
		merge(stack, start, mid, end); //mergefirst + second
	}
}


template <typename Container>
void	merge(Container &stack, int start, int mid, int end){
	Container	tmp;
	int i, j;
	i = start;
	j = mid + 1;

	while ( i <= mid && j <= end ){
		if (stack[i] < stack[j]){
			tmp.push_back(stack[i++]);
		} else {
			tmp.push_back(stack[j++]);
		}
	}
	while ( i <= mid ){
		tmp.push_back(stack[i++]);
	}
	while ( j <= end ){
		tmp.push_back(stack[j++]);
	}

	//override stack
	for ( int i = start; i <= end; ++i ){
		stack[i] = tmp[i - start];
	}
}





/* ------------------------ V E R I F Y -----------------------*/
bool	noRepeat(char **argv){
	std::set<int>	noRepeat;

	for(int i = 1; argv[i]; i++){
		int number = std::atoi(argv[i]);
		std::pair<std::set<int>::iterator, bool> ret = noRepeat.insert(number);
		if (ret.second == false){
			std::cout << "Error: Duplicate number" << std::endl;
			return false;
		}
	}
	return true;
}

bool	CheckInput(int argc, char **argv){
	for (int i = 1; i < argc; i++){
		for ( int y = 0; argv[i][y]; y++){
			if (!(argv[i][y] >= '0' && argv[i][y] <= '9')){
				std::cout << "Error: Invalid number" << std::endl;
				return false;
			}
		}
	}
	return noRepeat(argv);
}