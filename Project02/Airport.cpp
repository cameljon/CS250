#include "Airport.hpp"

//! Add an item into the queue to get on the airplane
/**
    For the Traveller pointer passed in as the parameter,
    push them into the line queue.

    @param <Traveller*> traveller
    @return <void>
*/
void Airport::LineUp(Traveller* traveller)
{
	m_traveller.Push( traveller ) ;
}

//! Get the person at the front of the line
/**
    Get the person at the front of the queue and return them.

    @return <Traveller*>
*/
Traveller* Airport::NextInLine()
{
	Traveller* traveller = m_traveller.Front();
	m_traveller.Pop();
    return traveller;
}

//! Returns whether the waiting room is empty
/**
    Return whether the airport (waiting room) is empty.
    It is empty if the size of the queue is 0.

    @return <bool>
*/
bool Airport::IsEmpty()
{
    //return false; // placeholder
    return m_traveller.IsEmpty();
}

//! Get the amount of people waiting in the queue
/**
    Return the amount of people in the waiting queue

    @return <int>
*/
int Airport::WaitingCount()
{
    //return -1; // placeholder
    return m_traveller.Size();
}

//! Set the maximum amount of people allowed on an airplane
/**
    Set the value of the m_maxCapacity member variable
    to the size passed in as a prameter.

    @param <int> size
    @return <void>
*/
void Airport::SetMaxCapacity(int size)
{
    m_maxCapacity = size;
}

//! Return the maximum capacity of an airplane
/**
    Return the value of m_maxCapacity

    @return <int>
*/
int Airport::GetMaxCapacity()
{
    return m_maxCapacity; // placeholder
}