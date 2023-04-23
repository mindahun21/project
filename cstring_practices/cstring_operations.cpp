
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[30] = "mindahun debebe", str3[30], str4[30];
    char str5[40] = "addis ababa ethiopia africa", str2[40] = "addis ababa";
    strcpy(str3, str1);
    cout << str3 << endl;
    strncpy(str4, str1, 8);
    // cout << strlen(str4) << endl;
    // cout << strstr(str1, str4) << endl;
    cout << str4 << endl;
    // cout << "str2 & str5 are equal up to " << strspn(str2, str5) << endl;

    strcat(str4, str3);
    cout << str4 << endl;
    // ***************** COMPARING THE STRINGS******************LINE 65
    if (strcmp(str4, str3) == 0)
    {
        cout << "they are equal";
    }
    else if (strcmp(str4, str3) < 0)
    {
        cout << "str4 < str3";
    }
    else
    {
        cout << "str4 > str3";
    }
    if (strncmp(str4, str3, 8) == 0)
    {
        cout << "\nequal";
    }
    else
    {
        cout << "not equal";
    }
    if (strcmp(str4, str3) == 0)
    {
        cout << "they are equal";
    }
    cout << endl;
    strupr(str4);
    cout << str4 << endl;
    cout << strlen(str1) << endl;
    if (strcmp(str4, str3) == 0)
    {
        cout << "they are equal";
    }
    else if (strcmp(str4, str3) < 0)
    {
        cout << "str4 < str3";
    }
    else
    {
        cout << "str4 > str3";
    }
    if (strnicmp(str4, str3, 8) == 0)
    {
        cout << "\nequal";
    }
    if (strcmp(str4, str3) == 0)
    {
        cout << "they are equal";
    }

    // cout << strrev(str5) << endl;
    char *tok;
    tok = strtok(str5, " ");
    while (tok != NULL)
    {
        cout << tok << endl;
        tok = strtok(NULL, " ");
    }
    // cout << strset(str1, 'm') << endl;
    cout << strnset(str1, 'M', 8) << endl;

    return 0;
}