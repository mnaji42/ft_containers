/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainStack.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 00:39:53 by najimehdi         #+#    #+#             */
/*   Updated: 2020/04/24 04:38:12 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define ft std
// #define Stack stack

#include <iostream>
#include <utility>
#include "../Stack.hpp"
// #include <stack>

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

	return 0;
}