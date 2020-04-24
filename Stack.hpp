/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 00:08:33 by najimehdi         #+#    #+#             */
/*   Updated: 2020/03/15 08:53:59 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
# define STACK_HPP

# include <iostream>

namespace ft
{
	template <typename T>
	class Stack
	{
		protected:
			T *_stack;
			unsigned int _size;

			//Constructor
			Stack(const Stack<T> &S);
			
			//Accesseur
			T *getPtrStack(unsigned int i)
			{
				if (i <= _size)
					return &_stack[i];
				return nullptr;
			}

		public:
			//Constructor | Destructor
			Stack() : _stack(nullptr), _size(0)
			{
				
			}

			virtual ~Stack()
			{
				if (_size)
					delete[] _stack;
			}

			//Operator
			Stack &operator=(const Stack<T> &Stack)
			{
				if (this != &Stack)
				{
					if (_size)
						delete[] _stack;
					_stack = new T[Stack.size()];
					for (unsigned int i = 0; i < Stack.size(); i++)
						_stack[i] = Stack._stack[i];
					_size = Stack._size;

				}
				return *this;
			}

			//Oparetor compar
			bool operator==(const Stack<T> &A)
			{
				unsigned int i = 0;

				while (i < this->size() && i < A.size())
				{
					if (_stack[i] != A._stack[i])
						return false;
					i++;
				}
				if (this->size() != A.size())
					return false;
				return true;
			}

			bool operator>=(const Stack<T> &A)
			{
				unsigned int i = 0;

				if (*this > A)
					return true;
				while (i < this->size() && i < A.size())
				{
					if (_stack[i] < A._stack[i])
						return false;
					i++;
				}
				if (this->size() < A.size())
					return false;
				return true;
			}

			bool operator<=(const Stack<T> &A)
			{
				unsigned int i = 0;

				if (*this < A)
					return true;
				while (i < this->size() && i < A.size())
				{
					if (_stack[i] > A._stack[i])
						return false;
					i++;
				}
				if (this->size() > A.size())
					return false;
				return true;
			}

			bool operator<(const Stack<T> &A)
			{
				unsigned int i = 0;

				if (*this == A)
					return false;
				while (i < this->size() && i < A.size())
				{
					if (_stack[i] < A._stack[i])
						return true;
					else if (_stack[i] > A._stack[i])
						return false;
					i++;
				}
				if (this->size() > A.size())
					return false;
				return true;
			}

			bool operator>(const Stack<T> &A)
			{
				unsigned int i = 0;

				if (*this == A)
					return false;
				while (i < this->size() && i < A.size())
				{
					if (_stack[i] > A._stack[i])
						return true;
					else if (_stack[i] < A._stack[i])
						return false;
					i++;
				}
				if (this->size() < A.size())
					return false;
				return true;
			}

			bool operator!=(const Stack<T> &A)
			{
				unsigned int i = 0;

				while (i < this->size() && i < A.size())
				{
					if (_stack[i] != A._stack[i])
						return true;
					i++;
				}
				if (this->size() != A.size())
					return true;
				return false;
			}

			//Fonctions
			T top() const
			{
				return _stack[_size - 1];
			}

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

			void push(T val)
			{
				unsigned int i = 0;

				T *tmp = new T[this->size() + 1];
				while (i < this->size())
				{
					tmp[i] = _stack[i];
					i++;
				}
				tmp[i] = val;
				if (_size)
					delete[] _stack;
				_stack = tmp;
				_size++;
			}

			void pop()
			{
				unsigned int i = 0;

				if (this->size() == 0)
					return ;
				T *tmp = new T[this->size() - 1];
				while (i < this->size() - 1)
				{
					tmp[i] = _stack[i];
					i++;
				}
				_size--;
				if (!_size)
					delete[] _stack;
				_stack = tmp;
			}

			void swap(Stack<T> &A)
			{
				std::swap(_stack, A._stack);
				std::swap(_size, A._size);
			}
	};

	template <typename T>
	void swap(Stack<T> &A, Stack<T> &B)
	{
		A.swap(B);
	}
}

#endif