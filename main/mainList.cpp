/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainList.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 02:56:20 by najimehdi         #+#    #+#             */
/*   Updated: 2020/04/24 04:41:35 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define ft std
// #define List list

#include <iostream>
#include <utility>
#include "../List.hpp"
// #include <list>

struct is_odd {
	bool operator() (const int& value) { return (value%2) == 1; }
};

struct is_stringBeginOne {
	bool operator() (const std::string& value) { return value[0] == '1'; }
};

bool pAbs(int a, int b) {
   return (abs(a) == abs(b));
}

bool pStringEqual(std::string a, std::string b) {
   return (a == b);
}

bool pSup(int a, int b) {
   return (a > b);
}

bool pStringSup(std::string a, std::string b) {
   return (a > b);
}

std::ostream& operator<<(std::ostream& ostr, ft::List<int>& list)
{
    for (ft::List<int>::iterator it = list.begin(); it != list.end(); it++) {
        ostr << " " << *it;
    }
    return ostr;
}

void printPtrList(ft::List<int> &lst)
{
	ft::List<int>::iterator it = lst.begin();
	while (it != lst.end())
	{
		std::cout << &(*it) << " ";
		it++;
	}
	std::cout << std::endl;
}

std::ostream& operator<<(std::ostream& ostr, ft::List<std::string>& list)
{
    for (ft::List<std::string>::iterator it = list.begin(); it != list.end(); it++) {
        ostr << " " << *it;
    }
    return ostr;
}

void printPtrList(ft::List<std::string> &lst)
{
	ft::List<std::string>::iterator it = lst.begin();
	while (it != lst.end())
	{
		std::cout << &(*it) << " ";
		it++;
	}
	std::cout << std::endl;
}

void printList(ft::List<int> &l)
{
	int i = 0;
	ft::List<int>::iterator it = l.begin();
	while (it != l.end())
	{
		i++;
		std::cout << "[" << i << "] : " << *it << std::endl;
		it++;
	}
}

void printList(ft::List<std::string> &l)
{
	int i = 0;
	ft::List<std::string>::iterator it = l.begin();
	while (it != l.end())
	{
		i++;
		std::cout << "[" << i << "] : " << *it << std::endl;
		it++;
	}
}

int main()
{
	std::cout << "\n==============    LIST     ==============" << std::endl;

	try
	{
		std::cout << "--------- test with <int> ------\n" << std::endl;

		ft::List<int> l1;
		ft::List<int>::iterator itl;

		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_front(4);
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_front(3);
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_front(2);
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_front(1);
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_back(5);
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_back(6);
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_back(7);
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_back(8);
		printList(l1);
		std::cout << "-----------" << std::endl;
		itl = l1.end();
		itl--;
		std::cout << *itl<< std::endl;
		itl = l1.begin();
		std::cout << *itl<< std::endl;
		itl++;
		std::cout << *itl<< std::endl;
		itl++;
		std::cout << *itl<< std::endl;
		itl--;
		std::cout << *itl<< std::endl;
		itl--;
		std::cout << *itl<< std::endl;
		std::cout << "-----------" << std::endl;
		l1.pop_back();
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.pop_back();
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.pop_back();
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.pop_front();
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.pop_front();
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.pop_front();
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.clear();
		printList(l1);
		if (l1.empty())
			std::cout << "Le List est vide !" << std::endl;
		else
			std::cout << "Le List n'est pas vide !" << std::endl;
		std::cout << "size = " << l1.size() << std::endl;
		l1.push_back(1);
		l1.push_back(2);
		l1.push_back(3);
		l1.push_back(4);
		l1.push_back(5);
		l1.push_back(6);
		printList(l1);
		std::cout << "-----------" << std::endl;
		std::cout << "front : " << l1.front() << std::endl;
		std::cout << "back : " << l1.back() << std::endl;
		std::cout << "-----------" << std::endl;
		l1.clear();
		l1.push_front(1);
		l1.push_front(2);
		l1.push_front(3);
		l1.push_front(4);
		l1.push_front(5);
		l1.push_front(6);
		printList(l1);
		std::cout << "-----------" << std::endl;
		std::cout << "front : " << l1.front() << std::endl;
		std::cout << "back : " << l1.back() << std::endl;
		ft::List<int>::iterator itl2 = l1.begin();
		std::cout << *itl2 << std::endl;
		itl2++;
		std::cout << *itl2 << std::endl;
		itl2--;
		std::cout << *itl2 << std::endl;
		++itl2;
		std::cout << *itl2 << std::endl;
		--itl2;
		std::cout << *itl2 << std::endl;
		std::cout << "-----------" << std::endl;
		printList(l1);
		std::cout << "-----------" << std::endl;
		itl = l1.begin();
		itl = l1.insert(itl, 42);
		printList(l1);
		std::cout << "-----------" << std::endl;
		itl++;
		itl++;
		l1.insert(itl, 43);
		printList(l1);
		std::cout << "-----------" << std::endl;
		itl = l1.insert(l1.end(), 54);
		printList(l1);
		std::cout << "-----------" << std::endl;
		itl = l1.end();
		itl--;
		itl--;
		itl = l1.insert(itl, 55);
		printList(l1);
		std::cout << "-----------" << std::endl;
		std::cout << "pos = " << *itl << std::endl;
		l1.insert(itl, 5, 100);
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.assign(5, 42);
		printList(l1);
		std::cout << "-----------" << std::endl;
		itl = l1.begin();
		ft::List<int> l2;
		l2.push_front(1);
		l2.push_front(2);
		l2.push_front(3);
		l2.push_front(4);
		printList(l2);
		std::cout << "-----------" << std::endl;
		l2 = l1;
		printList(l2);
		std::cout << "-----------" << std::endl;
		ft::List<int> l3(l2);
		printList(l3);
		std::cout << "-----------" << std::endl;
		l3.clear();
		l3.push_back(1);
		l3.push_back(2);
		l3.push_back(3);
		l3.push_back(4);
		l3.push_back(5);
		printList(l3);
		std::cout << "-----------" << std::endl;
		l3.erase(l3.begin());
		printList(l3);
		std::cout << "-----------" << std::endl;
		itl = l3.begin();
		itl++;
		itl++;
		itl = l3.erase(itl);
		std::cout << "----> itl = " << *itl << std::endl;
		printList(l3);
		std::cout << "-----------" << std::endl;
		l3.clear();
		l3.push_back(1);
		l3.push_back(2);
		l3.push_back(3);
		l3.push_back(4);
		l3.push_back(5);
		printList(l3);
		std::cout << "-----------" << std::endl;
		itl = l3.begin();
		itl2 = l3.end();
		itl++;
		itl2--;
		itl2--;
		l3.erase(itl, itl2);
		printList(l3);
		std::cout << "-----------" << std::endl;
		std::cout << "-----------" << std::endl;
		l1.clear();
		l1.push_back(42);
		l1.push_back(30);
		l1.push_back(0);
		l1.push_back(-4);
		l1.push_back(112);
		l1.push_back(900);
		printList(l1);
		std::cout << "-----------" << std::endl;
		l2.clear();
		l2.push_back(21);
		l2.push_back(12);
		l2.push_back(54);
		l2.push_back(-44);
		l2.push_back(32);
		l2.push_back(112);
		l2.push_back(113);
		l2.push_back(114);
		printList(l2);
		std::cout << "-----------" << std::endl;
		if (l2.empty())
			std::cout << "l2 est vide !" << std::endl;
		else
			std::cout << "l2 n'est pas vide !" << std::endl;
		printList(l2);
		std::cout << "----------------" << std::endl;
		ft::List<int> list1;
		list1.push_back(1);
		list1.push_back(2);
		list1.push_back(3);
		list1.push_back(4);
		list1.push_back(5);
		ft::List<int> list2;
		list2.push_back(10);
		list2.push_back(20);
		list2.push_back(30);
		list2.push_back(40);
		list2.push_back(50);
	
		itl = list1.begin();
		itl++;
		itl++;
	
		std::cout << "list1: " << list1 << "\n";
		std::cout << "list2: " << list2 << "\n";
		printPtrList(list1);
		printPtrList(list2);

		list1.splice(itl, list2);
	
		std::cout << "list1: " << list1 << "\n";
		std::cout << "list2: " << list2 << "\n";
		printPtrList(list1);
		printPtrList(list2);
		
		l1.push_back(42);
		l1.push_back(101);
		l1.push_back(32);
		l1.push_back(42);
		l1.push_back(42);
		l1.push_back(42);
		l1.push_back(42);
		l1.push_back(11);
		l1.push_back(1111);
		l1.push_back(42);
		std::cout << "l1: " << l1 << "\n";
		l1.remove(42);
		std::cout << "l1: " << l1 << "\n";
		l1.remove_if(is_odd());
		std::cout << "l1: " << l1 << "\n";	
		l1.reverse();
		std::cout << "l1: " << l1 << "\n";
		l1.clear();
		l1.clear();
		l1.push_back(1);
		l1.push_back(1);
		l1.push_back(-1);
		l1.push_back(1);
		l1.push_back(-2);
		l1.push_back(-2);
		l1.push_back(1);
		l1.push_back(1);
		l1.push_back(-2);
		l1.push_back(1);
		l1.push_back(-2);
		l1.push_back(1);
		l1.push_back(1);
		l1.push_back(1);
		l1.push_back(-3);
		l1.push_back(3);
		l1.push_back(1);
		l1.push_back(-1);
		l1.push_back(-1);
		l1.push_back(-3);
		std::cout << "l1: " << l1 << "\n";
		l1.unique();
		std::cout << "l1: " << l1 << "\n";
		l1.clear();
		l1.push_back(1);
		l1.push_back(1);
		l1.push_back(-1);
		l1.push_back(1);
		l1.push_back(-2);
		l1.push_back(-2);
		l1.push_back(1);
		l1.push_back(1);
		l1.push_back(-2);
		l1.push_back(1);
		l1.push_back(-2);
		l1.push_back(1);
		l1.push_back(1);
		l1.push_back(1);
		l1.push_back(-3);
		l1.push_back(3);
		l1.push_back(1);
		l1.push_back(-1);
		l1.push_back(-1);
		l1.push_back(-3);
		std::cout << "l1: " << l1 << "\n";
		l1.unique(pAbs);
		std::cout << "l1: " << l1 << "\n";
		list1.push_front(32);
		list1.push_front(4000);
		list1.push_front(-12);
		list1.push_back(-32);
		list1.push_back(-1);
		list1.push_back(-2);
		list1.push_back(2);
		list1.push_back(5);
		std::cout << "list1: " << list1 << "\n";
		list1.sort();
		std::cout << "list1: " << list1 << "\n";
		list1.sort(pSup);
		std::cout << "list1: " << list1 << "\n";
		l1.clear();
		l1.push_front(32);
		l1.push_front(4000);
		l1.push_front(-12);
		l1.push_back(-32);
		l1.push_back(-1);
		l1.push_back(-2);
		l1.push_back(2);
		l1.push_back(5);
		l2.clear();
		l2.push_front(32);
		l2.push_front(4000);
		l2.push_front(-12);
		l2.push_back(-32);
		l2.push_back(-1);
		l2.push_back(-2);
		l2.push_back(2);
		l2.push_back(5);
		std::cout << "l1 = " << l1 << std::endl;
		std::cout << "l2 = " << l2 << std::endl;
		if (l1 == l2)
			std::cout << "l1 == l2" << std::endl;
		if (l1 < l2)
			std::cout << "l1 < l2" << std::endl;
		if (l1 > l2)
			std::cout << "l1 > l2" << std::endl;
		if (l1 <= l2)
			std::cout << "l1 <= l2" << std::endl;
		if (l1 >= l2)
			std::cout << "l1 >= l2" << std::endl;
		if (l1 != l2)
			std::cout << "l1 != l2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		l1.swap(l2);
		if (l1 == l2)
			std::cout << "l1 == l2" << std::endl;
		if (l1 < l2)
			std::cout << "l1 < l2" << std::endl;
		if (l1 > l2)
			std::cout << "l1 > l2" << std::endl;
		if (l1 <= l2)
			std::cout << "l1 <= l2" << std::endl;
		if (l1 >= l2)
			std::cout << "l1 >= l2" << std::endl;
		if (l1 != l2)
			std::cout << "l1 != l2" << std::endl;
		l1.clear();
		l1.push_front(32);
		l1.push_front(4000);
		l1.push_front(-12);
		l1.push_back(-32);
		l1.push_back(-1);
		l1.push_back(-2);
		l1.push_back(2);
		l1.push_back(5);
		l2.clear();
		l2.push_front(32);
		l2.push_front(4000);
		l2.push_front(-12);
		l2.push_back(-32);
		l2.push_back(-1);
		l2.push_back(-2);
		l2.push_back(12);
		l2.push_back(5);
		std::cout << "l1 = " << l1 << std::endl;
		std::cout << "l2 = " << l2 << std::endl;
		if (l1 == l2)
			std::cout << "l1 == l2" << std::endl;
		if (l1 < l2)
			std::cout << "l1 < l2" << std::endl;
		if (l1 > l2)
			std::cout << "l1 > l2" << std::endl;
		if (l1 <= l2)
			std::cout << "l1 <= l2" << std::endl;
		if (l1 >= l2)
			std::cout << "l1 >= l2" << std::endl;
		if (l1 != l2)
			std::cout << "l1 != l2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		l1.swap(l2);
		if (l1 == l2)
			std::cout << "l1 == l2" << std::endl;
		if (l1 < l2)
			std::cout << "l1 < l2" << std::endl;
		if (l1 > l2)
			std::cout << "l1 > l2" << std::endl;
		if (l1 <= l2)
			std::cout << "l1 <= l2" << std::endl;
		if (l1 >= l2)
			std::cout << "l1 >= l2" << std::endl;
		if (l1 != l2)
			std::cout << "l1 != l2" << std::endl;
		l1.clear();
		l1.push_front(32);
		l1.push_front(4000);
		l1.push_front(-12);
		l1.push_back(-32);
		l1.push_back(-1);
		l1.push_back(-2);
		l1.push_back(2);
		l1.push_back(5);
		l2.clear();
		l2.push_front(32);
		l2.push_front(4000);
		l2.push_front(-12);
		l2.push_back(-32);
		l2.push_back(-1);
		l2.push_back(-2);
		l2.push_back(2);
		std::cout << "l1 = " << l1 << std::endl;
		std::cout << "l2 = " << l2 << std::endl;
		if (l1 == l2)
			std::cout << "l1 == l2" << std::endl;
		if (l1 < l2)
			std::cout << "l1 < l2" << std::endl;
		if (l1 > l2)
			std::cout << "l1 > l2" << std::endl;
		if (l1 <= l2)
			std::cout << "l1 <= l2" << std::endl;
		if (l1 >= l2)
			std::cout << "l1 >= l2" << std::endl;
		if (l1 != l2)
			std::cout << "l1 != l2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		l1.swap(l2);
		if (l1 == l2)
			std::cout << "l1 == l2" << std::endl;
		if (l1 < l2)
			std::cout << "l1 < l2" << std::endl;
		if (l1 > l2)
			std::cout << "l1 > l2" << std::endl;
		if (l1 <= l2)
			std::cout << "l1 <= l2" << std::endl;
		if (l1 >= l2)
			std::cout << "l1 >= l2" << std::endl;
		if (l1 != l2)
			std::cout << "l1 != l2" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "--------- test with <string> ------\n" << std::endl;
		
		ft::List<std::string> l1;
		ft::List<std::string>::iterator itl;

		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_front("4");
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_front("3");
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_front("2");
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_front("1");
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_back("5");
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_back("6");
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_back("7");
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.push_back("8");
		printList(l1);
		std::cout << "-----------" << std::endl;
		itl = l1.end();
		itl--;
		std::cout << *itl<< std::endl;
		itl = l1.begin();
		std::cout << *itl<< std::endl;
		itl++;
		std::cout << *itl<< std::endl;
		itl++;
		std::cout << *itl<< std::endl;
		itl--;
		std::cout << *itl<< std::endl;
		itl--;
		std::cout << *itl<< std::endl;
		std::cout << "-----------" << std::endl;
		l1.pop_back();
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.pop_back();
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.pop_back();
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.pop_front();
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.pop_front();
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.pop_front();
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.clear();
		printList(l1);
		if (l1.empty())
			std::cout << "Le List est vide !" << std::endl;
		else
			std::cout << "Le List n'est pas vide !" << std::endl;
		std::cout << "size = " << l1.size() << std::endl;
		l1.push_back("1");
		l1.push_back("2");
		l1.push_back("3");
		l1.push_back("4");
		l1.push_back("5");
		l1.push_back("6");
		printList(l1);
		std::cout << "-----------" << std::endl;
		std::cout << "front : " << l1.front() << std::endl;
		std::cout << "back : " << l1.back() << std::endl;
		std::cout << "-----------" << std::endl;
		l1.clear();
		l1.push_front("1");
		l1.push_front("2");
		l1.push_front("3");
		l1.push_front("4");
		l1.push_front("5");
		l1.push_front("6");
		printList(l1);
		std::cout << "-----------" << std::endl;
		std::cout << "front : " << l1.front() << std::endl;
		std::cout << "back : " << l1.back() << std::endl;
		ft::List<std::string>::iterator itl2 = l1.begin();
		std::cout << *itl2 << std::endl;
		itl2++;
		std::cout << *itl2 << std::endl;
		itl2--;
		std::cout << *itl2 << std::endl;
		++itl2;
		std::cout << *itl2 << std::endl;
		--itl2;
		std::cout << *itl2 << std::endl;
		std::cout << "-----------" << std::endl;
		printList(l1);
		std::cout << "-----------" << std::endl;
		itl = l1.begin();
		itl = l1.insert(itl, "42");
		printList(l1);
		std::cout << "-----------" << std::endl;
		itl++;
		itl++;
		l1.insert(itl, "43");
		printList(l1);
		std::cout << "-----------" << std::endl;
		itl = l1.insert(l1.end(), "54");
		printList(l1);
		std::cout << "-----------" << std::endl;
		itl = l1.end();
		itl--;
		itl--;
		itl = l1.insert(itl, "55");
		printList(l1);
		std::cout << "-----------" << std::endl;
		std::cout << "pos = " << *itl << std::endl;
		l1.insert(itl, 5, "100");
		printList(l1);
		std::cout << "-----------" << std::endl;
		l1.assign(5, "42");
		printList(l1);
		std::cout << "-----------" << std::endl;
		itl = l1.begin();
		ft::List<std::string> l2;
		l2.push_front("1");
		l2.push_front("2");
		l2.push_front("3");
		l2.push_front("4");
		printList(l2);
		std::cout << "-----------" << std::endl;
		l2 = l1;
		printList(l2);
		std::cout << "-----------" << std::endl;
		ft::List<std::string> l3(l2);
		printList(l3);
		std::cout << "-----------" << std::endl;
		l3.clear();
		l3.push_back("1");
		l3.push_back("2");
		l3.push_back("3");
		l3.push_back("4");
		l3.push_back("5");
		printList(l3);
		std::cout << "-----------" << std::endl;
		l3.erase(l3.begin());
		printList(l3);
		std::cout << "-----------" << std::endl;
		itl = l3.begin();
		itl++;
		itl++;
		itl = l3.erase(itl);
		std::cout << "----> itl = " << *itl << std::endl;
		printList(l3);
		std::cout << "-----------" << std::endl;
		l3.clear();
		l3.push_back("1");
		l3.push_back("2");
		l3.push_back("3");
		l3.push_back("4");
		l3.push_back("5");
		printList(l3);
		std::cout << "-----------" << std::endl;
		itl = l3.begin();
		itl2 = l3.end();
		itl++;
		itl2--;
		itl2--;
		l3.erase(itl, itl2);
		printList(l3);
		std::cout << "-----------" << std::endl;
		std::cout << "-----------" << std::endl;
		l1.clear();
		l1.push_back("42");
		l1.push_back("30");
		l1.push_back("0");
		l1.push_back("-4");
		l1.push_back("112");
		l1.push_back("900");
		printList(l1);
		std::cout << "-----------" << std::endl;
		l2.clear();
		l2.push_back("21");
		l2.push_back("12");
		l2.push_back("54");
		l2.push_back("-44");
		l2.push_back("32");
		l2.push_back("112");
		l2.push_back("113");
		l2.push_back("114");
		printList(l2);
		std::cout << "-----------" << std::endl;
		if (l2.empty())
			std::cout << "l2 est vide !" << std::endl;
		else
			std::cout << "l2 n'est pas vide !" << std::endl;
		printList(l2);
		std::cout << "----------------" << std::endl;
		ft::List<std::string> list1;
		list1.push_back("1");
		list1.push_back("2");
		list1.push_back("3");
		list1.push_back("4");
		list1.push_back("5");
		ft::List<std::string> list2;
		list2.push_back("10");
		list2.push_back("20");
		list2.push_back("30");
		list2.push_back("40");
		list2.push_back("50");
	
		itl = list1.begin();
		itl++;
		itl++;
	
		std::cout << "list1: " << list1 << "\n";
		std::cout << "list2: " << list2 << "\n";
		printPtrList(list1);
		printPtrList(list2);

		list1.splice(itl, list2);
	
		std::cout << "list1: " << list1 << "\n";
		std::cout << "list2: " << list2 << "\n";
		printPtrList(list1);
		printPtrList(list2);
		
		l1.push_back("42");
		l1.push_back("101");
		l1.push_back("32");
		l1.push_back("42");
		l1.push_back("42");
		l1.push_back("42");
		l1.push_back("42");
		l1.push_back("11");
		l1.push_back("1111");
		l1.push_back("42");
		std::cout << "l1: " << l1 << "\n";
		l1.remove("42");
		std::cout << "l1: " << l1 << "\n";
		l1.remove_if(is_stringBeginOne());
		std::cout << "l1: " << l1 << "\n";	
		l1.reverse();
		std::cout << "l1: " << l1 << "\n";
		l1.clear();
		l1.clear();
		l1.push_back("1");
		l1.push_back("1");
		l1.push_back("-1");
		l1.push_back("1");
		l1.push_back("-2");
		l1.push_back("-2");
		l1.push_back("1");
		l1.push_back("1");
		l1.push_back("-2");
		l1.push_back("1");
		l1.push_back("-2");
		l1.push_back("1");
		l1.push_back("1");
		l1.push_back("1");
		l1.push_back("-3");
		l1.push_back("3");
		l1.push_back("1");
		l1.push_back("-1");
		l1.push_back("-1");
		l1.push_back("-3");
		std::cout << "l1: " << l1 << "\n";
		l1.unique();
		std::cout << "l1: " << l1 << "\n";
		l1.clear();
		l1.push_back("1");
		l1.push_back("1");
		l1.push_back("-1");
		l1.push_back("1");
		l1.push_back("-2");
		l1.push_back("-2");
		l1.push_back("1");
		l1.push_back("1");
		l1.push_back("-2");
		l1.push_back("1");
		l1.push_back("-2");
		l1.push_back("1");
		l1.push_back("1");
		l1.push_back("1");
		l1.push_back("-3");
		l1.push_back("3");
		l1.push_back("1");
		l1.push_back("-1");
		l1.push_back("-1");
		l1.push_back("-3");
		std::cout << "l1: " << l1 << "\n";
		l1.unique(pStringEqual);
		std::cout << "l1: " << l1 << "\n";
		list1.push_front("32");
		list1.push_front("4000");
		list1.push_front("-12");
		list1.push_back("-32");
		list1.push_back("-1");
		list1.push_back("-2");
		list1.push_back("2");
		list1.push_back("5");
		std::cout << "list1: " << list1 << "\n";
		list1.sort();
		std::cout << "list1: " << list1 << "\n";
		list1.sort(pStringSup);
		std::cout << "list1: " << list1 << "\n";
		l1.clear();
		l1.push_front("32");
		l1.push_front("4000");
		l1.push_front("-12");
		l1.push_back("-32");
		l1.push_back("-1");
		l1.push_back("-2");
		l1.push_back("2");
		l1.push_back("5");
		l2.clear();
		l2.push_front("32");
		l2.push_front("4000");
		l2.push_front("-12");
		l2.push_back("-32");
		l2.push_back("-1");
		l2.push_back("-2");
		l2.push_back("2");
		l2.push_back("5");
		std::cout << "l1 = " << l1 << std::endl;
		std::cout << "l2 = " << l2 << std::endl;
		if (l1 == l2)
			std::cout << "l1 == l2" << std::endl;
		if (l1 < l2)
			std::cout << "l1 < l2" << std::endl;
		if (l1 > l2)
			std::cout << "l1 > l2" << std::endl;
		if (l1 <= l2)
			std::cout << "l1 <= l2" << std::endl;
		if (l1 >= l2)
			std::cout << "l1 >= l2" << std::endl;
		if (l1 != l2)
			std::cout << "l1 != l2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		l1.swap(l2);
		if (l1 == l2)
			std::cout << "l1 == l2" << std::endl;
		if (l1 < l2)
			std::cout << "l1 < l2" << std::endl;
		if (l1 > l2)
			std::cout << "l1 > l2" << std::endl;
		if (l1 <= l2)
			std::cout << "l1 <= l2" << std::endl;
		if (l1 >= l2)
			std::cout << "l1 >= l2" << std::endl;
		if (l1 != l2)
			std::cout << "l1 != l2" << std::endl;
		l1.clear();
		l1.push_front("32");
		l1.push_front("4000");
		l1.push_front("-12");
		l1.push_back("-32");
		l1.push_back("-1");
		l1.push_back("-2");
		l1.push_back("2");
		l1.push_back("5");
		l2.clear();
		l2.push_front("32");
		l2.push_front("4000");
		l2.push_front("-12");
		l2.push_back("-32");
		l2.push_back("-1");
		l2.push_back("-2");
		l2.push_back("12");
		l2.push_back("5");
		std::cout << "l1 = " << l1 << std::endl;
		std::cout << "l2 = " << l2 << std::endl;
		if (l1 == l2)
			std::cout << "l1 == l2" << std::endl;
		if (l1 < l2)
			std::cout << "l1 < l2" << std::endl;
		if (l1 > l2)
			std::cout << "l1 > l2" << std::endl;
		if (l1 <= l2)
			std::cout << "l1 <= l2" << std::endl;
		if (l1 >= l2)
			std::cout << "l1 >= l2" << std::endl;
		if (l1 != l2)
			std::cout << "l1 != l2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		l1.swap(l2);
		if (l1 == l2)
			std::cout << "l1 == l2" << std::endl;
		if (l1 < l2)
			std::cout << "l1 < l2" << std::endl;
		if (l1 > l2)
			std::cout << "l1 > l2" << std::endl;
		if (l1 <= l2)
			std::cout << "l1 <= l2" << std::endl;
		if (l1 >= l2)
			std::cout << "l1 >= l2" << std::endl;
		if (l1 != l2)
			std::cout << "l1 != l2" << std::endl;
		l1.clear();
		l1.push_front("32");
		l1.push_front("4000");
		l1.push_front("-12");
		l1.push_back("-32");
		l1.push_back("-1");
		l1.push_back("-2");
		l1.push_back("2");
		l1.push_back("5");
		l2.clear();
		l2.push_front("32");
		l2.push_front("4000");
		l2.push_front("-12");
		l2.push_back("-32");
		l2.push_back("-1");
		l2.push_back("-2");
		l2.push_back("2");
		std::cout << "l1 = " << l1 << std::endl;
		std::cout << "l2 = " << l2 << std::endl;
		if (l1 == l2)
			std::cout << "l1 == l2" << std::endl;
		if (l1 < l2)
			std::cout << "l1 < l2" << std::endl;
		if (l1 > l2)
			std::cout << "l1 > l2" << std::endl;
		if (l1 <= l2)
			std::cout << "l1 <= l2" << std::endl;
		if (l1 >= l2)
			std::cout << "l1 >= l2" << std::endl;
		if (l1 != l2)
			std::cout << "l1 != l2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		l1.swap(l2);
		if (l1 == l2)
			std::cout << "l1 == l2" << std::endl;
		if (l1 < l2)
			std::cout << "l1 < l2" << std::endl;
		if (l1 > l2)
			std::cout << "l1 > l2" << std::endl;
		if (l1 <= l2)
			std::cout << "l1 <= l2" << std::endl;
		if (l1 >= l2)
			std::cout << "l1 >= l2" << std::endl;
		if (l1 != l2)
			std::cout << "l1 != l2" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}