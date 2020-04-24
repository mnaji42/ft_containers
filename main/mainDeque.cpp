/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainDeque.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 02:38:55 by najimehdi         #+#    #+#             */
/*   Updated: 2020/04/24 04:39:30 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define ft std
// #define Deque deque

#include <iostream>
#include <utility>
#include "../Deque.hpp"
// #include <deque>

template<typename T>
void printDeque(ft::Deque<T> &v)
{
	int i = 0;

	if (!v.size())
		std::cout << "the Deque is empty" << std::endl;
	while (i < (int)v.size())
	{
		std::cout << "[" << i << "] : " << v[i] << std::endl;
		i++;
	}
	std::cout << std::endl;
}

int main()
{
	std::cout << "\n==============    Deque     ==============" << std::endl;

	try
	{
		std::cout << "--------- test with <int> ------\n" << std::endl;
		
		ft::Deque<int> v1;

		std::cout << "size = " << v1.size() << std::endl;
		if (v1.empty())
			std::cout << "Le Deque est vide !" << std::endl;
		else
			std::cout << "Le Deque n'est pas vide !" << std::endl;
		v1.push_back(1);
		printDeque(v1);
		v1.push_back(2);
		printDeque(v1);
		v1.push_back(3);
		printDeque(v1);
		v1.push_back(4);
		printDeque(v1);
		v1.pop_back();
		printDeque(v1);
		v1.pop_back();
		printDeque(v1);
		if (v1.empty())
			std::cout << "Le Deque est vide !" << std::endl;
		else
			std::cout << "Le Deque n'est pas vide !" << std::endl;

		v1.assign(5, 10);
		printDeque(v1);
		v1.assign(5, 3);
		printDeque(v1);
		v1.assign(2, 2);
		printDeque(v1);

		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		printDeque(v1);
		v1.clear();
		printDeque(v1);
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		printDeque(v1);
		std::cout << "v1[2] = " << v1[2] << std::endl;

		ft::Deque<int>::iterator ptr_first;
		ft::Deque<int>::iterator ptr_last;
		ptr_first = v1.begin();
		std::cout << "begin : " << *ptr_first <<std::endl;
	
		ft::Deque<int> v2;
		v2 = v1;
		printDeque(v2);
		std::cout << "v2.size = " << v2.size() << std::endl;
		v1.clear();
		printDeque(v1);
		v1.assign(5, 10);
		printDeque(v1);
		v1.assign(5, 3);
		printDeque(v1);
		v1.assign(2, 2);
		printDeque(v1);
		printDeque(v1); 
		v1.push_back(10);
		printDeque(v1); 
		v1.push_back(1);
		printDeque(v1); 
		v1.push_back(2);
		printDeque(v1); 
		v1.push_back(3);
		printDeque(v1);
		ptr_first = v1.begin();
		ptr_last = v1.end();
		std::cout << "*ptr_first = " << *ptr_first << "\n*ptr_last - 1 = " << *(ptr_last - 1) << std::endl;
		v1.assign(ptr_first + 2, ptr_last);
		printDeque(v1);
		try
		{
			std::cout << v1.at(0) << std::endl;
			std::cout << v1.at(1) << std::endl;
			std::cout << v1.at(2) << std::endl;
			std::cout << v1.at(3) << std::endl;
			std::cout << v1.at(4) << std::endl;
			std::cout << v1.at(5) << std::endl;
			std::cout << v1.at(6) << std::endl;
			std::cout << v1.at(7) << std::endl;
			std::cout << "COUCOU !!!" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "front : " << v1.front() << std::endl;
		std::cout << "back : " << v1.back() << std::endl;
		std::cout << "max size : " << v1.max_size() << std::endl;
		v1.clear();
		for (int i = 0; i < 5; i++)
			v1.push_back(i);
		ft::Deque<int>::iterator it;
		it = v1.begin();
		printDeque(v1);
		v1.insert(it, 12);
		printDeque(v1);
		it++;
		printDeque(v1);
		it = v1.end();
		v1.insert(it, 167);
		printDeque(v1);
		it--;
		it--;
		v1.erase(it);
		printDeque(v1);
		v1.erase(v1.begin(), (v1.begin() + 5));
		printDeque(v1);
		v1.resize(10, 42);
		printDeque(v1);
		v1.resize(2, 42);
		printDeque(v1);
		printDeque(v2);
		if (v1 == v2)
			std::cout << "v1 == v2" << std::endl;
		if (v1 < v2)
			std::cout << "v1 < v2" << std::endl;
		if (v1 > v2)
			std::cout << "v1 > v2" << std::endl;
		if (v1 <= v2)
			std::cout << "v1 <= v2" << std::endl;
		if (v1 >= v2)
			std::cout << "v1 >= v2" << std::endl;
		if (v1 != v2)
			std::cout << "v1 != v2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		ft::swap(v1, v2);
		if (v1 == v2)
			std::cout << "v1 == v2" << std::endl;
		if (v1 < v2)
			std::cout << "v1 < v2" << std::endl;
		if (v1 > v2)
			std::cout << "v1 > v2" << std::endl;
		if (v1 <= v2)
			std::cout << "v1 <= v2" << std::endl;
		if (v1 >= v2)
			std::cout << "v1 >= v2" << std::endl;
		if (v1 != v2)
			std::cout << "v1 != v2" << std::endl;
		std::cout << "--- v1 = v2 ---" << std::endl;
		v1 = v2;
		if (v1 == v2)
			std::cout << "v1 == v2" << std::endl;
		if (v1 < v2)
			std::cout << "v1 < v2" << std::endl;
		if (v1 > v2)
			std::cout << "v1 > v2" << std::endl;
		if (v1 <= v2)
			std::cout << "v1 <= v2" << std::endl;
		if (v1 >= v2)
			std::cout << "v1 >= v2" << std::endl;
		if (v1 != v2)
			std::cout << "v1 != v2" << std::endl;
	}
	catch(int)
	{
		
	}

	try
	{
		std::cout << "--------- test with <std::string> ------\n" << std::endl;
		
		ft::Deque<std::string> v1;

		std::cout << "size = " << v1.size() << std::endl;
		if (v1.empty())
			std::cout << "Le Deque est vide !" << std::endl;
		else
			std::cout << "Le Deque n'est pas vide !" << std::endl;
		v1.push_back("Salut");
		printDeque(v1);
		v1.push_back("Bouboule");
		printDeque(v1);
		v1.push_back("babar");
		printDeque(v1);
		v1.push_back("blablabla");
		printDeque(v1);
		v1.pop_back();
		printDeque(v1);
		v1.pop_back();
		printDeque(v1);
		if (v1.empty())
			std::cout << "Le Deque est vide !" << std::endl;
		else
			std::cout << "Le Deque n'est pas vide !" << std::endl;

		v1.assign(5, "Bidule");
		printDeque(v1);
		v1.assign(5, "3tata");
		printDeque(v1);
		v1.assign(2, "2toto");
		printDeque(v1);

		v1.push_back("1qwerty");
		v1.push_back("azerty");
		v1.push_back("nananana");
		v1.push_back("4loulou");
		printDeque(v1);
		v1.clear();
		printDeque(v1);
		v1.push_back("jonaimar");
		v1.push_back("jenaimarre");
		v1.push_back("aaahhhhh");
		v1.push_back("taratata");
		printDeque(v1);
		std::cout << "v1[2] = " << v1[2] << std::endl;

		ft::Deque<std::string>::iterator ptr_first;
		ft::Deque<std::string>::iterator ptr_last;
		ptr_first = v1.begin();
		std::cout << "begin : " << *ptr_first <<std::endl;

		ft::Deque<std::string> v2;
		v2 = v1;
		printDeque(v2);
		std::cout << "v2.size = " << v2.size() << std::endl;
		v1.clear();
		printDeque(v1);
		v1.assign(5, "prout");
		printDeque(v1);
		v1.assign(5, "plage");
		printDeque(v1);
		v1.assign(2, "rugby");
		printDeque(v1);
		printDeque(v1); 
		v1.push_back("mot");
		printDeque(v1); 
		v1.push_back("des mots");
		printDeque(v1); 
		v1.push_back("encore des mots");
		printDeque(v1); 
		v1.push_back("oohhhhh");
		printDeque(v1);
		ptr_first = v1.begin();
		ptr_last = v1.end();
		std::cout << "*ptr_first = " << *ptr_first << "\n*ptr_last - 1 = " << *(ptr_last - 1) << std::endl;
		v1.assign(ptr_first + 2, ptr_last);
		printDeque(v1);
		try
		{
			std::cout << v1.at(0) << std::endl;
			std::cout << v1.at(1) << std::endl;
			std::cout << v1.at(2) << std::endl;
			std::cout << v1.at(3) << std::endl;
			std::cout << v1.at(4) << std::endl;
			std::cout << v1.at(5) << std::endl;
			std::cout << v1.at(6) << std::endl;
			std::cout << v1.at(7) << std::endl;
			std::cout << "COUCOU !!!" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << "front : " << v1.front() << std::endl;
		std::cout << "back : " << v1.back() << std::endl;
		std::cout << "max size : " << v1.max_size() << std::endl;
		printDeque(v1);
		v1.clear();
		for (int i = 0; i < 5; i++)
			v1.push_back("lalala" + std::to_string(i));
		ft::Deque<std::string>::iterator it;
		it = v1.begin();
		printDeque(v1);
		v1.insert(it, "12");
		printDeque(v1);
		it++;
		printDeque(v1);
		it = v1.end();
		v1.insert(it, "167");
		printDeque(v1);
		it--;
		it--;
		v1.erase(it);
		printDeque(v1);
		v1.erase(v1.begin(), (v1.begin() + 5));
		printDeque(v1);
		v1.resize(10, "42");
		printDeque(v1);
		v1.resize(2, "42");
		printDeque(v1);
		printDeque(v2);
		if (v1 == v2)
			std::cout << "v1 == v2" << std::endl;
		if (v1 < v2)
			std::cout << "v1 < v2" << std::endl;
		if (v1 > v2)
			std::cout << "v1 > v2" << std::endl;
		if (v1 <= v2)
			std::cout << "v1 <= v2" << std::endl;
		if (v1 >= v2)
			std::cout << "v1 >= v2" << std::endl;
		if (v1 != v2)
			std::cout << "v1 != v2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		ft::swap(v1, v2);
		if (v1 == v2)
			std::cout << "v1 == v2" << std::endl;
		if (v1 < v2)
			std::cout << "v1 < v2" << std::endl;
		if (v1 > v2)
			std::cout << "v1 > v2" << std::endl;
		if (v1 <= v2)
			std::cout << "v1 <= v2" << std::endl;
		if (v1 >= v2)
			std::cout << "v1 >= v2" << std::endl;
		if (v1 != v2)
			std::cout << "v1 != v2" << std::endl;
		std::cout << "--- v1 = v2 ---" << std::endl;
		v1 = v2;
		if (v1 == v2)
			std::cout << "v1 == v2" << std::endl;
		if (v1 < v2)
			std::cout << "v1 < v2" << std::endl;
		if (v1 > v2)
			std::cout << "v1 > v2" << std::endl;
		if (v1 <= v2)
			std::cout << "v1 <= v2" << std::endl;
		if (v1 >= v2)
			std::cout << "v1 >= v2" << std::endl;
		if (v1 != v2)
			std::cout << "v1 != v2" << std::endl;
	}
	catch(int)
	{
		
	}

	return 0;
}