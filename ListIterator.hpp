/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ListIterator.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 05:41:47 by najimehdi         #+#    #+#             */
/*   Updated: 2020/03/17 10:51:14 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_ITERATOR_HPP
# define LIST_ITERATOR_HPP

# include "List.hpp"

namespace ft
{
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

			ListIterator(T* ptr): _ptr(ptr)
			{

			}

			ListIterator(const ListIterator<T>& It): _ptr(It._ptr)
			{

			}

			~ListIterator()
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
				return *_ptr->_val;
			}

			T* operator->() const
			{
				return _ptr->_val;
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
}

#endif