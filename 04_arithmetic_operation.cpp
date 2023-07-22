// WAP to perform arithmetic operations...

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter First Number:" << endl;
    cin >> num1;
    cout << "Enter Second Number:" << endl;
    cin >> num2;

    cout << "Addition is:" << num1 + num2 << endl;
    cout << "Substraction is:" << num1 - num2 << endl;
    cout << "Multiplication is:" << num1 * num2 << endl;
    cout << "Division is:" << num1 / num2 << endl;
    cout << "Modulus is:" << num1 % num2 << endl;

    return 0;
}