#ifndef _QUEUE_HPP
#define _QUEUE_HPP

#include "LinkedList.hpp"

//! A FIFO template data structure; inherits from LinkedList
template <typename T>
class Queue : public LinkedList<T>
{
public:
    //!
    /**
        @param <type> asdf
        @return <type>
    */
    Queue() : LinkedList<T>()
    {
    }

    //!
    /**
        @param <type> asdf
        @return <type>
    */
	void Push(T& newItem)
	{
        LinkedList<T>::PushBack( newItem );
	}

    //!
    /**
        @param <type> asdf
        @return <type>
    */
	void Pop()
	{
        LinkedList<T>::PopFront();
	}

    //!
    /**
        @param <type> asdf
        @return <type>
    */
	T& Front()
	{
        return LinkedList<T>::GetFront();
	}
};

#endif