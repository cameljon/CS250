#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    float balance = 0.0;

    queue<float> transactions;
    transactions.push( 7.54 );
    transactions.push( -5.43 );
    transactions.push( 9.12 );
    transactions.push( -1.20 );

    while( !transactions.empty() )
    {
        float deposit = transactions.front();
        cout << deposit << " pushed to account" << endl;
        balance += deposit;
        transactions.pop();
    }

    cout << "Final balance: $" << balance << endl;

    return 0;
}