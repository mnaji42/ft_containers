/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainMap.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 03:22:30 by najimehdi         #+#    #+#             */
/*   Updated: 2020/04/24 04:43:34 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define ft std
// #define Map map
// #define MultiMap multimap

#include <iostream>
#include <utility>
#include "../Map.hpp"
// #include <map>

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

int main()
{
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
	return 0;
}