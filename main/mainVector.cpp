/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainVector.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 00:54:00 by najimehdi         #+#    #+#             */
/*   Updated: 2020/04/24 04:36:36 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define ft std
// #define Vector vector

#include <iostream>
#include <utility>
#include "../Vector.hpp"
// #include <vector>

template<typename T>
void printVector(ft::Vector<T> &v)
{
	int i = 0;

	if (!v.size())
	{
		std::cout << "the vector is empty" << std::endl;
		return ;
	}
	while (i < (int)v.size())
	{
		std::cout << "[" << i << "] : " << v[i] << std::endl;
		i++;
	}
	std::cout << std::endl;
}

int main()
{
	std::cout << "\n==============    Vector     ==============" << std::endl;

	try
	{
		std::cout << "--------- test with <int> ------\n" << std::endl;
		
		ft::Vector<int> v1;

		std::cout << "size = " << v1.size() << std::endl;
		if (v1.empty())
			std::cout << "Le vector est vide !" << std::endl;
		else
			std::cout << "Le vector n'est pas vide !" << std::endl;
		v1.push_back(1);
		printVector(v1);
		v1.push_back(2);
		printVector(v1);
		v1.push_back(3);
		printVector(v1);
		v1.push_back(4);
		printVector(v1);
		v1.pop_back();
		printVector(v1);
		v1.pop_back();
		printVector(v1);
		if (v1.empty())
			std::cout << "Le vector est vide !" << std::endl;
		else
			std::cout << "Le vector n'est pas vide !" << std::endl;

		v1.assign(5, 10);
		printVector(v1);
		v1.assign(5, 3);
		printVector(v1);
		v1.assign(2, 2);
		printVector(v1);

		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		printVector(v1);
		v1.clear();
		printVector(v1);
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		printVector(v1);
		std::cout << "v1[2] = " << v1[2] << std::endl;

		ft::Vector<int>::iterator ptr_first;
		ft::Vector<int>::iterator ptr_last;
		ptr_first = v1.begin();
		std::cout << "begin : " << *ptr_first <<std::endl;
	
		ft::Vector<int> v2;
		v2 = v1;
		printVector(v2);
		std::cout << "v2.size = " << v2.size() << std::endl;
		v1.clear();
		printVector(v1);
		v1.assign(5, 10);
		printVector(v1);
		v1.assign(5, 3);
		printVector(v1);
		v1.assign(2, 2);
		printVector(v1);
		printVector(v1); 
		v1.push_back(10);
		printVector(v1); 
		v1.push_back(1);
		printVector(v1); 
		v1.push_back(2);
		printVector(v1); 
		v1.push_back(3);
		printVector(v1);
		ptr_first = v1.begin();
		ptr_last = v1.end();
		std::cout << "*ptr_first = " << *ptr_first << "\n*ptr_last - 1 = " << *(ptr_last - 1) << std::endl;
		v1.assign(ptr_first + 2, ptr_last);
		printVector(v1);
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
		ft::Vector<int>::iterator it;
		it = v1.begin();
		printVector(v1);
		v1.insert(it, 12);
		printVector(v1);
		it = v1.insert(it, 11);
		it++;
		printVector(v1);
		v1.insert(it, 44);
		printVector(v1);
		it = v1.end();
		v1.insert(it, 167);
		printVector(v1);
		it--;
		it--;
		v1.erase(it);
		printVector(v1);
		v1.erase(v1.begin(), (v1.begin() + 5));
		printVector(v1);
		v1.resize(10, 42);
		printVector(v1);
		v1.resize(2, 42);
		printVector(v1);
		printVector(v2);
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
		
		ft::Vector<std::string> v1;

		std::cout << "size = " << v1.size() << std::endl;
		if (v1.empty())
			std::cout << "Le vector est vide !" << std::endl;
		else
			std::cout << "Le vector n'est pas vide !" << std::endl;
		v1.push_back("Salut");
		printVector(v1);
		v1.push_back("Bouboule");
		printVector(v1);
		v1.push_back("babar");
		printVector(v1);
		v1.push_back("blablabla");
		printVector(v1);
		v1.pop_back();
		printVector(v1);
		v1.pop_back();
		printVector(v1);
		if (v1.empty())
			std::cout << "Le vector est vide !" << std::endl;
		else
			std::cout << "Le vector n'est pas vide !" << std::endl;

		v1.assign(5, "Bidule");
		printVector(v1);
		v1.assign(5, "3tata");
		printVector(v1);
		v1.assign(2, "2toto");
		printVector(v1);

		v1.push_back("1qwerty");
		v1.push_back("azerty");
		v1.push_back("nananana");
		v1.push_back("4loulou");
		printVector(v1);
		v1.clear();
		printVector(v1);
		v1.push_back("jonaimar");
		v1.push_back("jenaimarre");
		v1.push_back("aaahhhhh");
		v1.push_back("taratata");
		printVector(v1);
		std::cout << "v1[2] = " << v1[2] << std::endl;

		ft::Vector<std::string>::iterator ptr_first;
		ft::Vector<std::string>::iterator ptr_last;
		ptr_first = v1.begin();
		std::cout << "begin : " << *ptr_first <<std::endl;

		ft::Vector<std::string> v2;
		v2 = v1;
		printVector(v2);
		std::cout << "v2.size = " << v2.size() << std::endl;
		v1.clear();
		printVector(v1);
		v1.assign(5, "prout");
		printVector(v1);
		v1.assign(5, "plage");
		printVector(v1);
		v1.assign(2, "rugby");
		printVector(v1);
		printVector(v1); 
		v1.push_back("mot");
		printVector(v1); 
		v1.push_back("des mots");
		printVector(v1); 
		v1.push_back("encore des mots");
		printVector(v1); 
		v1.push_back("oohhhhh");
		printVector(v1);
		ptr_first = v1.begin();
		ptr_last = v1.end();
		std::cout << "*ptr_first = " << *ptr_first << "\n*ptr_last - 1 = " << *(ptr_last - 1) << std::endl;
		v1.assign(ptr_first + 2, ptr_last);
		printVector(v1);
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
		v1.reserve(20);
		printVector(v1);
		std::cout << "capacity = " << v1.capacity() << std::endl;
		std::cout << "capacity : " << v1.capacity() << std::endl;
		v1.clear();
		for (int i = 0; i < 5; i++)
			v1.push_back("lalala" + std::to_string(i));
		ft::Vector<std::string>::iterator it;
		it = v1.begin();
		printVector(v1);
		v1.insert(it, "12");
		printVector(v1);
		it = v1.insert(it, "11");
		it++;
		printVector(v1);
		v1.insert(it, "44");
		printVector(v1);
		it = v1.end();
		v1.insert(it, "167");
		printVector(v1);
		it--;
		it--;
		v1.erase(it);
		printVector(v1);
		v1.erase(v1.begin(), (v1.begin() + 5));
		printVector(v1);
		v1.resize(10, "42");
		printVector(v1);
		v1.resize(2, "42");
		printVector(v1);
		printVector(v2);
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