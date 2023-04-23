#include <iostream>
using namespace std;
int main()
{
    // constant pointer to non constant object

    cout << "\n constant pointer to non constant object\n";
    int m = 10, n = 100;
    int *const ppt = &m;
    cout << *ppt << "\t" << ppt << endl;
    *ppt = 1000;
    cout << *ppt << "\t" << ppt << endl;
    // imposible to change the adress
    // like ppt=&n;
    //  pointer to constant value

    cout << "\n pointer to constant value\n";
    int a{10}, b{20};
    const int *ptr;
    ptr = &a;
    cout << *ptr << "\t";
    cout << ptr << "\n";
    ptr = &b;
    cout << *ptr << "\t";
    cout << ptr << "\n";
    // *ptr = 30; // error: not acceptable to change value

    // constant pointer to constants
    cout << "\nconstant pointer to constants\n";
    const int *const cptr = &n;
    cout << *cptr << "\t" << cptr << endl;
    // imposible to change the adress as well as the value
    // cptr=&m;
    //*cptr=10010;
    return 0;
}
