#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string, string> colors;
    colors["red"] = "FF0000";
    colors["green"] = "FFFF00";
    colors["blue"] = "00FFFF";

    while ( true )
    {
        string color;
        cout << endl << "Enter a color, or QUIT to stop: ";
        cin >> color;

        if ( color == "QUIT" )
        {
            break;
        }

        cout << "Hex: " << colors[ color ] << endl;
    }

    return 0;
}