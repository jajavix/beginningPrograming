/* Maria Villarin (MJ)
   CIS 71A - CIS 22A Spring 2021
   Laboratory Assignment A
   Problem A1

   This program reads two numbers from the keyboard and prints their product.
   */
#include <iostream>

using namespace std;

int main(void)
{
    double a;
    int b;
    double product;

    cout << "Enter a decimal number: ";
    cin  >> a;
    cout << "Enter an integeral number: ";
    cin  >> b;

    product = a * b;

    cout << a << " * " << b << " = " << product <<endl;

    int temp;
    cout << "Enter an integer to close the output window:";
    cin >> temp;

    return 0;

}
