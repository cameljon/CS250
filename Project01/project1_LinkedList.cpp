#include "project1_LinkedList.hpp"

Node::Node()
{
    //throw runtime_error( "Node() not yet implemented" );
   m_ptrNext = nullptr;
   m_ptrPrev = nullptr;
}

LinkedList::LinkedList()
{
    //throw runtime_error( "LinkedList() not yet implemented" );
    m_ptrFirst = nullptr;
    m_ptrLast = nullptr;
    m_itemCount = 0;
}

LinkedList::~LinkedList()
{
    //throw runtime_error( "~LinkedList() not yet implemented" );
    Clear();
}

void LinkedList::Clear()
{
    //throw runtime_error( "Clear() not yet implemented" );
    int howMany = m_itemCount;
    for (int i = 0; i < howMany; i++)
    {
        PopBack();
    }
}

void LinkedList::PushFront( CustomerData newData )
{
    //throw runtime_error( "PushFront() not yet implemented" );
    Node* newNode = new Node;
    newNode->m_data = newData;
    if ( m_itemCount )
    {
        //Already has data
        //Set the current first Node's previous pointer to point to the new node.
        m_ptrFirst->m_ptrPrev = newNode;
        //Set new node's pointer to the current first node.
        newNode->m_ptrNext = m_ptrFirst;
        //Update first node pointer of LL to point at new node.
        m_ptrFirst = newNode;
    }
	else
	{
		m_ptrFirst = newNode;
		m_ptrLast = newNode;
	}
    m_itemCount++;
}

void LinkedList::PushBack( CustomerData newData )
{
    //throw runtime_error( "PusBack() not yet implemented" );
    Node* newNode = new Node;
    newNode->m_data = newData;
    if ( m_itemCount )
    {
        //Already has data
        m_ptrLast->m_ptrNext = newNode;
        newNode->m_ptrPrev = m_ptrLast;
        m_ptrLast = newNode;
    }
    else
    {
        m_ptrFirst = newNode;
        m_ptrLast = newNode;
    }
    m_itemCount++;
}

void LinkedList::PopFront() noexcept
{
    //throw runtime_error( "PopFront() not yet implemented" );
    if ( m_ptrFirst == m_ptrLast )
    {
        delete m_ptrFirst;
        m_ptrFirst = nullptr;
        m_ptrLast = nullptr;
        m_itemCount--;
    }
    else
    {
        Node* secToFront = m_ptrFirst->m_ptrNext;
        secToFront->m_ptrPrev = nullptr;
        delete m_ptrFirst;
        m_ptrFirst = secToFront;
        m_itemCount--;
    }
}

void LinkedList::PopBack() noexcept
{
    //throw runtime_error( "PopBack() not yet implemented" );
    if ( m_ptrFirst == m_ptrLast )
    {
        delete m_ptrFirst;
        m_ptrFirst = nullptr;
        m_ptrLast = nullptr;
        m_itemCount--;
    }
    else
    {
        Node* secToLast = m_ptrLast->m_ptrPrev;
        secToLast->m_ptrNext = nullptr;
        delete m_ptrLast;
        m_ptrLast = secToLast;
        m_itemCount--;
    }
}

CustomerData LinkedList::GetFront()
{
    //throw runtime_error( "GetFront() not yet implemented" );
	if (m_itemCount) return m_ptrFirst->m_data;
	else throw logic_error("No nodes in LinkedList.");
}

CustomerData LinkedList::GetBack()
{
    //throw runtime_error( "GetBack() not yet implemented" );
    if ( m_itemCount ) return m_ptrLast->m_data;
	else throw logic_error("No nodes in LinkedList.");
}

CustomerData& LinkedList::operator[]( const int index )
{
    //throw runtime_error( "operator[]() not yet implemented" );
    int counter = 0;
    Node* ptrCurrent = m_ptrFirst;
    if ( index > m_itemCount - 1 )
    {
        throw out_of_range( "Cannot get at index - out of range." );
    }
    else
    {
        while ( counter != index )
        {
            ptrCurrent = ptrCurrent->m_ptrNext;
            counter++;
        }
    }
    return ptrCurrent->m_data;
}

bool LinkedList::IsEmpty()
{
    //throw runtime_error( "IsEmpty() not yet implemented" );
    return !( m_itemCount );
}

int LinkedList::Size()
{
    //throw runtime_error( "Size() not yet implemented" );
    return m_itemCount;
}

