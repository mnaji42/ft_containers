/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 21:37:16 by najimehdi         #+#    #+#             */
/*   Updated: 2020/03/17 05:53:25 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_HPP
# define ITERATOR_HPP

namespace ft
{
	template <typename T>
	class Iterator
	{
		protected:
			T* _ptr;

		public:
			//Constrcutor | Destructor
			Iterator(): _ptr(NULL)
			{

			}

			Iterator(T* ptr): _ptr(ptr)
			{

			}

			Iterator(const Iterator<T>& It): _ptr(It._ptr)
			{

			}

			~Iterator()
			{

			}

			//Operator
			Iterator<T>& operator=(const Iterator<T>& It)
			{
				_ptr = It._ptr;
				return *this;
			}

			//Accesseur
			T *getPtr() const
			{
				return _ptr;
			}

			void setPtr(T *ptr)
			{
				_ptr = ptr;
			}

			//Operator de comparaison
			bool operator!=(const Iterator<T>& It)
			{
				return _ptr != It._ptr;
			}

			//Operator mathematiques
			Iterator<T>& operator++() //prefix increment
			{
				++_ptr;
				return *this;
			}


			Iterator<T> operator++(int) //postfix increment
			{
				Iterator<T> ite = *this;
				++_ptr;
				return ite;
			}

			T& operator*() const
			{
				return *_ptr;
			}

			T* operator->() const
			{
				return _ptr;
			}

			Iterator<T>& operator--() //prefix decrement
			{
				--_ptr;
				return *this;
			}

			Iterator<T> operator--(int) //postfix decrement
			{
				Iterator<T> ite = *this;
				--_ptr;
				return ite;
			}

			Iterator<T>& operator+=(unsigned int i)
			{
				_ptr += i;
				return *this;
			}

			Iterator<T>& operator-=(unsigned int i)
			{
				_ptr -= i;
				return *this;
			}

			Iterator<T>& operator+(unsigned int i)
			{
				_ptr += i;
				return *this;
			}

			Iterator<T>& operator-(unsigned int i)
			{
				_ptr -= i;
				return *this;
			}
	};
}

#endif