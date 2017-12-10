#ifndef _TEST_HPP
#define _TEST_HPP

#include "Airport.hpp"
#include "Airplane.hpp"
#include "DataStructures/LinkedList.hpp"

class Test
{
    // Test the parts we wrote. Each test returns true or false for pass/fail.
public:
    // Test the Airport::LineUp()
    bool t_AirportLineup();
    // Test the Airport::NextInLine()
    bool t_AirportNextInLine();
    // Test Airport::IsEmpty()
    bool t_AirportIsEmpty();
    // Test Airport::WaitingCount()
    bool t_AirportWaitingCount();
    // Test Airport::SetMaxCapacity()
    bool t_AirportSetMaxCapacity();
    // Test Airport::GetMaxCapacity()
    bool t_AirportGetMaxCapacity();

private:
    int m_tests; 
};

#endif