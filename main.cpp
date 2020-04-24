/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 01:56:12 by najimehdi         #+#    #+#             */
/*   Updated: 2020/04/24 05:01:52 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define ft std
// #define Deque deque
// #define Stack stack
// #define Vector vector
// #define List list
// #define Map map
// #define MultiMap multimap
// #define Set set
// #define MultiSet multiset
// #define Queue queue

#include <iostream>
#include <utility>

#include "Queue.hpp"
#include "Stack.hpp"
#include "Vector.hpp"
#include "Deque.hpp"
#include "List.hpp"
#include "Map.hpp"
#include "Set.hpp"

// #include <queue>
// #include <stack>
// #include <vector>
// #include <deque>
// #include <list>
// #include <map>
// #include <set>

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

std::ostream& operator<<(std::ostream& ostr, ft::Map<std::string, int>& Map)
{
    for (ft::Map<std::string, int>::iterator it = Map.begin(); it != Map.end(); it++) {
        ostr << "    " << it->first << " : " << it->second << std::endl;
    }
    return ostr;
}

std::ostream& operator<<(std::ostream& ostr, ft::Map<int, std::string>& map)
{
    for (ft::Map<int, std::string>::iterator it = map.begin(); it != map.end(); it++) {
        ostr << "    " << it->first << " : " << it->second << std::endl;
    }
    return ostr;
}

std::ostream& operator<<(std::ostream& ostr, ft::MultiMap<std::string, int>& MultiMap)
{
    for (ft::MultiMap<std::string, int>::iterator it = MultiMap.begin(); it != MultiMap.end(); it++) {
        ostr << "    " << it->first << " : " << it->second << std::endl;
    }
    return ostr;
}

std::ostream& operator<<(std::ostream& ostr, ft::MultiMap<int, std::string>& MultiMap)
{
    for (ft::MultiMap<int, std::string>::iterator it = MultiMap.begin(); it != MultiMap.end(); it++) {
        ostr << "    " << it->first << " : " << it->second << std::endl;
    }
    return ostr;
}

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


// void printPtrList(ft::List<int> &lst)
// {
// 	ft::List<int>::iterator it = lst.begin();
// 	while (it != lst.end())
// 	{
// 		std::cout << &(*it) << " ";
// 		it++;
// 	}
// 	std::cout << std::endl;
// }

std::ostream& operator<<(std::ostream& ostr, ft::List<std::string>& list)
{
    for (ft::List<std::string>::iterator it = list.begin(); it != list.end(); it++) {
        ostr << " " << *it;
    }
    return ostr;
}

// void printPtrList(ft::List<std::string> &lst)
// {
// 	ft::List<std::string>::iterator it = lst.begin();
// 	while (it != lst.end())
// 	{
// 		std::cout << &(*it) << " ";
// 		it++;
// 	}
// 	std::cout << std::endl;
// }

template<typename T>
void printVector(ft::Vector<T> &v)
{
	int i = 0;

	if (!v.size())
		std::cout << "the vector is empty" << std::endl;
	while (i < (int)v.size())
	{
		std::cout << "[" << i << "] : " << v[i] << std::endl;
		i++;
	}
	std::cout << std::endl;
}

template<typename T>
void printDeque(ft::Deque<T> &v)
{
	int i = 0;

	if (!v.size())
		std::cout << "the vector is empty" << std::endl;
	while (i < (int)v.size())
	{
		std::cout << "[" << i << "] : " << v[i] << std::endl;
		i++;
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

bool comparatorSupInt(int first, int second) 
{ 
    return first < second; 
} 

int main()
{
	std::cout << "\n==============    STACK     ==============" << std::endl;
	std::cout << "--------- test with <int> ------\n" << std::endl;
	try
	{
		ft::Stack<int> S;
		ft::Stack<int> S2;

		std::cout << "size = " << S.size() << std::endl;
		if (S.empty())
			std::cout << "La stack est vide !" << std::endl;
		else
			std::cout << "La stack n'est pas vide !" << std::endl;
		S.push(4);
		std::cout << S.top() << std::endl;
		std::cout << "size = " << S.size() << std::endl;
		S.push(6);
		std::cout << S.top() << std::endl;
		std::cout << "size = " << S.size() << std::endl;
		S.push(-4);
		std::cout << S.top() << std::endl;
		std::cout << "1size = " << S.size() << std::endl;
		if (S.empty())
			std::cout << "La stack est vide !" << std::endl;
		else
			std::cout << "La stack n'est pas vide !" << std::endl;
		S.pop();
		std::cout << S.top() << std::endl;
		std::cout << "size = " << S.size() << std::endl;
		S.pop();
		S.push(42);
		S.push(-2);
		S2.push(42);
		S2.push(-2);
		S2.push(-12);
		S2.push(89);
		S2.push(0);
		S2.push(12);
		if (S2 == S)
			std::cout << "S2 == S" << std::endl;
		if (S2 < S)
			std::cout << "S2 < S" << std::endl;
		if (S2 > S)
			std::cout << "S2 > S" << std::endl;
		if (S2 <= S)
			std::cout << "S2 <= S" << std::endl;
		if (S2 >= S)
			std::cout << "S2 >= S" << std::endl;
		if (S2 != S)
			std::cout << "S2 != S" << std::endl;
		std::cout << "-----------" << std::endl;
		ft::Stack<int> S3;
		ft::Stack<int> S4;
		S3.push(42);
		S3.push(0);
		S4.push(42);
		S4.push(0);
		S3.push(1);
		std::cout << "size = " << S3.size() << std::endl;
		std::cout << "size = " << S4.size() << std::endl;
		if (S3 == S4)
			std::cout << "S3 == S4" << std::endl;
		if (S3 < S4)
			std::cout << "S3 < S4" << std::endl;
		if (S3 > S4)
			std::cout << "S3 > S4" << std::endl;
		if (S3 <= S4)
			std::cout << "S3 <= S4" << std::endl;
		if (S3 >= S4)
			std::cout << "S3 >= S4" << std::endl;
		if (S3 != S4)
			std::cout << "S3 != S4" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		ft::swap(S3, S4);
		if (S3 == S4)
			std::cout << "S3 == S4" << std::endl;
		if (S3 < S4)
			std::cout << "S3 < S4" << std::endl;
		if (S3 > S4)
			std::cout << "S3 > S4" << std::endl;
		if (S3 <= S4)
			std::cout << "S3 <= S4" << std::endl;
		if (S3 >= S4)
			std::cout << "S3 >= S4" << std::endl;
		if (S3 != S4)
			std::cout << "S3 != S4" << std::endl;
		ft::Stack<int> S5;
		S5 = S2;
		std::cout << S5.top() << std::endl;
	}
	catch (int)
	{

	}

	std::cout << "\n--------- test with <std::string> ------\n" << std::endl;
	try
	{
		ft::Stack<std::string> S;
		ft::Stack<std::string> S2;

		std::cout << "size = " << S.size() << std::endl;
		if (S.empty())
			std::cout << "La stack est vide !" << std::endl;
		else
			std::cout << "La stack n'est pas vide !" << std::endl;
		S.push("Bonjour");
		std::cout << S.top() << std::endl;
		std::cout << "size = " << S.size() << std::endl;
		S.push("proutprout");
		std::cout << S.top() << std::endl;
		std::cout << "size = " << S.size() << std::endl;
		S.push("testetstets");
		std::cout << S.top() << std::endl;
		std::cout << "1size = " << S.size() << std::endl;
		if (S.empty())
			std::cout << "La stack est vide !" << std::endl;
		else
			std::cout << "La stack n'est pas vide !" << std::endl;
		S.pop();
		std::cout << "size = " << S.size() << std::endl;
		S.pop();
		std::cout << S.top() << std::endl;
		S.push("blablabla");
		S.push("ouiouioui");
		S2.push("Nananana");
		S2.push("Bouboule");
		S2.push("Babar");
		S2.push("Unicorne");
		S2.push("Zero");
		S2.push("PSG");
		if (S2 == S)
			std::cout << "S2 == S" << std::endl;
		if (S2 < S)
			std::cout << "S2 < S" << std::endl;
		if (S2 > S)
			std::cout << "S2 > S" << std::endl;
		if (S2 <= S)
			std::cout << "S2 <= S" << std::endl;
		if (S2 >= S)
			std::cout << "S2 >= S" << std::endl;
		if (S2 != S)
			std::cout << "S2 != S" << std::endl;
		std::cout << "-----------" << std::endl;
		ft::Stack<std::string> S3;
		ft::Stack<std::string> S4;
		S3.push("42");
		std::cout <<"top = " << S.top() << std::endl;
		S3.push("0");
		S4.push("42");
		S4.push("0");
		S3.push("1");
		std::cout << "size = " << S3.size() << std::endl;
		std::cout << "size = " << S4.size() << std::endl;
		if (S3 == S4)
			std::cout << "S3 == S4" << std::endl;
		if (S3 < S4)
			std::cout << "S3 < S4" << std::endl;
		if (S3 > S4)
			std::cout << "S3 > S4" << std::endl;
		if (S3 <= S4)
			std::cout << "S3 <= S4" << std::endl;
		if (S3 >= S4)
			std::cout << "S3 >= S4" << std::endl;
		if (S3 != S4)
			std::cout << "S3 != S4" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		ft::swap(S3, S4);
		if (S3 == S4)
			std::cout << "S3 == S4" << std::endl;
		if (S3 < S4)
			std::cout << "S3 < S4" << std::endl;
		if (S3 > S4)
			std::cout << "S3 > S4" << std::endl;
		if (S3 <= S4)
			std::cout << "S3 <= S4" << std::endl;
		if (S3 >= S4)
			std::cout << "S3 >= S4" << std::endl;
		if (S3 != S4)
			std::cout << "S3 != S4" << std::endl;
		ft::Stack<std::string> S5;
		S5 = S2;
	}
	catch (int)
	{

	}

	//================================================================//
	//------------------------    QUEUE    ---------------------------//
	//===============================================================//

	std::cout << "\n--------- test with <std::string> ------\n" << std::endl;
	try
	{
		ft::Queue<int> S;
		ft::Queue<int> S2;

		std::cout << "size = " << S.size() << std::endl;
		if (S.empty())
			std::cout << "La Queue est vide !" << std::endl;
		else
			std::cout << "La Queue n'est pas vide !" << std::endl;
		S.push(4);
		std::cout << S.front() << std::endl;
		std::cout << "size = " << S.size() << std::endl;
		S.push(6);
		std::cout << S.back() << std::endl;
		std::cout << "size = " << S.size() << std::endl;
		S.push(-4);
		std::cout << S.front() << std::endl;
		std::cout << "1size = " << S.size() << std::endl;
		if (S.empty())
			std::cout << "La Queue est vide !" << std::endl;
		else
			std::cout << "La Queue n'est pas vide !" << std::endl;
		S.pop();
		std::cout << S.back() << std::endl;
		std::cout << "size = " << S.size() << std::endl;
		S.pop();
		S.push(42);
		S.push(-2);
		S2.push(42);
		S2.push(-2);
		S2.push(-12);
		S2.push(89);
		S2.push(0);
		S2.push(12);
		if (S2 == S)
			std::cout << "S2 == S" << std::endl;
		if (S2 < S)
			std::cout << "S2 < S" << std::endl;
		if (S2 > S)
			std::cout << "S2 > S" << std::endl;
		if (S2 <= S)
			std::cout << "S2 <= S" << std::endl;
		if (S2 >= S)
			std::cout << "S2 >= S" << std::endl;
		if (S2 != S)
			std::cout << "S2 != S" << std::endl;
		std::cout << "-----------" << std::endl;
		ft::Queue<int> S3;
		ft::Queue<int> S4;
		S3.push(42);
		S3.push(0);
		S4.push(42);
		S4.push(0);
		S3.push(1);
		std::cout << "size = " << S3.size() << std::endl;
		std::cout << "size = " << S4.size() << std::endl;
		if (S3 == S4)
			std::cout << "S3 == S4" << std::endl;
		if (S3 < S4)
			std::cout << "S3 < S4" << std::endl;
		if (S3 > S4)
			std::cout << "S3 > S4" << std::endl;
		if (S3 <= S4)
			std::cout << "S3 <= S4" << std::endl;
		if (S3 >= S4)
			std::cout << "S3 >= S4" << std::endl;
		if (S3 != S4)
			std::cout << "S3 != S4" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		ft::swap(S3, S4);
		if (S3 == S4)
			std::cout << "S3 == S4" << std::endl;
		if (S3 < S4)
			std::cout << "S3 < S4" << std::endl;
		if (S3 > S4)
			std::cout << "S3 > S4" << std::endl;
		if (S3 <= S4)
			std::cout << "S3 <= S4" << std::endl;
		if (S3 >= S4)
			std::cout << "S3 >= S4" << std::endl;
		if (S3 != S4)
			std::cout << "S3 != S4" << std::endl;
		ft::Queue<int> S5;
		S5 = S2;
		std::cout << S5.front() << std::endl;
	}
	catch (int)
	{

	}

	std::cout << "\n--------- test with <std::string> ------\n" << std::endl;
	try
	{
		ft::Queue<std::string> S;
		ft::Queue<std::string> S2;

		std::cout << "size = " << S.size() << std::endl;
		if (S.empty())
			std::cout << "La Queue est vide !" << std::endl;
		else
			std::cout << "La Queue n'est pas vide !" << std::endl;
		S.push("Bonjour");
		std::cout << S.back() << std::endl;
		std::cout << "size = " << S.size() << std::endl;
		S.push("proutprout");
		std::cout << S.front() << std::endl;
		std::cout << "size = " << S.size() << std::endl;
		S.push("testetstets");
		std::cout << S.back() << std::endl;
		std::cout << "1size = " << S.size() << std::endl;
		if (S.empty())
			std::cout << "La Queue est vide !" << std::endl;
		else
			std::cout << "La Queue n'est pas vide !" << std::endl;
		S.back();
		std::cout << "size = " << S.size() << std::endl;
		S.front();
		std::cout << S.front() << std::endl;
		S.push("blablabla");
		S.push("ouiouioui");
		S2.push("Nananana");
		S2.push("Bouboule");
		S2.push("Babar");
		S2.push("Unicorne");
		S2.push("Zero");
		S2.push("PSG");
		if (S2 == S)
			std::cout << "S2 == S" << std::endl;
		if (S2 < S)
			std::cout << "S2 < S" << std::endl;
		if (S2 > S)
			std::cout << "S2 > S" << std::endl;
		if (S2 <= S)
			std::cout << "S2 <= S" << std::endl;
		if (S2 >= S)
			std::cout << "S2 >= S" << std::endl;
		if (S2 != S)
			std::cout << "S2 != S" << std::endl;
		std::cout << "-----------" << std::endl;
		ft::Queue<std::string> S3;
		ft::Queue<std::string> S4;
		S3.push("42");
		S3.push("0");
		S4.push("42");
		S4.push("0");
		S3.push("1");
		std::cout << "size = " << S3.size() << std::endl;
		std::cout << "size = " << S4.size() << std::endl;
		if (S3 == S4)
			std::cout << "S3 == S4" << std::endl;
		if (S3 < S4)
			std::cout << "S3 < S4" << std::endl;
		if (S3 > S4)
			std::cout << "S3 > S4" << std::endl;
		if (S3 <= S4)
			std::cout << "S3 <= S4" << std::endl;
		if (S3 >= S4)
			std::cout << "S3 >= S4" << std::endl;
		if (S3 != S4)
			std::cout << "S3 != S4" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		ft::swap(S3, S4);
		if (S3 == S4)
			std::cout << "S3 == S4" << std::endl;
		if (S3 < S4)
			std::cout << "S3 < S4" << std::endl;
		if (S3 > S4)
			std::cout << "S3 > S4" << std::endl;
		if (S3 <= S4)
			std::cout << "S3 <= S4" << std::endl;
		if (S3 >= S4)
			std::cout << "S3 >= S4" << std::endl;
		if (S3 != S4)
			std::cout << "S3 != S4" << std::endl;
		ft::Queue<std::string> S5;
		S5 = S2;
	}
	catch (int)
	{

	}

	//================================================================//
	//------------------------    VECTOR    ---------------------------//
	//===============================================================//

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

	//================================================================//
	//------------------------    DEQUE    ---------------------------//
	//===============================================================//

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
	
	//================================================================//
	//------------------------    LIST    ---------------------------//
	//===============================================================//

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
		// printPtrList(list1);
		// printPtrList(list2);

		list1.splice(itl, list2);
	
		std::cout << "list1: " << list1 << "\n";
		std::cout << "list2: " << list2 << "\n";
		// printPtrList(list1);
		// printPtrList(list2);
		
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
		// printPtrList(list1);
		// printPtrList(list2);

		list1.splice(itl, list2);
	
		std::cout << "list1: " << list1 << "\n";
		std::cout << "list2: " << list2 << "\n";
		// printPtrList(list1);
		// printPtrList(list2);
		
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

	//================================================================//
	//------------------------     MAP    ---------------------------//
	//===============================================================//

	std::cout << "\n==============    MAP     ==============" << std::endl;	

	try
	{
		std::cout << "--------- test with <string::int><int> ------\n" << std::endl;

		ft::Map<std::string, int> M1;
		ft::Map<std::string, int>::iterator itM1;

		M1.insert(std::make_pair("earth", 1));

		if ((itM1 = M1.find("earth")) == M1.end())
			std::cout << "earth est introuvable" << std::endl;
		else
			std::cout << "earth est la terre numero " << itM1->second << std::endl;
		if ((itM1 = M1.find("mars")) == M1.end())
			std::cout << "mars est introuvable" << std::endl;
		else
			std::cout << "mars est la terre numero " << itM1->second << std::endl;

		std::pair<ft::Map<std::string, int>::iterator, bool> ret;
		
		ret = M1.insert(std::make_pair("lune", 2));
		if (ret.second == false)
		{
			std::cout << "element " << ret.first->first << " already existed";
			std::cout << " with a value of " << ret.first->second << '\n';
		}
		else
		{
			std::cout << "element " << ret.first->first << " has been add";
			std::cout << " with a value of " << ret.first->second << '\n';
		}
		
		ret = M1.insert(std::make_pair("lune", 3000));
		if (ret.second == false)
		{
			std::cout << "element " << ret.first->first << " already existed";
			std::cout << " with a value of " << ret.first->second << '\n';
		}
		else
		{
			std::cout << "element " << ret.first->first << " has been add";
			std::cout << " with a value of " << ret.first->second << '\n';
		}

		ret = M1.insert(std::make_pair("mars", 3));
		if (ret.second == false)
		{
			std::cout << "element " << ret.first->first << " already existed";
			std::cout << " with a value of " << ret.first->second << '\n';
		}
		else
		{
			std::cout << "element " << ret.first->first << " has been add";
			std::cout << " with a value of " << ret.first->second << '\n';
		}

		ret = M1.insert(std::make_pair("aaaaa", 99999));
		if (ret.second == false)
		{
			std::cout << "element " << ret.first->first << " already existed";
			std::cout << " with a value of " << ret.first->second << '\n';
		}
		else
		{
			std::cout << "element " << ret.first->first << " has been add";
			std::cout << " with a value of " << ret.first->second << '\n';
		}

		ret = M1.insert(std::make_pair("zzzzz", 99999));
		if (ret.second == false)
		{
			std::cout << "element " << ret.first->first << " already existed";
			std::cout << " with a value of " << ret.first->second << '\n';
		}
		else
		{
			std::cout << "element " << ret.first->first << " has been add";
			std::cout << " with a value of " << ret.first->second << '\n';
		}

		std::cout << "M1 :\n" << M1 << std::endl;

		ft::Map<std::string ,int> anothermap;
		anothermap.insert(M1.begin(),M1.find("mars"));
		std::cout << "another map :\n" << anothermap << std::endl;
		anothermap.insert(M1.begin(),M1.find("zzzzz"));
		std::cout << "another map :\n" << anothermap << std::endl;
		anothermap.insert(M1.begin(),M1.find("blablabla"));
		std::cout << "another map :\n" << anothermap << std::endl;

		std::cout << "Earth est la planete numero " << M1["earth"] << std::endl;
		std::cout << "Mars est la planete numero " << M1["mars"] << std::endl;
		M1["earth"] = 4;
		M1["mars"] = 222;
		std::cout << "M1 :\n" << M1 << std::endl;
		M1["pluton"] = 12;
		std::cout << "M1 :\n" << M1 << std::endl;
		std::cout << "Mercure est la planete numero " << M1["mercure"] << std::endl;
		std::cout << "M1 :\n" << M1 << std::endl;

		std::cout << "M1.size() = " << M1.size() << std::endl;
		std::cout << "anotherMap.size() = " << anothermap.size() << std::endl;
		if (M1.empty())
			std::cout << "M1 est vide" << std::endl;
		else
			std::cout << "M1 n'est pas vide" << std::endl;
		if (anothermap.empty())
			std::cout << "anotherMap est vide" << std::endl;
		else
			std::cout << "anotherMap n'est pas vide" << std::endl;
		anothermap.clear();
		std::cout << "----- clear anotherMap -----" << std::endl;
		if (anothermap.empty())
			std::cout << "anotherMap est vide" << std::endl;
		else
			std::cout << "anotherMap n'est pas vide" << std::endl;
		std::cout << "anotherMap.size() = " << anothermap.size() << std::endl;
		std::cout << "another map :\n" << anothermap << std::endl;

		std::cout << "M1 :\n" << M1 << std::endl;
		M1.erase("mars");
		std::cout << "coucou" << std::endl;
		std::cout << "M1 :\n" << M1 << std::endl;
		M1.erase(M1.begin());
		std::cout << "M1 :\n" << M1 << std::endl;
		itM1 = M1.end();
		itM1--;
		itM1--;
		M1.erase(itM1);
		std::cout << "M1 :\n" << M1 << std::endl;
		M1["pluton"] = 5;
		std::cout << "M1 :\n" << M1 << std::endl;
		anothermap["Paris"] = 75;
		anothermap["Marseille"] = 13;
		anothermap["Toulouse"] = 31;
		std::cout << "another map :\n" << anothermap << std::endl;
		std::cout << "M1 <---SWAP---> anothermap" << std::endl;
		M1.swap(anothermap);
		std::cout << "M1 :\n" << M1 << std::endl;
		std::cout << "another map :\n" << anothermap << std::endl;

		std::cout << "M1 : nbr de key earth = " << M1.count("earth") << std::endl;
		std::cout << "anotherMap : nbr de key earth = " << anothermap.count("earth") << std::endl;

		std::cout << "lowerBound M1(Earth) = " << M1.lower_bound("Earth")->first << " :: " << M1.lower_bound("Earth")->second << std::endl;
		std::cout << "lowerBound M1(A) = " << M1.lower_bound("A")->first << " :: " << M1.lower_bound("A")->second << std::endl;
		std::cout << "lowerBound M1(Pouloulou) = " << M1.lower_bound("Pouloulou")->first << " :: " << M1.lower_bound("Pouloulou")->second << std::endl;
		std::cout << "lowerBound anotherMap(earth) = " << anothermap.lower_bound("earth")->first << " :: " << anothermap.lower_bound("earth")->second << std::endl;
		std::cout << "lowerBound anotherMap(a) = " << anothermap.lower_bound("a")->first << " :: " << anothermap.lower_bound("a")->second << std::endl;
		std::cout << "lowerBound anotherMap(pouloulou) = " << anothermap.lower_bound("pouloulou")->first << " :: " << anothermap.lower_bound("pouloulou")->second << std::endl;

		std::cout << "upperBound M1(Earth) = " << M1.upper_bound("Earth")->first << " :: " << M1.upper_bound("Earth")->second << std::endl;
		std::cout << "upperBound M1(A) = " << M1.upper_bound("A")->first << " :: " << M1.upper_bound("A")->second << std::endl;
		std::cout << "upperBound M1(Pouloulou) = " << M1.upper_bound("Pouloulou")->first << " :: " << M1.upper_bound("Pouloulou")->second << std::endl;
		std::cout << "upperBound anotherMap(a) = " << anothermap.upper_bound("a")->first << " :: " << anothermap.upper_bound("a")->second << std::endl;
		std::cout << "upperBound anotherMap(pouloulou) = " << anothermap.upper_bound("pouloulou")->first << " :: " << anothermap.upper_bound("pouloulou")->second << std::endl;

		ft::Map<std::string, int> m1;
		ft::Map<std::string, int> m2;

		m1.insert(std::make_pair("un", 1));
		m1.insert(std::make_pair("deux", 2));
		m1.insert(std::make_pair("trois", 3));
		m1.insert(std::make_pair("quatre", 4));
		m1.insert(std::make_pair("cinq", 5));
		m1.insert(std::make_pair("six", 6));

		m2.insert(std::make_pair("un", 1));
		m2.insert(std::make_pair("deux", 2));
		m2.insert(std::make_pair("trois", 3));
		m2.insert(std::make_pair("quatre", 4));
		m2.insert(std::make_pair("cinq", 5));
		m2.insert(std::make_pair("six", 6));

		std::cout << "m1 = " << m1 << std::endl;
		std::cout << "m2 = " << m2 << std::endl;
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		m1.swap(m2);
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;

		m1["quatre"] = 4;
		m1["sept"] = 7;

		std::cout << "m1 = " << m1 << std::endl;
		std::cout << "m2 = " << m2 << std::endl;
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		m1.swap(m2);
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		std::cout << "--------- test with <int><std::string> ------\n" << std::endl;

		ft::Map<int, std::string> M1;
		ft::Map<int, std::string>::iterator itM1;

		M1.insert(std::make_pair(1, "earth"));

		if ((itM1 = M1.find(1)) == M1.end())
			std::cout << "1 est introuvable" << std::endl;
		else
			std::cout << "1 est la terre numero " << itM1->second << std::endl;
		if ((itM1 = M1.find(3)) == M1.end())
			std::cout << "3 est introuvable" << std::endl;
		else
			std::cout << "3 est la terre numero " << itM1->second << std::endl;

		std::pair<ft::Map<int, std::string>::iterator, bool> ret;
		
		ret = M1.insert(std::make_pair(2, "lune"));
		if (ret.second == false)
		{
			std::cout << "element " << ret.first->first << " already existed";
			std::cout << " with a value of " << ret.first->second << '\n';
		}
		else
		{
			std::cout << "element " << ret.first->first << " has been add";
			std::cout << " with a value of " << ret.first->second << '\n';
		}
		
		ret = M1.insert(std::make_pair(2, "neptune"));
		if (ret.second == false)
		{
			std::cout << "element " << ret.first->first << " already existed";
			std::cout << " with a value of " << ret.first->second << '\n';
		}
		else
		{
			std::cout << "element " << ret.first->first << " has been add";
			std::cout << " with a value of " << ret.first->second << '\n';
		}

		ret = M1.insert(std::make_pair(3, "mars"));
		if (ret.second == false)
		{
			std::cout << "element " << ret.first->first << " already existed";
			std::cout << " with a value of " << ret.first->second << '\n';
		}
		else
		{
			std::cout << "element " << ret.first->first << " has been add";
			std::cout << " with a value of " << ret.first->second << '\n';
		}

		ret = M1.insert(std::make_pair(99999, "aaaaa"));
		if (ret.second == false)
		{
			std::cout << "element " << ret.first->first << " already existed";
			std::cout << " with a value of " << ret.first->second << '\n';
		}
		else
		{
			std::cout << "element " << ret.first->first << " has been add";
			std::cout << " with a value of " << ret.first->second << '\n';
		}

		ret = M1.insert(std::make_pair(0, "zzzzz"));
		if (ret.second == false)
		{
			std::cout << "element " << ret.first->first << " already existed";
			std::cout << " with a value of " << ret.first->second << '\n';
		}
		else
		{
			std::cout << "element " << ret.first->first << " has been add";
			std::cout << " with a value of " << ret.first->second << '\n';
		}

		std::cout << "M1 :\n" << M1 << std::endl;

		ft::Map<int ,std::string> anothermap;
		anothermap.insert(M1.begin(),M1.find(3));
		std::cout << "another map :\n" << anothermap << std::endl;
		anothermap.insert(M1.begin(),M1.find(0));
		std::cout << "another map :\n" << anothermap << std::endl;
		anothermap.insert(M1.begin(),M1.find(874687));
		std::cout << "another map :\n" << anothermap << std::endl;

		std::cout << "1 est la planete " << M1[1] << std::endl;
		std::cout << "3 est la planete " << M1[3] << std::endl;
		M1[1] = "pluton";
		M1[3] = "soleil";
		std::cout << "M1 :\n" << M1 << std::endl;
		M1[3] = "uranus";
		std::cout << "M1 :\n" << M1 << std::endl;
		std::cout << "2 est la planete numero " << M1[2] << std::endl;
		std::cout << "M1 :\n" << M1 << std::endl;

		std::cout << "M1.size() = " << M1.size() << std::endl;
		std::cout << "anotherMap.size() = " << anothermap.size() << std::endl;
		if (M1.empty())
			std::cout << "M1 est vide" << std::endl;
		else
			std::cout << "M1 n'est pas vide" << std::endl;
		if (anothermap.empty())
			std::cout << "anotherMap est vide" << std::endl;
		else
			std::cout << "anotherMap n'est pas vide" << std::endl;
		anothermap.clear();
		std::cout << "----- clear anotherMap -----" << std::endl;
		if (anothermap.empty())
			std::cout << "anotherMap est vide" << std::endl;
		else
			std::cout << "anotherMap n'est pas vide" << std::endl;
		std::cout << "anotherMap.size() = " << anothermap.size() << std::endl;
		std::cout << "another map :\n" << anothermap << std::endl;

		std::cout << "M1 :\n" << M1 << std::endl;
		M1.erase(3);
		std::cout << "M1 :\n" << M1 << std::endl;
		M1.erase(M1.begin());
		std::cout << "M1 :\n" << M1 << std::endl;
		itM1 = M1.end();
		itM1--;
		itM1--;
		M1.erase(itM1);
		std::cout << "M1 :\n" << M1 << std::endl;
		M1[5] = "tartanplan";
		std::cout << "M1 :\n" << M1 << std::endl;
		anothermap[75] = "Paris";
		anothermap[13] = "Marseille";
		anothermap[31] = "Toulouse";
		std::cout << "another map :\n" << anothermap << std::endl;
		std::cout << "M1 <---SWAP---> anothermap" << std::endl;
		M1.swap(anothermap);
		std::cout << "M1 :\n" << M1 << std::endl;
		std::cout << "another map :\n" << anothermap << std::endl;

		std::cout << "M1 : nbr de key 1 = " << M1.count(1) << std::endl;
		std::cout << "anotherMap : nbr de key 1 = " << anothermap.count(1) << std::endl;

		std::cout << "lowerBound M1(1) = " << M1.lower_bound(1)->first << " :: " << M1.lower_bound(1)->second << std::endl;
		std::cout << "lowerBound M1(12) = " << M1.lower_bound(12)->first << " :: " << M1.lower_bound(12)->second << std::endl;
		std::cout << "lowerBound anotherMap(75) = " << anothermap.lower_bound(75)->first << " :: " << anothermap.lower_bound(75)->second << std::endl;
		std::cout << "lowerBound anotherMap(3) = " << anothermap.lower_bound(3)->first << " :: " << anothermap.lower_bound(3)->second << std::endl;
		std::cout << "lowerBound anotherMap(9999) = " << anothermap.lower_bound(9999)->first << " :: " << anothermap.lower_bound(9999)->second << std::endl;

		std::cout << "upperBound M1(1) = " << M1.upper_bound(1)->first << " :: " << M1.upper_bound(1)->second << std::endl;
		std::cout << "upperBound M1(12) = " << M1.upper_bound(12)->first << " :: " << M1.upper_bound(12)->second << std::endl;
		std::cout << "upperBound anotherMap(75) = " << anothermap.upper_bound(75)->first << " :: " << anothermap.upper_bound(75)->second << std::endl;
		std::cout << "upperBound anotherMap(3) = " << anothermap.upper_bound(3)->first << " :: " << anothermap.upper_bound(3)->second << std::endl;
		std::cout << "upperBound anotherMap(9999) = " << anothermap.upper_bound(9999)->first << " :: " << anothermap.upper_bound(9999)->second << std::endl;

		ft::Map<int, std::string> m1;
		ft::Map<int, std::string> m2;

		m1.insert(std::make_pair(1, "un"));
		m1.insert(std::make_pair(2, "deux"));
		m1.insert(std::make_pair(3, "trois"));
		m1.insert(std::make_pair(4, "quatre"));
		m1.insert(std::make_pair(5, "cinq"));
		m1.insert(std::make_pair(6, "six"));

		m2.insert(std::make_pair(1, "un"));
		m2.insert(std::make_pair(2, "deux"));
		m2.insert(std::make_pair(3, "trois"));
		m2.insert(std::make_pair(4, "quatre"));
		m2.insert(std::make_pair(5, "cinq"));
		m2.insert(std::make_pair(6, "six"));

		std::cout << "m1 = " << m1 << std::endl;
		std::cout << "m2 = " << m2 << std::endl;
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		m1.swap(m2);
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;

		m1[4] = "quatre";

		std::cout << "m1 = " << m1 << std::endl;
		std::cout << "m2 = " << m2 << std::endl;
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		m1.swap(m2);
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;

		m1[4] = "quatre";
		m1[7] = "sept";

		std::cout << "m1 = " << m1 << std::endl;
		std::cout << "m2 = " << m2 << std::endl;
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		m1.swap(m2);
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	//================================================================//
	//------------------------     MultiMap    ----------------------//
	//===============================================================//

	std::cout << "\n==============    MultiMap     ==============" << std::endl;	

	try
	{
		std::cout << "--------- test with <string::int><int> ------\n" << std::endl;

		ft::MultiMap<std::string, int> M1;
		ft::MultiMap<std::string, int>::iterator itM1;

		M1.insert(std::make_pair("earth", 1));

		if ((itM1 = M1.find("earth")) == M1.end())
			std::cout << "earth est introuvable" << std::endl;
		else
			std::cout << "earth est la terre numero " << itM1->second << std::endl;
		if ((itM1 = M1.find("mars")) == M1.end())
			std::cout << "mars est introuvable" << std::endl;
		else
			std::cout << "mars est la terre numero " << itM1->second << std::endl;

		ft::MultiMap<std::string, int>::iterator ret;
		
		ret = M1.insert(std::make_pair("lune", 2));
		
		ret = M1.insert(std::make_pair("mars", 3));

		ret = M1.insert(std::make_pair("aaaaa", 99999));

		ret = M1.insert(std::make_pair("zzzzz", 99999));

		std::cout << "M1 :\n" << M1 << std::endl;

		ft::MultiMap<std::string ,int> anotherMultiMap;
		anotherMultiMap.insert(M1.begin(),M1.find("mars"));
		std::cout << "another MultiMap :\n" << anotherMultiMap << std::endl;
		anotherMultiMap.insert(M1.begin(),M1.find("zzzzz"));
		std::cout << "another MultiMap :\n" << anotherMultiMap << std::endl;
		anotherMultiMap.insert(M1.begin(),M1.find("blablabla"));
		std::cout << "another MultiMap :\n" << anotherMultiMap << std::endl;

		std::cout << "M1 :\n" << M1 << std::endl;

		std::cout << "M1.size() = " << M1.size() << std::endl;
		std::cout << "anotherMultiMap.size() = " << anotherMultiMap.size() << std::endl;
		if (M1.empty())
			std::cout << "M1 est vide" << std::endl;
		else
			std::cout << "M1 n'est pas vide" << std::endl;
		if (anotherMultiMap.empty())
			std::cout << "anotherMultiMap est vide" << std::endl;
		else
			std::cout << "anotherMultiMap n'est pas vide" << std::endl;
		anotherMultiMap.clear();
		std::cout << "----- clear anotherMultiMap -----" << std::endl;
		if (anotherMultiMap.empty())
			std::cout << "anotherMultiMap est vide" << std::endl;
		else
			std::cout << "anotherMultiMap n'est pas vide" << std::endl;
		std::cout << "anotherMultiMap.size() = " << anotherMultiMap.size() << std::endl;
		std::cout << "another MultiMap :\n" << anotherMultiMap << std::endl;

		std::cout << "M1 :\n" << M1 << std::endl;
		M1.erase("mars");
		std::cout << "coucou" << std::endl;
		std::cout << "M1 :\n" << M1 << std::endl;
		M1.erase(M1.begin());
		std::cout << "M1 :\n" << M1 << std::endl;
		itM1 = M1.end();
		itM1--;
		itM1--;
		M1.erase(itM1);
		std::cout << "M1 :\n" << M1 << std::endl;
		std::cout << "another MultiMap :\n" << anotherMultiMap << std::endl;
		std::cout << "M1 <---SWAP---> anotherMultiMap" << std::endl;
		M1.swap(anotherMultiMap);
		std::cout << "M1 :\n" << M1 << std::endl;
		std::cout << "another MultiMap :\n" << anotherMultiMap << std::endl;

		std::cout << "M1 : nbr de key earth = " << M1.count("earth") << std::endl;
		std::cout << "anotherMultiMap : nbr de key earth = " << anotherMultiMap.count("earth") << std::endl;

		std::cout << "lowerBound anotherMultiMap(earth) = " << anotherMultiMap.lower_bound("earth")->first << " :: " << anotherMultiMap.lower_bound("earth")->second << std::endl;
		std::cout << "lowerBound anotherMultiMap(a) = " << anotherMultiMap.lower_bound("a")->first << " :: " << anotherMultiMap.lower_bound("a")->second << std::endl;
		std::cout << "lowerBound anotherMultiMap(pouloulou) = " << anotherMultiMap.lower_bound("pouloulou")->first << " :: " << anotherMultiMap.lower_bound("pouloulou")->second << std::endl;

		std::cout << "upperBound anotherMultiMap(mercure) = " << anotherMultiMap.upper_bound("mercure")->first << " :: " << anotherMultiMap.upper_bound("mercure")->second << std::endl;
		std::cout << "upperBound anotherMultiMap(a) = " << anotherMultiMap.upper_bound("a")->first << " :: " << anotherMultiMap.upper_bound("a")->second << std::endl;
		std::cout << "upperBound anotherMultiMap(pouloulou) = " << anotherMultiMap.upper_bound("pouloulou")->first << " :: " << anotherMultiMap.upper_bound("pouloulou")->second << std::endl;

		ft::MultiMap<std::string, int> m1;
		ft::MultiMap<std::string, int> m2;

		m1.insert(std::make_pair("un", 1));
		m1.insert(std::make_pair("deux", 2));
		m1.insert(std::make_pair("trois", 3));
		m1.insert(std::make_pair("quatre", 4));
		m1.insert(std::make_pair("cinq", 5));
		m1.insert(std::make_pair("six", 6));

		m2.insert(std::make_pair("un", 1));
		m2.insert(std::make_pair("deux", 2));
		m2.insert(std::make_pair("trois", 3));
		m2.insert(std::make_pair("quatre", 4));
		m2.insert(std::make_pair("cinq", 5));
		m2.insert(std::make_pair("six", 6));

		std::cout << "m1 = " << m1 << std::endl;
		std::cout << "m2 = " << m2 << std::endl;
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		m1.swap(m2);
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;


		std::cout << "m1 = " << m1 << std::endl;
		std::cout << "m2 = " << m2 << std::endl;
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		m1.swap(m2);
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;


		std::cout << "m1 = " << m1 << std::endl;
		std::cout << "m2 = " << m2 << std::endl;
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		m1.swap(m2);
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		std::cout << "--------- test with <int><std::string> ------\n" << std::endl;

		ft::MultiMap<int, std::string> M1;
		ft::MultiMap<int, std::string>::iterator itM1;

		M1.insert(std::make_pair(1, "earth"));

		if ((itM1 = M1.find(1)) == M1.end())
			std::cout << "1 est introuvable" << std::endl;
		else
			std::cout << "1 est la terre numero " << itM1->second << std::endl;
		if ((itM1 = M1.find(3)) == M1.end())
			std::cout << "3 est introuvable" << std::endl;
		else
			std::cout << "3 est la terre numero " << itM1->second << std::endl;

		ft::MultiMap<int, std::string>::iterator ret;
				
		ret = M1.insert(std::make_pair(2, "neptune"));

		ret = M1.insert(std::make_pair(3, "mars"));

		ret = M1.insert(std::make_pair(99999, "aaaaa"));

		ret = M1.insert(std::make_pair(0, "zzzzz"));

		std::cout << "M1 :\n" << M1 << std::endl;

		ft::MultiMap<int ,std::string> anotherMultiMap;
		anotherMultiMap.insert(M1.begin(),M1.find(3));
		std::cout << "another MultiMap :\n" << anotherMultiMap << std::endl;
		anotherMultiMap.insert(M1.begin(),M1.find(0));
		std::cout << "another MultiMap :\n" << anotherMultiMap << std::endl;
		anotherMultiMap.insert(M1.begin(),M1.find(874687));
		std::cout << "another MultiMap :\n" << anotherMultiMap << std::endl;


		std::cout << "M1.size() = " << M1.size() << std::endl;
		std::cout << "anotherMultiMap.size() = " << anotherMultiMap.size() << std::endl;
		if (M1.empty())
			std::cout << "M1 est vide" << std::endl;
		else
			std::cout << "M1 n'est pas vide" << std::endl;
		if (anotherMultiMap.empty())
			std::cout << "anotherMultiMap est vide" << std::endl;
		else
			std::cout << "anotherMultiMap n'est pas vide" << std::endl;
		anotherMultiMap.clear();
		std::cout << "----- clear anotherMultiMap -----" << std::endl;
		if (anotherMultiMap.empty())
			std::cout << "anotherMultiMap est vide" << std::endl;
		else
			std::cout << "anotherMultiMap n'est pas vide" << std::endl;
		std::cout << "anotherMultiMap.size() = " << anotherMultiMap.size() << std::endl;
		std::cout << "another MultiMap :\n" << anotherMultiMap << std::endl;

		std::cout << "M1 :\n" << M1 << std::endl;
		M1.erase(3);
		std::cout << "M1 :\n" << M1 << std::endl;
		M1.erase(M1.begin());
		std::cout << "M1 :\n" << M1 << std::endl;
		itM1 = M1.end();
		itM1--;
		itM1--;
		M1.erase(itM1);
		std::cout << "M1 :\n" << M1 << std::endl;
		std::cout << "another MultiMap :\n" << anotherMultiMap << std::endl;
		std::cout << "M1 <---SWAP---> anotherMultiMap" << std::endl;
		M1.swap(anotherMultiMap);
		std::cout << "M1 :\n" << M1 << std::endl;
		std::cout << "another MultiMap :\n" << anotherMultiMap << std::endl;

		std::cout << "M1 : nbr de key 1 = " << M1.count(1) << std::endl;
		std::cout << "anotherMultiMap : nbr de key 1 = " << anotherMultiMap.count(1) << std::endl;

		std::cout << "lowerBound anotherMultiMap(75) = " << anotherMultiMap.lower_bound(75)->first << " :: " << anotherMultiMap.lower_bound(75)->second << std::endl;
		std::cout << "lowerBound anotherMultiMap(3) = " << anotherMultiMap.lower_bound(3)->first << " :: " << anotherMultiMap.lower_bound(3)->second << std::endl;
		std::cout << "lowerBound anotherMultiMap(9999) = " << anotherMultiMap.lower_bound(9999)->first << " :: " << anotherMultiMap.lower_bound(9999)->second << std::endl;

		std::cout << "upperBound anotherMultiMap(75) = " << anotherMultiMap.upper_bound(75)->first << " :: " << anotherMultiMap.upper_bound(75)->second << std::endl;
		std::cout << "upperBound anotherMultiMap(3) = " << anotherMultiMap.upper_bound(3)->first << " :: " << anotherMultiMap.upper_bound(3)->second << std::endl;
		std::cout << "upperBound anotherMultiMap(9999) = " << anotherMultiMap.upper_bound(9999)->first << " :: " << anotherMultiMap.upper_bound(9999)->second << std::endl;

		ft::MultiMap<int, std::string> m1;
		ft::MultiMap<int, std::string> m2;

		m1.insert(std::make_pair(1, "un"));
		m1.insert(std::make_pair(2, "deux"));
		m1.insert(std::make_pair(3, "trois"));
		m1.insert(std::make_pair(4, "quatre"));
		m1.insert(std::make_pair(5, "cinq"));
		m1.insert(std::make_pair(6, "six"));

		m2.insert(std::make_pair(1, "un"));
		m2.insert(std::make_pair(2, "deux"));
		m2.insert(std::make_pair(3, "trois"));
		m2.insert(std::make_pair(4, "quatre"));
		m2.insert(std::make_pair(5, "cinq"));
		m2.insert(std::make_pair(6, "six"));

		std::cout << "m1 = " << m1 << std::endl;
		std::cout << "m2 = " << m2 << std::endl;
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		m1.swap(m2);
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;


		std::cout << "m1 = " << m1 << std::endl;
		std::cout << "m2 = " << m2 << std::endl;
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		m1.swap(m2);
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;


		std::cout << "m1 = " << m1 << std::endl;
		std::cout << "m2 = " << m2 << std::endl;
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
		std::cout << "--- SWAP ---" << std::endl;
		m1.swap(m2);
		if (m1 == m2)
			std::cout << "m1 == m2" << std::endl;
		if (m1 < m2)
			std::cout << "m1 < m2" << std::endl;
		if (m1 > m2)
			std::cout << "m1 > m2" << std::endl;
		if (m1 <= m2)
			std::cout << "m1 <= m2" << std::endl;
		if (m1 >= m2)
			std::cout << "m1 >= m2" << std::endl;
		if (m1 != m2)
			std::cout << "m1 != m2" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	//================================================================//
	//------------------------      Set        ----------------------//
	//===============================================================//

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
