#include <iostream>
using namespace std;
int main()
{
    string name = "mindahun debebe";
    int age = 21;
    char sex = 'M';
    double weight = 55.6;
    void *ptr = &name;
    string *sptr = static_cast<string *>(ptr);
    cout << "the adress of name " << ptr << endl;
    cout << "my name is: " << *sptr << endl;
    ptr = &age;
    int *iptr = static_cast<int *>(ptr);
    cout << "the adress of age " << ptr << endl;
    cout << "I am  " << *iptr << " years old" << endl;
    ptr = &sex;
    char *cptr = static_cast<char *>(ptr);
    cout << "the adress of sex " << ptr << endl;
    cout << "SEX: " << *cptr << endl;
    ptr = &weight;
    double *dptr = static_cast<double *>(ptr);
    cout << "the adress of weight " << ptr << endl;
    cout << "my weight is: " << *dptr << endl;

    // we can dereference the void type pointer by casting to an aprpriate type of pointer
    return 0;
}