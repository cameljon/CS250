#include "lab5_SmartDynamicArray.hpp"

#include "cuTEST/Menu.hpp"

SmartDynamicArray::SmartDynamicArray()
{
    m_itemCount = 0;
    m_arraySize = 0;
    m_data = nullptr;
}

SmartDynamicArray::~SmartDynamicArray()
{
    DeallocateMemory();
}

void SmartDynamicArray::AllocateMemory()
{
    AllocateMemory( 10 );
}

void SmartDynamicArray::AllocateMemory( int newSize )
{
    if ( m_data == nullptr )
    {
        m_arraySize = newSize;
        m_itemCount = 0;
        m_data = new string[m_arraySize];
    }
    else
    {
        throw logic_error("Memory cannot be allocated: m_data already points somewhere");
    }
}

void SmartDynamicArray::DeallocateMemory()
{
    if ( m_data != nullptr )
    {
        delete [] m_data;
        m_data = nullptr;
    }
}


bool SmartDynamicArray::IsInvalidIndex( int index ) const noexcept
{
    return ( index < 0 );
}


bool SmartDynamicArray::IsNonContiguousIndex( int index ) const noexcept
{
	/*If the index is not the next index or lower it's not contiguous*/
    return ( index > m_itemCount );
}


void SmartDynamicArray::Push( const string& newItem )
{
    if ( m_data == nullptr )
    {
        AllocateMemory();
    }
    if ( IsFull() )
    {
        Resize();
    }
    m_data[m_itemCount] = newItem;
    m_itemCount++;
}


void SmartDynamicArray::Pop()
{
    if ( m_itemCount > 0 )
    {
        m_itemCount--;
    }
}


bool SmartDynamicArray::IsEmpty() const
{
    return ( m_itemCount == 0 );
}


void SmartDynamicArray::ShiftRight( int index ) noexcept
{
    for (int i = m_itemCount; i > index; i--)
    {
        m_data[i] = m_data[i-1];
    }
}


void SmartDynamicArray::ShiftLeft( int index ) noexcept
{
    for (int i = index; i < m_itemCount - 1; i++)
    {
        m_data[i] = m_data[i+1];
    }
}


void SmartDynamicArray::Resize()
{
    Resize( m_arraySize + 10 );
}


void SmartDynamicArray::Resize( int newSize )
{
    if ( m_data == nullptr )
    {
        AllocateMemory( newSize );
        return;
    }

    string * localArray = new string [ newSize ];

    for ( int i = 0; i < m_arraySize; i++ )
    {
        localArray[i] = m_data[i];
    }

    delete [] m_data;

    m_data = localArray;

    m_arraySize = newSize;
}


bool SmartDynamicArray::IsFull() const
{
    return ( m_itemCount == m_arraySize );
}


int SmartDynamicArray::Size() const noexcept
{
    return m_itemCount;
}


void SmartDynamicArray::Remove( int index )
{
    if ( index < 0 || index >= m_itemCount )
    {
        throw out_of_range( "Cannot remove given index - out of range." );
    }
    else
    {
        ShiftLeft( index );
        m_itemCount--;
    }
}


string SmartDynamicArray::Get( int index ) const
{
    if ( index < 0 || index >= m_itemCount )
    {
        throw out_of_range( "Cannot get at index - out of range." );
    }
    else
    {
        return m_data[ index ];
    }
}


void SmartDynamicArray::Insert( int index, const string& newItem )
{
    if ( IsFull() )
    {
        Resize();
    }
	/*Invalid if index is less than zero. Non-contiguous if it's greater than m_itemcount*/
	if (index < 0 || index > m_itemCount)
	{
		throw out_of_range("Cannot insert at that index - out of range.");
	}
	else
	{
		ShiftRight(index);
		m_data[index] = newItem;
		m_itemCount++;
	}
}


void SmartDynamicArray::Extend( const SmartDynamicArray& other )
{
    if ( m_itemCount + other.m_itemCount >= m_arraySize )
    {
        Resize( m_itemCount + other.m_itemCount );
    }
    for ( int i = 0; i < other.m_itemCount; i++ )
    {
        Push( other.Get(i) );
    }
}


string SmartDynamicArray::operator[]( int index )
{
    return Get( index );
}


SmartDynamicArray& SmartDynamicArray::operator=( const SmartDynamicArray& other )
{
    for ( int i = 0; i < other.m_itemCount; i++ )
    {
        m_data[i] = other.m_data[i];
        m_itemCount++;
    }

    return *this;
}

bool SmartDynamicArray::operator==( const SmartDynamicArray& other )
{
    if ( m_itemCount != other.m_itemCount )
    {
        return false;
    }

    for ( int i = 0; i < m_itemCount; i++ )
    {
        if ( m_data[i] != other.m_data[i] )
        {
            return false;
        }
    }

    return true;
}


bool SmartDynamicArray::operator!=( const SmartDynamicArray& other )
{
    return !( *this == other );
}
