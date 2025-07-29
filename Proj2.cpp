// Tell the user numbers are equal or not equal

#include <iostream>
using namespace std;

int main ()
{
    int num1,num2;
    cout << "Enter your 1st number: ";
    cin >> num1;

    cout << "Enter your 2nd number: ";
    cin >> num2;

    if (num1 == num2)
    {
        cout << "Numbers are equal.";
    }
    else
    {
        cout << "Numbers are not equal.";
    }
    system("pause");
    cout << "\a";
    return 0;
}