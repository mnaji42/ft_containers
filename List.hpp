/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 04:50:18 by najimehdi         #+#    #+#             */
/*   Updated: 2020/04/24 05:00:45 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_HPP
# define LIST_HPP

# include <iostream>

namespace ft
{
	//Definition Node:
	template<typename T>
	struct ListNode
	{
		T _val;
		ListNode<T> *_next;
		ListNode<T> *_previous;
	};

	//Definition Iterator
	template <typename T>
	class ListIterator
	{
		protected:
			ft::ListNode<T> *_ptr;

		public:
			//Constrcutor | Destructor
			ListIterator(): _ptr(NULL)
			{

			}

			ListIterator(ListNode<T> * ptr): _ptr(ptr)
			{

			}

			ListIterator(const ListIterator<T>& It): _ptr(It._ptr)
			{

			}

			virtual ~ListIterator()
			{

			}

			//Operator
			ListIterator<T>& operator=(const ListIterator<T>& It)
			{
				_ptr = It._ptr;
				return *this;
			}

			//Accesseur
			ft::ListNode<T> *getPtrNode() const
			{
				return _ptr;
			}

			void setPtrNode(ft::ListNode<T> *ptr)
			{
				_ptr = ptr;
			}

			T *getPtr() const
			{
				return _ptr->_val;
			}

			void setPtr(T *ptr)
			{
				_ptr->_val = ptr;
			}

			//Operator de comparaison
			bool operator!=(const ListIterator<T>& It)
			{
				return _ptr != It._ptr;
			}

			bool operator==(const ListIterator<T>& It)
			{
				return _ptr == It._ptr;
			}

			//Operator mathematiques
			ListIterator<T>& operator++() //prefix increment
			{
				_ptr = _ptr->_next;
				return *this;
			}


			ListIterator<T> operator++(int) //postfix increment
			{
				ListIterator<T> ite = *this;
				_ptr = _ptr->_next;
				return ite;
			}

			T& operator*() const
			{
				return _ptr->_val;
			}

			T* operator->() const
			{
				return &_ptr->_val;
			}

			ListIterator<T>& operator--() //prefix decrement
			{
				_ptr = _ptr->_previous;
				return *this;
			}

			ListIterator<T> operator--(int) //postfix decrement
			{
				ListIterator<T> ite = *this;
				_ptr = _ptr->_previous;
				return ite;
			}
	};

	//Definition List
	template<typename T>
	class List
	{
		protected:
			ListNode<T> *_node;
			unsigned int _size;

		public:
			typedef ListIterator<T> iterator;
			typedef List<T>::iterator const_iterator;
			//Constructor
			List() : _size(0)
			{
				ListNode<T> *node = new ListNode<T>;
				node->_val = T();
				node->_next = nullptr;
				node->_previous = nullptr;
				_node = node;
			}

			virtual ~List()
			{
				if (_size > 0)
				{
					while (_size > 0)
						this->pop_front();
					delete _node;
				}
			}

			// operator= && constructor par copie
			List& operator=(List &other)
			{
				if (this != &other)
				{	this->clear();
					ft::List<T>::iterator it = other.begin();
					while (it != other.end())
					{
						this->push_back(it.getPtrNode()->_val);
						it++;
					}
				}
				return *this;
			}

			List(List<T> &other) : _size(0)
			{
				ListNode<T> *node = new ListNode<T>;
				node->_val = T();
				node->_next = nullptr;
				node->_previous = nullptr;
				_node = node;
				ft::List<T>::iterator it = other.begin();
				while (it != other.end())
				{
					this->push_back(it.getPtrNode()->_val);
					it++;
				}
			}

			//Accesseur:
			T front() const
			{
				return (_node->_val);
			}

			T back()
			{
				ft::List<T>::iterator it;
				it = this->end();
				it--;
				return (it.getPtrNode()->_val);
			}

			void assign(unsigned int n, const T &val)
			{
				clear();
				insert(begin(), n, val);
			}

			//Capacity
			bool empty() const
			{
				if (_size)
					return false;
				return true;
			}

			unsigned int size() const
			{
				return _size;
			}

			unsigned int max_size() const;

			//Modificateur
			void push_back( const T& value )
			{
				if (_size == 0)
					this->push_front(value);
				else
				{
					ListNode<T> *node = new ListNode<T>;
					ft::List<T>::iterator it = this->end();
					ft::List<T>::iterator tmp = it;
					node->_val = value;
					tmp--;
					node->_next = it.getPtrNode();
					it.getPtrNode()->_previous = node;
					node->_previous = tmp.getPtrNode();
					tmp.getPtrNode()->_next = node;
					_size++;
				}
			}

			void push_front( const T& value )
			{
				ListNode<T> *node = new ListNode<T>;
				node->_val = value;
				node->_next = _node;
				node->_previous = nullptr;
				_node->_previous = node;
				_node = node;
				_size++;
			}
			
			void pop_back()
			{
				if (_size)
				{
					ft::List<T>::iterator it = this->end();
					it--;
					ListNode<T> *tmp = it.getPtrNode();
					it--;
					it.getPtrNode()->_next = this->end().getPtrNode();
					delete tmp;
					tmp = it.getPtrNode();
					it++;
					it.getPtrNode()->_previous = tmp;
					_size--;
				}
			}

			void pop_front()
			{
				if (_size)
				{
					ListNode<T> *tmp = _node;
					_node = _node->_next;
					delete tmp;
					_size--;
				}
			}

			void clear()
			{
				while (_size > 0)
					this->pop_front();
			}

			iterator insert(iterator pos, const T& value)
			{
				if (pos == this->begin())
					this->push_front(value);
				else if (pos == this->end())
					this->push_back(value);
				else
				{
					ListNode<T> *node = new ListNode<T>;
					ft::List<T>::iterator tmp = pos;
					node->_val = value;
					tmp--;
					node->_next = pos.getPtrNode();
					pos.getPtrNode()->_previous = node;
					node->_previous = tmp.getPtrNode();
					tmp.getPtrNode()->_next = node;
					_size++;
				}
				return --pos;
			}

			void insert(iterator pos, unsigned int count, const T& value)
			{
				while (count-- > 0)
					insert(pos, value);
			}

			iterator erase(iterator pos)
			{
				if (_size)
				{
					if (pos == this->begin())
						this->pop_front();
					else if (pos == this->end())
						this->pop_back();
					else
					{
						ft::List<T>::iterator it = pos;
						ft::ListNode<T> *tmp = pos.getPtrNode();
						it--;
						pos++;
						it.getPtrNode()->_next = pos.getPtrNode();
						pos.getPtrNode()->_previous = it.getPtrNode();
						delete tmp;
						_size--;
					}
				}
				return pos;
			}

			iterator erase(iterator first, iterator last)
			{
				if (_size)
				{
					while (first != last)
						first = erase(first);
				}
				return first;
			}

			void resize(unsigned int n, T val = T())
			{
				if (n >= _size)
					insert(end(), n - _size, val);
				else
				{
					iterator it = begin();
					for (unsigned int i = 0; i < n; i++)
						it++;
					erase(it, end());
				}
			}

			void swap(List &L)
			{
				std::swap(_node, L._node);
				std::swap(_size, L._size);
			}

			// iterators

			iterator begin()
			{
				return iterator(_node);
			}

			iterator end()
			{
				ft::List<T>::iterator it;
				it = this->begin();
				for (unsigned int i = 0; i < _size; i++)
				{
					it++;
				}
				return it;
			}

			//Operations
			void merge(List& other)
			{
				ListNode<T> *tmp1 = _node;
				ListNode<T> *tmp2 = other._node;
				ft::List<T> newList;
				while (tmp1->_next != nullptr || tmp2->_next != nullptr)
				{
					while (tmp1->_next != nullptr || (tmp2->_next != nullptr && tmp1->_val > tmp2->_val))
					{
						newList.push_back(tmp1->_val);
						tmp1 = tmp1->_next;
					}
					while (tmp2->_next != nullptr || (tmp1->_next != nullptr && tmp1->_val < tmp2->_val))
					{
						newList.push_back(tmp2->_val);
						tmp2 = tmp2->_next;
					}
				}
				this->clear();
				other.clear();
				iterator it = newList.begin();
				while (it != newList.end())
				{
					this->push_back(it.getPtrNode()->_val);
					it++;
				}
			}

			template <class Compare>
			void merge(List& other, Compare comp)
			{
				ListNode<T> *tmp1 = _node;
				ListNode<T> *tmp2 = other._node;
				ft::List<T> newList;
				while (tmp1->_next != nullptr || tmp2->_next != nullptr)
				{
					while (tmp1->_next != nullptr || (tmp2->_next != nullptr && comp(tmp1->_val, tmp2->_val)))
					{
						newList.push_back(tmp1->_val);
						tmp1 = tmp1->_next;
					}
					while (tmp2->_next != nullptr || (tmp1->_next != nullptr && comp(tmp2->_val, tmp1->_val)))
					{
						newList.push_back(tmp2->_val);
						tmp2 = tmp2->_next;
					}
				}
				this->clear();
				other.clear();
				iterator it = newList.begin();
				while (it != newList.end())
				{
					this->push_back(it.getPtrNode()->_val);
					it++;
				}
			}

			void splice(iterator pos, List& other)
			{
				iterator it = pos;
				it--;
				it.getPtrNode()->_next = other.begin().getPtrNode();
				other.begin().getPtrNode()->_previous = it.getPtrNode();
				it = other.end();
				it--;
				this->end().getPtrNode()->_previous = it.getPtrNode();
				it.getPtrNode()->_next = pos.getPtrNode();
				_size += other.size();
				other._size = 0;
			}

			void remove( const T& value )
			{
				for (iterator it = this->begin(); it != this->end(); it++)
					if (*it == value)
						erase(it);
			}
		
			template< class UnaryPredicate >
			void remove_if( UnaryPredicate p )
			{
				for (iterator it = this->begin(); it != this->end(); it++)
					if (p(*it))
					 	erase(it);
			}
			
			void reverse()
			{
				iterator beg = this->begin();
				iterator end = this->end();
				end--; 

				for (unsigned int i = 0; i < this->size() / 2; i++)
				{
					std::swap(beg.getPtrNode()->_val, end.getPtrNode()->_val);
					beg++;
					end--;
				}
			}

			void unique()
			{
				iterator it = this->begin();
				T tmp;
				bool finish = true;

				for (unsigned int i =0 ; i < this->size() - 1; i ++)
				{
					tmp = *it;
					it++;
					if (tmp == *it)
					{
						erase(it);
						finish = false;
					}
				}
				if (!finish)
					this->unique();
			}

			template< class BinaryPredicate >
			void unique( BinaryPredicate p )
			{
				iterator it = this->begin();
				T tmp;
				bool finish = true;

				for (unsigned int i =0 ; i < this->size() - 1; i ++)
				{
					tmp = *it;
					it++;
					if (p(tmp, *it))
					{
						erase(it);
						finish = false;
					}
				}
				if (!finish)
					this->unique(p);
			}

			void sort()
			{
				iterator it = this->begin();
				iterator tmp;
				while (it != this->end())
				{
					tmp = it;
					it++;
					if (it == this->end())
						break;
					if (*tmp > *it)
					{
						std::swap(tmp.getPtrNode()->_val, it.getPtrNode()->_val);
						it = this->begin();
					}
				}
			}

			template< class Compare >
			void sort( Compare comp )
			{
				iterator it = this->begin();
				iterator tmp;
				while (it != this->end())
				{
					tmp = it;
					it++;
					if (it == this->end())
						break;
					if (comp(*it, *tmp))
					{
						std::swap(tmp.getPtrNode()->_val, it.getPtrNode()->_val);
						it = this->begin();
					}
				}
			}
	};

	template <typename T>
	bool operator==(List<T>& l1, List<T>& l2)
	{
		if (l1.size() != l2.size())
			return false;

		ListIterator<T> it1 = l1.begin();
		ListIterator<T> it2 = l2.begin();
		while (it1 != l1.end() && it2 != l2.end())
		{
			if (*it1 != *it2)
				return false;
			++it1;
			++it2;
		}
		return true;
	}

	template <typename T>
	bool operator!=(List<T>& l1, List<T>& l2)
	{
		return !(l1 == l2);
	}

	template <typename T>
	bool operator<(List<T>& l1, List<T>& l2)
	{
		ListIterator<T> it1 = l1.begin();
		ListIterator<T> it2 = l2.begin();
		while (it1 != l1.end() && it2 != l2.end() && *it1 == *it2)
		{
			++it1;
			++it2;
		}
		if (it1 == l1.end() && it2 == l2.end())
			return false;
		else if (it1 == l1.end())
			return true;
		else if (*it1 < *it2)
			return true;
		return false;
	}

	template <typename T>
	bool operator>(List<T>& l1, List<T>& l2)
	{
		ListIterator<T> it1 = l1.begin();
		ListIterator<T> it2 = l2.begin();
		while (it1 != l1.end() && it2 != l2.end() && *it1 == *it2)
		{
			++it1;
			++it2;
		}
		if (it1 == l1.end() && it2 == l2.end())
			return false;
		else if (it1 == l1.end())
			return false;
		else if (*it1 > *it2)
			return true;
		return false;
	}

	template <typename T>
	bool operator<=(List<T>& l1, List<T>& l2)
	{
		return !(l1 > l2);
	}

	template <typename T>
	bool operator>=(List<T>& l1, List<T>& l2)
	{
		return !(l1 < l2);
	}

}
#endif
