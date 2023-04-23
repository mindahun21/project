
#include <iostream>
using namespace std;
int main()
{
    int a{10}, b{20};
    const int *ptr;
    ptr = &a;
    cout << *ptr << "\t";
    cout << ptr << "\n";
    ptr = &b;
    cout << *ptr << "\t";
    cout << ptr << "\n";
    // *ptr = 30; // error: not acceptable to change value
    return 0;
}
