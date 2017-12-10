#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int output = 1;
    for (int x = 0; x < 10; ++x)
    {
        //When x = 9. The y and z loop are false but the outer loop runs 1 cycle.
        cout << "x = " << x << endl;
        for (int y = x+1; y < 10; ++y)
        {
            //This loops even when the z loop condition is false. ie: z = 10.
            cout << "y = " << y << endl;
            for (int z = y+1; z < 10; ++z)
            {
                cout << "z = " << z << endl;
                cout << output << endl;
                output++;
            }
        }
    }
    return 0;
}