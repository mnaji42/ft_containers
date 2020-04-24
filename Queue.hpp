/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Queue.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 04:39:07 by najimehdi         #+#    #+#             */
/*   Updated: 2020/03/15 07:59:14 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_HPP
# define QUEUE_HPP

# include <iostream>

namespace ft
{
	template <typename T>
	class Queue
	{
		private:
			T *_Queue;
			unsigned int _size;

			Queue(const Queue<T> &S);
		public:
			//Constructor | Destructor
			Queue() : _Queue(nullptr), _size(0)
			{
				
			}

			virtual ~Queue()
			{
				if (_size)
					delete[] _Queue;
			}

			//Operator
			Queue &operator=(const Queue<T> &Queue)
			{
				if (this != &Queue)
				{
					if (_size)
						delete[] _Queue;
					_Queue = new T[Queue.size()];
					for (unsigned int i = 0; i < Queue.size(); i++)
						_Queue[i] = Queue._Queue[i];
					_size = Queue._size;

				}
				return *this;
			}

			//Oparetor compar
			bool operator==(const Queue<T> &A)
			{
				unsigned int i = 0;

				while (i < this->size() && i < A.size())
				{
					if (_Queue[i] != A._Queue[i])
						return false;
					i++;
				}
				if (this->size() != A.size())
					return false;
				return true;
			}

			bool operator>=(const Queue<T> &A)
			{
				unsigned int i = 0;

				if (*this > A)
					return true;
				while (i < this->size() && i < A.size())
				{
					if (_Queue[i] < A._Queue[i])
						return false;
					i++;
				}
				if (this->size() < A.size())
					return false;
				return true;
			}

			bool operator<=(const Queue<T> &A)
			{
				unsigned int i = 0;

				if (*this < A)
					return true;
				while (i < this->size() && i < A.size())
				{
					if (_Queue[i] > A._Queue[i])
						return false;
					i++;
				}
				if (this->size() > A.size())
					return false;
				return true;
			}

			bool operator<(const Queue<T> &A)
			{
				unsigned int i = 0;

				if (*this == A)
					return false;
				while (i < this->size() && i < A.size())
				{
					if (_Queue[i] < A._Queue[i])
						return true;
					else if (_Queue[i] > A._Queue[i])
						return false;
					i++;
				}
				if (this->size() > A.size())
					return false;
				return true;
			}

			bool operator>(const Queue<T> &A)
			{
				unsigned int i = 0;

				if (*this == A)
					return false;
				while (i < this->size() && i < A.size())
				{
					if (_Queue[i] > A._Queue[i])
						return true;
					else if (_Queue[i] < A._Queue[i])
						return false;
					i++;
				}
				if (this->size() < A.size())
					return false;
				return true;
			}

			bool operator!=(const Queue<T> &A)
			{
				unsigned int i = 0;

				while (i < this->size() && i < A.size())
				{
					if (_Queue[i] != A._Queue[i])
						return true;
					i++;
				}
				if (this->size() != A.size())
					return true;
				return false;
			}

			//Fonctions
			T back() const
			{
				return _Queue[_size - 1];
			}

			T front() const
			{
				return _Queue[0];
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
					tmp[i] = _Queue[i];
					i++;
				}
				tmp[i] = val;
				if (_size)
					delete[] _Queue;
				_Queue = tmp;
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
					tmp[i] = _Queue[i + 1];
					i++;
				}
				if (_size)
					delete[] _Queue;
				_Queue = tmp;
				_size--;
			}

			void swap(Queue<T> &A)
			{
				std::swap(_Queue, A._Queue);
				std::swap(_size, A._size);
			}
	};

	template <typename T>
	void swap(Queue<T> &A, Queue<T> &B)
	{
		A.swap(B);
	}
}

#endif