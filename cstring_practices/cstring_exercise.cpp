#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char st[10];
    int va = 0, co = 0;
    cout << "enter your string: ";
    cin.get(st, 10);
    cin.ignore(1000, '\n');
    int leng = strlen(st);

    for (int i = 0; i < leng; i++)
    {
        switch (st[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            va++;
            break;
        default:
            co++;
        }
    }
    cout << "number of consonants: " << co << endl;
    cout << "number of vawels: " << va << endl;
    return 0;
}