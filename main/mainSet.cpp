/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainSet.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 04:10:17 by najimehdi         #+#    #+#             */
/*   Updated: 2020/04/24 04:44:39 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define ft std
// #define Set set
// #define MultiSet multiset

#include <iostream>
#include <utility>
#include "../Set.hpp"
// #include <set>

std::ostream& operator<<(std::ostream& ostr, ft::MultiSet<int>& MultiSet)
{
    for (ft::MultiSet<int>::iterator it = MultiSet.begin(); it != MultiSet.end(); it++) {
        ostr << " " << *it;
    }
    return ostr;
}

std::ostream& operator<<(std::ostream& ostr, ft::Set<std::string>& Set)
{
    for (ft::Set<std::string>::iterator it = Set.begin(); it != Set.end(); it++) {
        ostr << " " << *it;
    }
    return ostr;
}

std::ostream& operator<<(std::ostream& ostr, ft::Set<int>& Set)
{
    for (ft::Set<int>::iterator it = Set.begin(); it != Set.end(); it++) {
        ostr << " " << *it;
    }
    return ostr;
}

std::ostream& operator<<(std::ostream& ostr, ft::MultiSet<std::string>& MultiSet)
{
    for (ft::MultiSet<std::string>::iterator it = MultiSet.begin(); it != MultiSet.end(); it++) {
        ostr << " " << *it;
    }
    return ostr;
}

int main()
{
	std::cout << "\n==============    Set     ==============" << std::endl;

	try
	{
		std::cout << "--------- test with <int> ------\n" << std::endl;

		ft::Set<int> S1;

		if (S1.empty())
			std::cout << "S1 est vide" << std::endl;
		else
		{
			std::cout << "S1 n'est pas vide" << std::endl;
			std::cout << "S1 = " << S1 << std::endl;
		}
		S1.insert(10);
		if (S1.empty())
			std::cout << "S1 est vide" << std::endl;
		else
		{
			std::cout << "S1 n'est pas vide" << std::endl;
			std::cout << "S1 = " << S1 << std::endl;
		}
		S1.insert(10);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(1);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(34);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(-4);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(56);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(98);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(10000);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(2);
		std::cout << "S1 = " << S1 << std::endl;

		S1.clear();
		if (S1.empty())
			std::cout << "S1 est vide" << std::endl;
		else
		{
			std::cout << "S1 n'est pas vide" << std::endl;
			std::cout << "S1 = " << S1 << std::endl;
		}

		S1.insert(10);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(1);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(34);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(-4);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(56);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(98);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(10000);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(2);
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S1 = " << S1 << std::endl;

		ft::Set<int>::iterator it1 = S1.begin();
		std::cout << *it1 << std::endl;
		it1++;
		std::cout << *it1 << std::endl;
		it1++;
		std::cout << *it1 << std::endl;
		it1++;
		std::cout << *it1 << std::endl;
		std::cout << "Boucle while *iterator :" << std::endl;
		while (it1 != S1.end())
		{
			std::cout << *it1 << std::endl;
			it1++;
		}
		std::cout << "size = " << S1.size() << std::endl;

		it1 = S1.begin();
		S1.erase(it1);
		std::cout << "S1 = " << S1 << std::endl;
		it1 = S1.begin();
		it1++;
		it1++;
		S1.erase(it1);
		std::cout << "S1 = " << S1 << std::endl;
		S1.erase(10);
		std::cout << "S1 = " << S1 << std::endl;
		S1.erase(98);
		std::cout << "S1 = " << S1 << std::endl;
		S1.erase(2);
		std::cout << "S1 = " << S1 << std::endl;
		
		ft::Set<int> S2 = S1;
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		S2.insert(33);
		S2.insert(1);
		S2.insert(12);
		S2.insert(-54);
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;

		std::cout << "S1.count(12) = " << S1.count(12) << std::endl;
		std::cout << "S2.count(12) = " << S2.count(12) << std::endl;

		it1 = S1.find(12);
		ft::Set<int>::iterator it2 = S2.find(12);

		if (it1 == S1.end())
			std::cout << "12 not found in S1" << std::endl;
		else
			std::cout << *it1 << " found in S1!" << std::endl;
		if (it2 == S2.end())
			std::cout << "12 not found in S2" << std::endl;
		else
			std::cout << *it2 << " found in S2!" << std::endl;

		std::cout << "S1.lower_bound(12) = " << *(S1.lower_bound(12)) << std::endl;
		std::cout << "S2.lower_bound(12) = " << *(S2.lower_bound(12)) << std::endl;
		std::cout << "S1.lower_bound(33) = " << *(S1.lower_bound(33)) << std::endl;
		std::cout << "S2.lower_bound(33) = " << *(S2.lower_bound(33)) << std::endl;
		std::cout << "S1.lower_bound(-4) = " << *(S1.lower_bound(-4)) << std::endl;
		std::cout << "S2.lower_bound(-4) = " << *(S2.lower_bound(-4)) << std::endl;
		std::cout << "S1.upper_bound(12) = " << *(S1.upper_bound(12)) << std::endl;
		std::cout << "S2.upper_bound(12) = " << *(S2.upper_bound(12)) << std::endl;
		std::cout << "S1.upper_bound(33) = " << *(S1.upper_bound(33)) << std::endl;
		std::cout << "S2.upper_bound(33) = " << *(S2.upper_bound(33)) << std::endl;
		std::cout << "S1.upper_bound(-4) = " << *(S1.upper_bound(-4)) << std::endl;
		std::cout << "S2.upper_bound(-4) = " << *(S2.upper_bound(-4)) << std::endl;

		S1.clear();
		S2.clear();

		S1.insert(10);
		S1.insert(1);
		S1.insert(9);
		S1.insert(3);
		S1.insert(7);
		S1.insert(8);
		S1.insert(2);
		S1.insert(4);
		S1.insert(6);
		S1.insert(5);
		S1.insert(10);
		S1.insert(10);
		S1.insert(10);
		S1.insert(10);

		S2.insert(10);
		S2.insert(1);
		S2.insert(9);
		S2.insert(3);
		S2.insert(7);
		S2.insert(8);
		S2.insert(2);
		S2.insert(4);
		S2.insert(6);
		S2.insert(5);
		S1.insert(10);
		S1.insert(10);
		S1.insert(10);
		S1.insert(10);

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;

		it1 = S1.end();
		it1--;
		S1.erase(it1);

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;

		S1.insert(11);

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;

		S2.insert(33);

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	try
	{
		std::cout << "--------- test with <std::string> ------\n" << std::endl;

		ft::Set<std::string> S1;

		if (S1.empty())
			std::cout << "S1 est vide" << std::endl;
		else
		{
			std::cout << "S1 n'est pas vide" << std::endl;
			std::cout << "S1 = " << S1 << std::endl;
		}
		S1.insert("10");
		if (S1.empty())
			std::cout << "S1 est vide" << std::endl;
		else
		{
			std::cout << "S1 n'est pas vide" << std::endl;
			std::cout << "S1 = " << S1 << std::endl;
		}
		S1.insert("10");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("1");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("34");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("-4");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("56");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("98");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("10000");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("2");
		std::cout << "S1 = " << S1 << std::endl;

		S1.clear();
		if (S1.empty())
			std::cout << "S1 est vide" << std::endl;
		else
		{
			std::cout << "S1 n'est pas vide" << std::endl;
			std::cout << "S1 = " << S1 << std::endl;
		}

		S1.insert("10");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("1");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("34");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("-4");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("56");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("98");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("10000");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("2");
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S1 = " << S1 << std::endl;

		ft::Set<std::string>::iterator it1 = S1.begin();
		std::cout << *it1 << std::endl;
		it1++;
		std::cout << *it1 << std::endl;
		it1++;
		std::cout << *it1 << std::endl;
		it1++;
		std::cout << *it1 << std::endl;
		std::cout << "Boucle while *iterator :" << std::endl;
		while (it1 != S1.end())
		{
			std::cout << *it1 << std::endl;
			it1++;
		}
		std::cout << "size = " << S1.size() << std::endl;

		it1 = S1.begin();
		S1.erase(it1);
		std::cout << "S1 = " << S1 << std::endl;
		it1 = S1.begin();
		it1++;
		it1++;
		S1.erase(it1);
		std::cout << "S1 = " << S1 << std::endl;
		S1.erase("10");
		std::cout << "S1 = " << S1 << std::endl;
		S1.erase("98");
		std::cout << "S1 = " << S1 << std::endl;
		S1.erase("2");
		std::cout << "S1 = " << S1 << std::endl;
		
		ft::Set<std::string> S2 = S1;
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		S2.insert("33");
		S2.insert("1");
		S2.insert("12");
		S2.insert("-54");
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;

		std::cout << "S1.count(12) = " << S1.count("12") << std::endl;
		std::cout << "S2.count(12) = " << S2.count("12") << std::endl;

		it1 = S1.find("12");
		ft::Set<std::string>::iterator it2 = S2.find("12");

		if (it1 == S1.end())
			std::cout << "12 not found in S1" << std::endl;
		else
			std::cout << *it1 << " found in S1!" << std::endl;
		if (it2 == S2.end())
			std::cout << "12 not found in S2" << std::endl;
		else
			std::cout << *it2 << " found in S2!" << std::endl;

		std::cout << "S1.lower_bound(12) = " << *(S1.lower_bound("12")) << std::endl;
		std::cout << "S2.lower_bound(12) = " << *(S2.lower_bound("12")) << std::endl;
		std::cout << "S1.lower_bound(33) = " << *(S1.lower_bound("33")) << std::endl;
		std::cout << "S2.lower_bound(33) = " << *(S2.lower_bound("33")) << std::endl;
		std::cout << "S1.lower_bound(-4) = " << *(S1.lower_bound("-4")) << std::endl;
		std::cout << "S2.lower_bound(-4) = " << *(S2.lower_bound("-4")) << std::endl;
		std::cout << "S1.upper_bound(12) = " << *(S1.upper_bound("12")) << std::endl;
		std::cout << "S2.upper_bound(12) = " << *(S2.upper_bound("12")) << std::endl;
		std::cout << "S1.upper_bound(33) = " << *(S1.upper_bound("33")) << std::endl;
		std::cout << "S2.upper_bound(33) = " << *(S2.upper_bound("33")) << std::endl;
		std::cout << "S1.upper_bound(-4) = " << *(S1.upper_bound("-4")) << std::endl;
		std::cout << "S2.upper_bound(-4) = " << *(S2.upper_bound("-4")) << std::endl;

		S1.clear();
		S2.clear();

		S1.insert("10");
		S1.insert("1");
		S1.insert("9");
		S1.insert("3");
		S1.insert("7");
		S1.insert("8");
		S1.insert("2");
		S1.insert("4");
		S1.insert("6");
		S1.insert("5");
		S1.insert("10");
		S1.insert("10");
		S1.insert("10");
		S1.insert("10");

		S2.insert("10");
		S2.insert("1");
		S2.insert("9");
		S2.insert("3");
		S2.insert("7");
		S2.insert("8");
		S2.insert("2");
		S2.insert("4");
		S2.insert("6");
		S2.insert("5");
		S1.insert("10");
		S1.insert("10");
		S1.insert("10");
		S1.insert("10");

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;

		it1 = S1.end();
		it1--;
		S1.erase(it1);

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;

		S1.insert("11");

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;

		S2.insert("33");

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	//================================================================//
	//------------------------      MultiSet        ----------------------//
	//===============================================================//

	std::cout << "\n==============    MultiSet     ==============" << std::endl;

	try
	{
		std::cout << "--------- test with <int> ------\n" << std::endl;

		ft::MultiSet<int> S1;

		if (S1.empty())
			std::cout << "S1 est vide" << std::endl;
		else
		{
			std::cout << "S1 n'est pas vide" << std::endl;
			std::cout << "S1 = " << S1 << std::endl;
		}
		S1.insert(10);
		if (S1.empty())
			std::cout << "S1 est vide" << std::endl;
		else
		{
			std::cout << "S1 n'est pas vide" << std::endl;
			std::cout << "S1 = " << S1 << std::endl;
		}
		S1.insert(10);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(1);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(34);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(-4);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(56);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(98);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(10000);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(2);
		std::cout << "S1 = " << S1 << std::endl;

		S1.clear();
		if (S1.empty())
			std::cout << "S1 est vide" << std::endl;
		else
		{
			std::cout << "S1 n'est pas vide" << std::endl;
			std::cout << "S1 = " << S1 << std::endl;
		}

		S1.insert(10);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(1);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(34);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(-4);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(56);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(98);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(10000);
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert(2);
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S1 = " << S1 << std::endl;

		ft::MultiSet<int>::iterator it1 = S1.begin();
		std::cout << *it1 << std::endl;
		it1++;
		std::cout << *it1 << std::endl;
		it1++;
		std::cout << *it1 << std::endl;
		it1++;
		std::cout << *it1 << std::endl;
		std::cout << "Boucle while *iterator :" << std::endl;
		while (it1 != S1.end())
		{
			std::cout << *it1 << std::endl;
			it1++;
		}
		std::cout << "size = " << S1.size() << std::endl;

		it1 = S1.begin();
		S1.erase(it1);
		std::cout << "S1 = " << S1 << std::endl;
		it1 = S1.begin();
		it1++;
		it1++;
		S1.erase(it1);
		std::cout << "S1 = " << S1 << std::endl;
		S1.erase(10);
		std::cout << "S1 = " << S1 << std::endl;
		S1.erase(98);
		std::cout << "S1 = " << S1 << std::endl;
		S1.erase(2);
		std::cout << "S1 = " << S1 << std::endl;
		
		ft::MultiSet<int> S2 = S1;
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		S2.insert(33);
		S2.insert(1);
		S2.insert(12);
		S2.insert(-54);
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;

		std::cout << "S1.count(12) = " << S1.count(12) << std::endl;
		std::cout << "S2.count(12) = " << S2.count(12) << std::endl;

		it1 = S1.find(12);
		ft::MultiSet<int>::iterator it2 = S2.find(12);

		if (it1 == S1.end())
			std::cout << "12 not found in S1" << std::endl;
		else
			std::cout << *it1 << " found in S1!" << std::endl;
		if (it2 == S2.end())
			std::cout << "12 not found in S2" << std::endl;
		else
			std::cout << *it2 << " found in S2!" << std::endl;

		std::cout << "S1.lower_bound(12) = " << *(S1.lower_bound(12)) << std::endl;
		std::cout << "S2.lower_bound(12) = " << *(S2.lower_bound(12)) << std::endl;
		std::cout << "S1.lower_bound(33) = " << *(S1.lower_bound(33)) << std::endl;
		std::cout << "S2.lower_bound(33) = " << *(S2.lower_bound(33)) << std::endl;
		std::cout << "S1.lower_bound(-4) = " << *(S1.lower_bound(-4)) << std::endl;
		std::cout << "S2.lower_bound(-4) = " << *(S2.lower_bound(-4)) << std::endl;
		std::cout << "S1.upper_bound(12) = " << *(S1.upper_bound(12)) << std::endl;
		std::cout << "S2.upper_bound(12) = " << *(S2.upper_bound(12)) << std::endl;
		std::cout << "S1.upper_bound(33) = " << *(S1.upper_bound(33)) << std::endl;
		std::cout << "S2.upper_bound(33) = " << *(S2.upper_bound(33)) << std::endl;
		std::cout << "S1.upper_bound(-4) = " << *(S1.upper_bound(-4)) << std::endl;
		std::cout << "S2.upper_bound(-4) = " << *(S2.upper_bound(-4)) << std::endl;

		S1.clear();
		S2.clear();

		S1.insert(10);
		S1.insert(1);
		S1.insert(9);
		S1.insert(3);
		S1.insert(7);
		S1.insert(8);
		S1.insert(2);
		S1.insert(4);
		S1.insert(6);
		S1.insert(5);
		S1.insert(10);
		S1.insert(10);
		S1.insert(10);
		S1.insert(10);

		S2.insert(10);
		S2.insert(1);
		S2.insert(9);
		S2.insert(3);
		S2.insert(7);
		S2.insert(8);
		S2.insert(2);
		S2.insert(4);
		S2.insert(6);
		S2.insert(5);
		S1.insert(10);
		S1.insert(10);
		S1.insert(10);
		S1.insert(10);

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;

		it1 = S1.end();
		it1--;
		S1.erase(it1);

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;

		S1.insert(11);

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;

		S2.insert(33);

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	try
	{
		std::cout << "--------- test with <std::string> ------\n" << std::endl;

		ft::MultiSet<std::string> S1;

		if (S1.empty())
			std::cout << "S1 est vide" << std::endl;
		else
		{
			std::cout << "S1 n'est pas vide" << std::endl;
			std::cout << "S1 = " << S1 << std::endl;
		}
		S1.insert("10");
		if (S1.empty())
			std::cout << "S1 est vide" << std::endl;
		else
		{
			std::cout << "S1 n'est pas vide" << std::endl;
			std::cout << "S1 = " << S1 << std::endl;
		}
		S1.insert("10");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("1");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("34");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("-4");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("56");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("98");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("10000");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("2");
		std::cout << "S1 = " << S1 << std::endl;

		S1.clear();
		if (S1.empty())
			std::cout << "S1 est vide" << std::endl;
		else
		{
			std::cout << "S1 n'est pas vide" << std::endl;
			std::cout << "S1 = " << S1 << std::endl;
		}

		S1.insert("10");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("1");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("34");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("-4");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("56");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("98");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("10000");
		std::cout << "S1 = " << S1 << std::endl;
		S1.insert("2");
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S1 = " << S1 << std::endl;

		ft::MultiSet<std::string>::iterator it1 = S1.begin();
		std::cout << *it1 << std::endl;
		it1++;
		std::cout << *it1 << std::endl;
		it1++;
		std::cout << *it1 << std::endl;
		it1++;
		std::cout << *it1 << std::endl;
		std::cout << "Boucle while *iterator :" << std::endl;
		while (it1 != S1.end())
		{
			std::cout << *it1 << std::endl;
			it1++;
		}
		std::cout << "size = " << S1.size() << std::endl;

		it1 = S1.begin();
		S1.erase(it1);
		std::cout << "S1 = " << S1 << std::endl;
		it1 = S1.begin();
		it1++;
		it1++;
		S1.erase(it1);
		std::cout << "S1 = " << S1 << std::endl;
		S1.erase("10");
		std::cout << "S1 = " << S1 << std::endl;
		S1.erase("98");
		std::cout << "S1 = " << S1 << std::endl;
		S1.erase("2");
		std::cout << "S1 = " << S1 << std::endl;
		
		ft::MultiSet<std::string> S2 = S1;
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		S2.insert("33");
		S2.insert("1");
		S2.insert("12");
		S2.insert("-54");
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;

		std::cout << "S1.count(12) = " << S1.count("12") << std::endl;
		std::cout << "S2.count(12) = " << S2.count("12") << std::endl;

		it1 = S1.find("12");
		ft::MultiSet<std::string>::iterator it2 = S2.find("12");

		if (it1 == S1.end())
			std::cout << "12 not found in S1" << std::endl;
		else
			std::cout << *it1 << " found in S1!" << std::endl;
		if (it2 == S2.end())
			std::cout << "12 not found in S2" << std::endl;
		else
			std::cout << *it2 << " found in S2!" << std::endl;

		std::cout << "S1.lower_bound(12) = " << *(S1.lower_bound("12")) << std::endl;
		std::cout << "S2.lower_bound(12) = " << *(S2.lower_bound("12")) << std::endl;
		std::cout << "S1.lower_bound(33) = " << *(S1.lower_bound("33")) << std::endl;
		std::cout << "S2.lower_bound(33) = " << *(S2.lower_bound("33")) << std::endl;
		std::cout << "S1.lower_bound(-4) = " << *(S1.lower_bound("-4")) << std::endl;
		std::cout << "S2.lower_bound(-4) = " << *(S2.lower_bound("-4")) << std::endl;
		std::cout << "S1.upper_bound(12) = " << *(S1.upper_bound("12")) << std::endl;
		std::cout << "S2.upper_bound(12) = " << *(S2.upper_bound("12")) << std::endl;
		std::cout << "S1.upper_bound(33) = " << *(S1.upper_bound("33")) << std::endl;
		std::cout << "S2.upper_bound(33) = " << *(S2.upper_bound("33")) << std::endl;
		std::cout << "S1.upper_bound(-4) = " << *(S1.upper_bound("-4")) << std::endl;
		std::cout << "S2.upper_bound(-4) = " << *(S2.upper_bound("-4")) << std::endl;

		S1.clear();
		S2.clear();

		S1.insert("10");
		S1.insert("1");
		S1.insert("9");
		S1.insert("3");
		S1.insert("7");
		S1.insert("8");
		S1.insert("2");
		S1.insert("4");
		S1.insert("6");
		S1.insert("5");
		S1.insert("10");
		S1.insert("10");
		S1.insert("10");
		S1.insert("10");

		S2.insert("10");
		S2.insert("1");
		S2.insert("9");
		S2.insert("3");
		S2.insert("7");
		S2.insert("8");
		S2.insert("2");
		S2.insert("4");
		S2.insert("6");
		S2.insert("5");
		S1.insert("10");
		S1.insert("10");
		S1.insert("10");
		S1.insert("10");

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;

		it1 = S1.end();
		it1--;
		S1.erase(it1);

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;

		S1.insert("11");

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;

		S2.insert("33");

		std::cout << "S1 = " << S1 << std::endl;
		std::cout << "S2 = " << S2 << std::endl;
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		S1.swap(S2);
		if (S1 == S2)
			std::cout << "S1 == S2" << std::endl;
		if (S1 < S2)
			std::cout << "S1 < S2" << std::endl;
		if (S1 > S2)
			std::cout << "S1 > S2" << std::endl;
		if (S1 <= S2)
			std::cout << "S1 <= S2" << std::endl;
		if (S1 >= S2)
			std::cout << "S1 >= S2" << std::endl;
		if (S1 != S2)
			std::cout << "S1 != S2" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}