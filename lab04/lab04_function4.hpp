#ifndef _function4
#define _function4

#include <string>
using namespace std;

int GetLength(string word)
{
    int length = word.size();
    return length;
}

void Test_GetLength()
{
    cout << "************ Test_GetLength ************" << endl;

    string input;
    int expectedOutput;
    int actualOutput;

    /* TEST 1 ********************************************/
    input = "cat";
    expectedOutput = 3;

    actualOutput = GetLength( input );
    if ( actualOutput == expectedOutput )
    {
        cout << "Test_GetLength: Test 1 passed!" << endl;
    }
    else
    {
        cout << "Test_GetLength: Test 1 FAILED!" << endl;
    }

    /* TEST 2 ********************************************/
    // CREATE YOUR OWN TEST
    input = "flight";             // change me
    expectedOutput = 6;     // change me

    actualOutput = GetLength( input );
    if ( actualOutput == expectedOutput )
    {
        cout << "Test_GetLength: Test 1 passed!" << endl;
    }
    else
    {
        cout << "Test_GetLength: Test 1 FAILED!" << endl;
    }

    /* TEST 3 ********************************************/
    // CREATE YOUR OWN TEST
    input = "test";             // change me
    expectedOutput = 4;     // change me

    actualOutput = GetLength( input );
    if ( actualOutput == expectedOutput )
    {
        cout << "Test_GetLength: Test 1 passed!" << endl;
    }
    else
    {
        cout << "Test_GetLength: Test 1 FAILED!" << endl;
    }
}

#endif



