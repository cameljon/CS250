#include "test.hpp"

bool Test::t_AirportLineup()
{
    Airport t_airport;
    // Create our own test traveller.
    Traveller* t_traveller = { 1, "Test Traveller" , 1, WAITING };
    t_airport.LineUp( t_traveller );
    
}