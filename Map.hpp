/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 04:18:14 by najimehdi         #+#    #+#             */
/*   Updated: 2020/04/24 05:02:57 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
# define MAP_HPP

# include <iostream>
# include <utility>
# include "List.hpp"

namespace ft
{
	template<typename KEY, typename VAL>
	class Map
	{
		protected:
			ft::List< std::pair<KEY, VAL> > _lst;

		public:
			typedef ListIterator<std::pair<KEY, VAL> > iterator;

			//Constructor
			Map() : _lst()
			{

			}

			virtual ~Map()
			{

			}

			//Operator et constructor par copie
			Map &operator=(Map &other)
			{
				if (this != &other)
					_lst = other._lst;
				return *this;
			}

			Map(std::pair<KEY, VAL> &other) : _lst(other._lst)
			{

			}

			//Element d'acces
			VAL& operator[]( const KEY& key )
			{
				ft::Map<KEY, VAL>::iterator it = this->begin();
				while (it != this->end())
				{
					if (it.getPtrNode()->_val.first == key)
						return it.getPtrNode()->_val.second;
					it++;
				}
				std::pair<iterator, bool> ret;
				ret = this->insert(std::make_pair(key, VAL()));
				return ret.first.getPtrNode()->_val.second;
			}

			//Iterator

			iterator begin()
			{
				return this->_lst.begin();
			}

			iterator end()
			{
				return this->_lst.end();
			}

			//Capacité

			bool empty() const
			{
				if (_lst.empty())
					return true;
				return false;
			}
			size_t size() const
			{
				return _lst.size();
			}

			size_t max_size() const;

			//Modificateur

			void clear()
			{
				_lst.clear();
			}

			void erase( iterator position )
			{
				_lst.erase(position);
			}

			void erase( iterator first, iterator last )
			{
				_lst.erase(first, last);
			}

			size_t erase( const KEY& key )
			{
				ft::Map<KEY, VAL>::iterator it = this->begin();
				int count = 0;

				while (it != this->end())
				{
					if (it.getPtrNode()->_val.first == key)
					{
						this->erase(it);
						count++;
					}
					it++;
				}
				return count;
			}

			void swap( Map& other )
			{
				_lst.swap(other._lst);
			}

			std::pair<iterator,bool> insert( const std::pair<KEY, VAL>& value )
			{
				iterator ret = this->find(value.first);
				if (ret == this->end())
				{
					_lst.push_back(value);
					_lst.sort();
					ret = this->find(value.first);
					return std::make_pair(ret, true);
				}
				return std::make_pair(ret, false);
			}

			template< class InputIt >
			void insert( InputIt first, InputIt last )
			{
				while (first != last)
				{
					this->insert(first.getPtrNode()->_val);
					first++;
				}
			}

			// LOOKUP

			size_t count( const KEY& key )
			{
				ft::Map<KEY, VAL>::iterator it = this->begin();
				size_t count = 0;

				while (it != this->end())
				{
					if (it.getPtrNode()->_val.first == key)
						count++;
					it++;
				}
				return count;
			}

			iterator find( const KEY& key )
			{
				for (iterator it = this->begin(); it != this->end(); it++)
					if (it.getPtrNode()->_val.first == key)
						return it;
				return this->end();
			}

			std::pair<iterator,iterator> equal_range( const KEY& key )
			{
				return std::make_pair(this->lower_bound(key), this->upper_bound(key));
			}

			iterator lower_bound( const KEY& key )
			{
				iterator it = this->find(key);
				if (it == this->end())
				{
					it = this->begin();
					while (it.getPtrNode()->_val.first < key && it != this->end())
						it++;
					if (it == this->end())
						it--;
				}
				return it;
			}

			iterator upper_bound( const KEY& key )
			{
				iterator it = this->find(key);
				if (it == this->end())
					return this->lower_bound(key);
				if (it != this->begin())
					it--;
				return it;
			}


			//Operateur de comparaison

			bool operator==(Map<KEY, VAL> &M2)
			{
				if (_lst.size() != M2._lst.size())
					return false;

				iterator it1 = _lst.begin();
				iterator it2 = M2._lst.begin();
				while (it1 != _lst.end() && it2 != M2._lst.end())
				{
					if (it1.getPtrNode()->_val.first != it2.getPtrNode()->_val.first ||\
						it1.getPtrNode()->_val.first != it2.getPtrNode()->_val.first)
						return false;
					++it1;
					++it2;
				}
				return true;
			}

			bool operator!=(Map<KEY, VAL> &M2)
			{
				return !(*this == M2);
			}

			bool operator<(Map<KEY, VAL> &M2)
			{
				iterator it1 = _lst.begin();
				iterator it2 = M2.begin();
				while (it1 != _lst.end() && it2 != M2.end() &&\
					it1.getPtrNode()->_val.first == it2.getPtrNode()->_val.first &&\
					it1.getPtrNode()->_val.first == it2.getPtrNode()->_val.first)
				{
					++it1;
					++it2;
				}
				if (it1 == _lst.end() && it2 == M2.end())
					return false;
				else if (it1 == _lst.end())
					return true;
				else if (it1.getPtrNode()->_val.first < it2.getPtrNode()->_val.first ||\
					it1.getPtrNode()->_val.first < it2.getPtrNode()->_val.first)
					return true;
				return false;
			}

			bool operator>(Map<KEY, VAL> &M2)
			{
				iterator it1 = _lst.begin();
				iterator it2 = M2.begin();
				while (it1 != _lst.end() && it2 != M2.end() &&\
					it1.getPtrNode()->_val.first == it2.getPtrNode()->_val.first &&\
					it1.getPtrNode()->_val.first == it2.getPtrNode()->_val.first)
				{
					++it1;
					++it2;
				}
				if (it1 == _lst.end() && it2 == M2.end())
					return false;
				else if (it1 == _lst.end())
					return false;
				else if (it1.getPtrNode()->_val.first > it2.getPtrNode()->_val.first &&\
					it1.getPtrNode()->_val.first > it2.getPtrNode()->_val.first)
					return true;
				return false;
			}

			bool operator<=(Map<KEY, VAL> &M2)
			{
				return !(*this > M2);
			}

			bool operator>=(Map<KEY, VAL> &M2)
			{
				return !(*this < M2);
			}
	};

	template<typename KEY, typename VAL>
	class MultiMap
	{
		protected:
			ft::List< std::pair<KEY, VAL> > _lst;

		public:
			typedef ListIterator<std::pair<KEY, VAL> > iterator;

			//Constructor
			MultiMap() : _lst()
			{

			}

			virtual ~MultiMap()
			{

			}

			//Operator et constructor par copie
			MultiMap &operator=(MultiMap &other)
			{
				if (this != &other)
					_lst = other._lst;
				return *this;
			}

			MultiMap(std::pair<KEY, VAL> &other) : _lst(other._lst)
			{

			}

			//Iterator

			iterator begin()
			{
				return this->_lst.begin();
			}

			iterator end()
			{
				return this->_lst.end();
			}

			//Capacité

			bool empty() const
			{
				if (_lst.empty())
					return true;
				return false;
			}

			size_t size() const
			{
				return _lst.size();
			}

			size_t max_size() const;

			//Modificateur

			void clear()
			{
				_lst.clear();
			}

			void erase( iterator position )
			{
				_lst.erase(position);
			}

			void erase( iterator first, iterator last )
			{
				_lst.erase(first, last);
			}

			size_t erase( const KEY& key )
			{
				ft::MultiMap<KEY, VAL>::iterator it = this->begin();
				int count = 0;

				while (it != this->end())
				{
					if (it.getPtrNode()->_val.first == key)
					{
						this->erase(it);
						count++;
					}
					it++;
				}
				return count;
			}

			void swap( MultiMap& other )
			{
				_lst.swap(other._lst);
			}

			iterator insert( const std::pair<KEY, VAL>& value )
			{
				_lst.push_back(value);
				_lst.sort();
				iterator ret = this->find(value.first);
				return ret;
			}

			template< class InputIt >
			void insert( InputIt first, InputIt last )
			{
				while (first != last)
				{
					this->insert(first.getPtrNode()->_val);
					first++;
				}
			}

			// LOOKUP

			size_t count( const KEY& key )
			{
				iterator it = this->begin();
				size_t count = 0;

				while (it != this->end())
				{
					if (it.getPtrNode()->_val.first == key)
						count++;
					it++;
				}
				return count;
			}

			iterator find( const KEY& key )
			{
				for (iterator it = this->begin(); it != this->end(); it++)
					if (it.getPtrNode()->_val.first == key)
						return it;
				return this->end();
			}

			std::pair<iterator,iterator> equal_range( const KEY& key )
			{
				return std::make_pair(this->lower_bound(key), this->upper_bound(key));
			}

			iterator lower_bound( const KEY& key )
			{
				iterator it = this->find(key);
				if (it == this->end())
				{
					it = this->begin();
					while (it.getPtrNode()->_val.first < key && it != this->end())
						it++;
					if (it == this->end())
						it--;
				}
				return it;
			}

			iterator upper_bound( const KEY& key )
			{
				iterator it = this->find(key);
				if (it == this->end())
					return this->lower_bound(key);
				while (it.getPtrNode()->_val.first == key)
					it++;
				it++;
				return it;
			}


			//Operateur de comparaison

			bool operator==(MultiMap<KEY, VAL> &M2)
			{
				if (_lst.size() != M2._lst.size())
					return false;

				iterator it1 = _lst.begin();
				iterator it2 = M2._lst.begin();
				while (it1 != _lst.end() && it2 != M2._lst.end())
				{
					if (it1.getPtrNode()->_val.first != it2.getPtrNode()->_val.first ||\
						it1.getPtrNode()->_val.first != it2.getPtrNode()->_val.first)
						return false;
					++it1;
					++it2;
				}
				return true;
			}

			bool operator!=(MultiMap<KEY, VAL> &M2)
			{
				return !(*this == M2);
			}

			bool operator<(MultiMap<KEY, VAL> &M2)
			{
				iterator it1 = _lst.begin();
				iterator it2 = M2.begin();
				while (it1 != _lst.end() && it2 != M2.end() &&\
					it1.getPtrNode()->_val.first == it2.getPtrNode()->_val.first &&\
					it1.getPtrNode()->_val.first == it2.getPtrNode()->_val.first)
				{
					++it1;
					++it2;
				}
				if (it1 == _lst.end() && it2 == M2.end())
					return false;
				else if (it1 == _lst.end())
					return true;
				else if (it1.getPtrNode()->_val.first < it2.getPtrNode()->_val.first ||\
					it1.getPtrNode()->_val.first < it2.getPtrNode()->_val.first)
					return true;
				return false;
			}

			bool operator>(MultiMap<KEY, VAL> &M2)
			{
				iterator it1 = _lst.begin();
				iterator it2 = M2.begin();
				while (it1 != _lst.end() && it2 != M2.end() &&\
					it1.getPtrNode()->_val.first == it2.getPtrNode()->_val.first &&\
					it1.getPtrNode()->_val.first == it2.getPtrNode()->_val.first)
				{
					++it1;
					++it2;
				}
				if (it1 == _lst.end() && it2 == M2.end())
					return false;
				else if (it1 == _lst.end())
					return false;
				else if (it1.getPtrNode()->_val.first > it2.getPtrNode()->_val.first &&\
					it1.getPtrNode()->_val.first > it2.getPtrNode()->_val.first)
					return true;
				return false;
			}

			bool operator<=(MultiMap<KEY, VAL> &M2)
			{
				return !(*this > M2);
			}

			bool operator>=(MultiMap<KEY, VAL> &M2)
			{
				return !(*this < M2);
			}
	};
}

#endif
