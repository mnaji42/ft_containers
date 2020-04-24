/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deque.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 08:30:54 by najimehdi         #+#    #+#             */
/*   Updated: 2020/03/16 04:37:40 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUE_HPP
# define DEQUE_HPP

# include "Stack.hpp"
# include <iostream>
# include "Iterator.hpp"
# include <exception>

namespace ft
{
	template<typename T>
	class Deque : virtual public Stack<T>
	{
		private:
			unsigned int _capacity;

			//Fonctions not in Deque:
			Deque(const Deque &V);
			T top() const;
			void push(T val);
			void pop();

		public:
			typedef Iterator<T> iterator;
			typedef Iterator<const T> const_iterator;

			//Exceptions
			class DequeException : public std::exception
			{
				public:
                	virtual char const *what() const throw()
					{
						return "deque";
					}
			};

			//Constructor | Destructor
			Deque() : ft::Stack<T>(), _capacity(0)
			{
				
			}

			virtual ~Deque()
			{
				
			}

			//Operator
			T &operator[](unsigned int i)
			{
				return this->_stack[i];
			}

			//Fonctions 
			// Fonctions from ft::Stack : empty && size && swap

			T &at( unsigned int pos )
			{
				if (pos < 0 || pos >= this->_size)
					throw DequeException();
				return this->_stack[pos];
			}

			const T &at( unsigned int pos ) const
			{
				if (pos < 0 || pos >= this->_size)
					throw DequeException();
				return this->_stack[pos];
			}

			T &front()
			{
				return this->_stack[0];
			}

			const T &front() const
			{
				return this->_stack[0];
			}

			T &back()
			{
				return this->_stack[this->_size - 1];
			}

			const T &back() const
			{
				return this->_stack[this->_size - 1];
			}

			unsigned long long int max_size() const
			{
				return 18446744073709551615uL / sizeof(T);
			}

			iterator insert( iterator &pos, const T& value )
			{
				this->insert(pos, 1, value);
				return pos;
			}

			void insert( iterator &pos, unsigned int count, const T& value )
			{
				unsigned int i = 0;
				unsigned int i2;
				unsigned int new_size = this->_size + count;
				unsigned int new_cap = _capacity;
				T *tmp;

				if (_capacity > new_size)
					tmp = new T[_capacity];
				else
					tmp = new T[new_size];

				ft::Deque<T>::iterator it = this->begin();
				while (it != pos)
				{
					tmp[i] = this->_stack[i];
					i++;
					it++;
				}
				pos.setPtr(&tmp[i]);
				i2 = i;
				while (count-- > 0)
				{
					tmp[i] = value;
					i++;
				}
				while (i2 < this->_size)
				{
					tmp[i] = this->_stack[i2];
					i++;
					i2++;
				}
				while (i < _capacity)
				{
					tmp[i] = T();
					i++;
				}
				this->clear();
				this->_stack = tmp;
				this->_size = new_size;
				_capacity = new_cap;
			}

			iterator erase( iterator &pos )
			{
				ft::Deque<T>::iterator it = this->begin();
				unsigned int pos_ = 0;
				while (it != pos)
				{
					pos_++;
					it++;
				}
				this->erase(pos, ++pos);
				pos.setPtr(&this->_stack[pos_]);
				return pos;
			}
	
			iterator erase( iterator first, iterator last )
			{
				ft::Deque<T>::iterator tmp = first;
				unsigned int count = 0;
				unsigned int i = 0;
				unsigned int new_size;
				ft::Deque<T>::iterator ret;

				while (tmp != last)
				{
					count++;
					tmp++;
				}
				tmp = this->begin();
				new_size = this->_size - count;
				T *new_stack = new T[new_size];
				while (tmp != first)
				{
					new_stack[i] = this->_stack[i];
					i++;
					tmp++;
				}
				tmp = last;
				ret.setPtr(&new_stack[i]);
				while (i < new_size)
				{
					new_stack[i] = *tmp;
					tmp++;
					i++;
				}
				this->clear();
				this->_stack = new_stack;
				this->_size = new_size;
				_capacity = new_size;
				return ret;
			}

			void push_back(T val)
			{
				this->ft::Stack<T>::push(val);
			}

			void pop_back()
			{
				this->ft::Stack<T>::pop();
				if (_capacity < this->_size)
					_capacity = this->_size;
			}

			void push_front(T val)
			{
				ft::Deque<T>::iterator it = this->begin();
				this->insert(it, val);
				if (_capacity < this->_size)
					_capacity = this->_size;
			}

			void pop_front()
			{
				ft::Deque<T>::iterator it = this->begin();
				this->erase(it);
				if (_capacity < this->_size)
					_capacity = this->_size;
			}

			void clear()
			{
				if (this->_size)
					delete[] this->_stack;
				this->_size = 0;
				_capacity = 0;
			}

			void assign(unsigned int count, const T &value )
			{
				this->clear();
				for (unsigned int i = 0; i < count; i++)
					this->push_back(value);
				if (_capacity < this->_size)
					_capacity = this->_size;
			}

			void assign(iterator &first, iterator &last)
			{
				ft::Deque<T> tmp;

				while (first != last)
				{
					tmp.push_back(*(first));
					first++;
				}
				tmp.push_back(*(first));
				this->clear();
				*this = tmp;
				if (_capacity < this->_size)
					_capacity = this->_size;
			}

			void resize(unsigned int count, T value = T())
			{
				ft::Deque<T>::iterator it = this->end();
				if (count >= this->_size)
					insert(it, count - this->_size, value);
				else
					erase(this->begin() + count, this->end());
				if (_capacity < this->_size)
					_capacity = this->_size;
			}

			Iterator<T> begin()
			{
				return this->_stack;
			}

			Iterator<const T> begin() const
			{
				return this->_stack;
			}

			Iterator<T> end()
			{
				return this->_stack + this->_size;
			}

			Iterator<const T> end() const
			{
				return this->_stack + this->_size;
			}
	};
}

#endif