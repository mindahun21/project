#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char city[10];
    char cti;
    cout << "enter your city \ncity1:";
    cin >> city;
    cin.ignore(1000, '\n');
    cout << "you entered " << city << endl;

    cout << "city2: ";
    cin.get(cti);
    cin.ignore(1000, '\n');
    cout << "you entered " << cti << endl;

    cout << "city3: ";
    cin.get(city, 10);
    cout << "you entered " << city << endl;
    cin.ignore(1000, '\n');

    cout << "city4: ";
    cin.getline(city, 10, '?');
    cin.ignore(1000, '\n');
    cout << "you entered " << city << endl;

        return 0;
}