/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainQueue.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 00:49:18 by najimehdi         #+#    #+#             */
/*   Updated: 2020/04/24 04:56:40 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define ft std
// #define Queue queue

#include <iostream>
#include <utility>
#include "../Queue.hpp"
// #include <queue>

int main()
{
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
	return 0;
}