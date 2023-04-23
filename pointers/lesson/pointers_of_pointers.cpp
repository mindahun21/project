#include <iostream>
using namespace std;
int main()
{
    int val = 100;
    int *ptr1, **ptr2;
    ptr1 = &val;
    ptr2 = &ptr1;
    // to get the value
    cout << val << "   " << *ptr1 << "   " << **ptr2 << endl;
    // to get the adresses of val
    cout << &val << "  " << ptr1 << "   " << *ptr2 << endl;
    // to get the adresses of ptr1
    cout << &ptr1 << "   " << ptr2 << endl;
    // to get the adress of ptr2
    cout << &ptr2 << endl;
    *ptr1 = val + 100;
    cout << val << endl;
    **ptr2 = *ptr1 + val;
    cout << val << endl;

    // exercice
    cout << "\nexcercise" << endl;
    int i = 5, j = 10;
    int *ptr;
    int **pptr;
    ptr = &i;
    pptr = &ptr;
    *ptr = 3;
    **pptr = 7;
    ptr = &j;
    **pptr = 9;
    *pptr = &i;
    *ptr = -2;
    cout << "i= " << i << endl
         << " j = " << j << endl;

    // INCRIMENT AND DECREMENT EXERCISE
    cout << "INCRIMENT AND DECREMENT EXERCISE\n\n"
         << endl;
    int b = 100, c = 50;
    int *pb = &b;
    int **ppb = &pb;
    // first print the value then incriment the value
    cout << (*pb)++ << "  " << *pb << "   " << pb << endl;
    // first incriment the value then print the value
    cout << ++(*pb) << "  " << *pb << "   " << pb << endl;
    // first print the value then incriment the adress
    // because the value in the incrimented value empty it returns garbege value
    cout << *pb++ << "   " << *pb << "  " << pb << endl;
    // first incriment the adress then print the value the incrimented adress
    cout << *++pb << "  " << *pb << "   " << pb << endl;
    cout << *++pb;

    return 0;
}