#include <iostream>

using namespace std;
int main()
{
    int nu1 = 20, nu2 = 10, nu3;
    int *pnu1, *pnew, *parr[5];
    pnu1 = &nu1;
    *pnu1 = 100;
    // to get the value of nu1
    cout << *pnu1 << endl
         << nu1 << endl;
    // to get the memory location of nu1
    cout << pnu1 << endl
         << &nu1 << endl;
    // to get the adress of the pointer
    cout << &pnu1 << endl;
    pnew = &nu1;
    // it is possible two pointers to point the same variable
    // pnew & pnu1
    cout << *pnu1 << endl
         << pnu1 << endl;
    cout << *pnew << endl
         << pnew << endl;
    // pointer and array
    cout << "\n\nARRAY!!!!!!!!!!\n";
    int arr[5] = {23, 23, 2, 54, 34};
    for (int i = 0; i < 5; i++)
    {
        parr[i] = &arr[i];
        cout << parr[i] << "  " << &arr[i] << "   " << *parr[i] << endl;
    }
    // ERROR CAN NOT DEREFERENCE THE POINTER
    // WHOSE VALUE IS NULL
    // int *qwert = NULL;
    // cout << *qwert << endl;

    return 0;
}