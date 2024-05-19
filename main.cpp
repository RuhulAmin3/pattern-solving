#include <iostream>
#include <cmath>
using namespace std;

// int main()
// {

//     cout << "In the name of Allah" << endl;
//     // int year = 2024;
//     // bool isPresent = false;
//     // bool isAbsent = 1;
//     // float pi = 3.1416;
//     // double c = 30.4569887;
//     // char alphabet = 'a';

//     // cout << year << endl;
//     // cout << isPresent << endl;
//     // cout << isAbsent << endl;

//     // cout << pi << endl;
//     // cout << c << endl;
//     // cout << alphabet << endl;
//     // cout << sizeof(int) << endl;
//     // int age;
//     // string name;

//     // cout << "Enter your age" << endl;
//     // cin >> age;
//     // if (cin.fail())
//     // {
//     //     cout << "invalid input. please enter a valid number" << endl;
//     // }

//     // cin.ignore();

//     // cout << "Enter a name" << endl;

//     // getline(cin, name);

//     // cout << "your name is: " << name << endl;
//     // cout << "your age is: " << age << endl;

//     char grade;
//     cin >> grade;

//     switch (grade)
//     {
//     case 'A':
//         cout << "Your grade will be in range 70 to 80" << endl;
//         break;

//     case 'B':
//         cout << "Your grade will be in range 60 to 70" << endl;
//         break;
//     case 'C':
//         cout << "Your grade will be in range 50 to 60" << endl;
//         break;
//     case 'D':
//         cout << "Your grade will be in range 40 to 50" << endl;
//         break;
//     default:
//         cout << "Your grade will be in range 0 to 40" << endl;
//     }

//     return 0;
// }

// int main()
// {

//     // 1. print 1 to 100;
//     int i = 0;
//     while (i <= 100)
//     {
//         cout << "iteration " << i << endl;
//         i++;
//     }

//     // 2. print 100 to 1;
//     for (int j = 100; j >= 1; j--)
//     {
//         cout << "Iteration " << j << endl;
//     }

//     // 3. Print self name 50 times;

//     for (int n = 0; n < 50; n++)
//     {
//         cout << "Md. Ruhul Amin " << endl;
//     }

//     // 5. print 7 table

//     for (int i = 1; i <= 10; i++)
//     {
//         cout << "7 * " << i << " = " << 7 * i << endl;
//     }

//     // 6. print A to Z;

//     for (char ch = 'A'; ch <= 'Z'; ch++)
//     {
//         cout << ch << endl;
//     }

//     // 7. print a to z ;
//     for (char sch = 'a'; sch <= 'z'; sch++)
//     {
//         cout << sch << endl;
//     }

//     return 0;
// }

// int main()
// {
//     int a = 0;
//     cout << (++a) << endl;

//     cout << (a++) << endl;

//     cout << a << endl;

//     return 0;
// }

int decimalToBinaryConvert(int n)
{
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;

        cout << bit << endl;

        binaryno = bit * pow(10, i++) + binaryno;

        n = n / 2;
    }
    return binaryno;
}

int decimalToBinaryConvertByBitwise(int n)
{
    int binaryno = 0;
    int i = 0;

    while (n > 0)
    {
        int bit = n & 1;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }

    return binaryno;
}

// int n = 10; in memory stored n = 1010;
// n & 1 ; after bitwise and result will be 0;
// n >> 1 ; 1010

int main()
{
    int n;
    cout << "Enter decimal number: ";
    cin >> n;
    // int binary = decimalToBinaryConvert(n);
    int binary = decimalToBinaryConvertByBitwise(n);

    cout << n << " binary number is: " << binary << endl;

    return 0;
}