/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 04:18:14 by najimehdi         #+#    #+#             */
/*   Updated: 2020/04/24 05:04:06 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_HPP
# define SET_HPP

# include <iostream>
# include <utility>
# include "List.hpp"

namespace ft
{
	template<typename KEY>
	class Set
	{
		protected:
			ft::List<KEY> _lst;

		public:
			typedef ListIterator<KEY> iterator;

			//Constructor
			Set() : _lst()
			{

			}

			virtual ~Set()
			{

			}

			//Operator et constructor par copie
			Set &operator=(Set &other)
			{
				if (this != &other)
					_lst = other._lst;
				return *this;
			}

			Set(KEY &other) : _lst(other._lst)
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
				iterator it = this->begin();
				int count = 0;

				while (it != this->end())
				{
					if (it.getPtrNode()->_val == key)
					{
						this->erase(it);
						count++;
					}
					it++;
				}
				return count;
			}

			void swap( Set& other )
			{
				_lst.swap(other._lst);
			}

			std::pair<iterator,bool> insert( const KEY& value )
			{
				iterator ret = this->find(value);
				if (ret == this->end())
				{
					_lst.push_back(value);
					_lst.sort();
					ret = this->find(value);
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
				iterator it = this->begin();
				size_t count = 0;

				while (it != this->end())
				{
					if (it.getPtrNode()->_val == key)
						count++;
					it++;
				}
				return count;
			}

			iterator find( const KEY& key )
			{
				for (iterator it = this->begin(); it != this->end(); it++)
					if (it.getPtrNode()->_val == key)
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
					while (it.getPtrNode()->_val < key && it != this->end())
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
					it++;
				return it;
			}


			//Operateur de comparaison

			bool operator==(Set<KEY> &M2)
			{
				return (_lst == M2._lst);
			}

			bool operator!=(Set<KEY> &M2)
			{
				return (_lst != M2._lst);
			}

			bool operator<(Set<KEY> &M2)
			{
				return (_lst < M2._lst);
			}

			bool operator>(Set<KEY> &M2)
			{
				return (_lst > M2._lst);
			}

			bool operator<=(Set<KEY> &M2)
			{
				return !(*this > M2);
			}

			bool operator>=(Set<KEY> &M2)
			{
				return !(*this < M2);
			}
	};

	template<typename KEY>
	class MultiSet
	{
		protected:
			ft::List<KEY> _lst;

		public:
			typedef ListIterator<KEY> iterator;

			//Constructor
			MultiSet() : _lst()
			{

			}

			virtual ~MultiSet()
			{

			}

			//Operator et constructor par copie
			MultiSet &operator=(MultiSet &other)
			{
				if (this != &other)
					_lst = other._lst;
				return *this;
			}

			MultiSet(KEY &other) : _lst(other._lst)
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
				iterator it = this->begin();
				int count = 0;

				while (it != this->end())
				{
					if (it.getPtrNode()->_val == key)
					{
						this->erase(it);
						count++;
					}
					it++;
				}
				return count;
			}

			void swap( MultiSet& other )
			{
				_lst.swap(other._lst);
			}

			iterator insert( const KEY& value )
			{
				_lst.push_back(value);
				_lst.sort();
				iterator ret = this->find(value);
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
					if (it.getPtrNode()->_val == key)
						count++;
					it++;
				}
				return count;
			}

			iterator find( const KEY& key )
			{
				for (iterator it = this->begin(); it != this->end(); it++)
					if (it.getPtrNode()->_val == key)
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
					while (it.getPtrNode()->_val < key && it != this->end())
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
				while (it.getPtrNode()->_val == key)
					it++;
				return it;
			}


			//Operateur de comparaison

			bool operator==(MultiSet<KEY> &M2)
			{
				return (_lst == M2._lst);
			}

			bool operator!=(MultiSet<KEY> &M2)
			{
				return (_lst != M2._lst);
			}

			bool operator<(MultiSet<KEY> &M2)
			{
				return (_lst < M2._lst);
			}

			bool operator>(MultiSet<KEY> &M2)
			{
				return (_lst > M2._lst);
			}

			bool operator<=(MultiSet<KEY> &M2)
			{
				return !(*this > M2);
			}

			bool operator>=(MultiSet<KEY> &M2)
			{
				return !(*this < M2);
			}
	};
	
}

#endif
