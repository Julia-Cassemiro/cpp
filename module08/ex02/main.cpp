/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 09:47:49 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/04/26 04:46:38 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	main( void ) {
	{
		MutantStack<int> mutant;
		mutant.push(0);
		mutant.push(1);
		mutant.push(2);
		mutant.push(3);
		mutant.push(4);
		MutantStack<int>::iterator it = mutant.begin();
		std::advance(it, 2); // avança o iterator para a terceira posição (índice 2)
		int meio = *it; // acessa o elemento na posição 2 (índice 2)
		std::cout << "Meio: " << meio << std::endl;
		std::cout << std::endl;
	}
	{
		MutantStack<int> mutant;
		mutant.push(10);
		mutant.push(11);
		mutant.push(12);
		std::cout << "Size mutant: " << mutant.size() << std::endl;
		std::cout << "Mutant: " << std::endl;
		for ( MutantStack<int>::iterator it = mutant.begin(); it != mutant.end(); it++)
			std::cout << " " << *it;
		std::cout << std::endl;

		MutantStack<int> mutantCopy = mutant;
		mutantCopy.push( 25 );

		std::cout << "Size mutantCopy: " << mutantCopy.size() << std::endl;
		std::cout << "MutantCopy: " << std::endl;
		for ( MutantStack<int>::iterator it = mutantCopy.begin(); it != mutantCopy.end(); it++)
			std::cout << " " << *it;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		std::deque<int> mutant;
		mutant.push_back(10);
		mutant.push_back(11);
		mutant.push_back(12);
		std::cout << "Size deque: " << mutant.size() << std::endl;
		std::cout << "deque: " << std::endl;
		for ( std::deque<int>::iterator it = mutant.begin(); it != mutant.end(); it++)
			std::cout << " " << *it;
		std::cout << std::endl;

		std::deque<int> mutantCopy( mutant );
		mutantCopy.push_back( 25 );

		std::cout << "Size deque copy: " << mutantCopy.size() << std::endl;
		std::cout << "deque copy: " << std::endl;
		for ( std::deque<int>::iterator it = mutantCopy.begin(); it != mutantCopy.end(); it++)
			std::cout << " " << *it;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << " PDF TESTES: " << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl; //just 17
		mstack.pop(); //remove 17
		std::cout << mstack.size() << std::endl; //size = 1
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}

	std::cout << std::endl;
	{
		std::cout << " PDF TESTES with deque: " << std::endl;
		std::deque<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::deque<int>::iterator it = mstack.begin();
		std::deque<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	{
		std::cout << "PDF TESTES with list: " << std::endl;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int, std::list<int> > s(mstack);
	}
	return ( 0 );
}