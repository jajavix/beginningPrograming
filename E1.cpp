/* Maria Villarin
CIS 71A-CIS 22A Spring 2021
Laboratory Assignment E1
Problem E1

Write a program to test 6 cases
*/

#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c;
    double x4;
    double x1;
    double x2;

    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;

    double determinant = (pow(b,2) - 4*a*c);
    double positive_root = (((b) + sqrt(determinant))/(2*a));
    double negative_root = (((-b) - sqrt(determinant))/(2*a));
    double x3 = -c / b;
  
    if (a == 0 && b == 0)
        {
        if (c == 0)
        cout << "Any value of x is a solution. \n"<< endl;
        }
        if (a == 0 && b == 0 && c != 0)
        {
        cout << "No solution exists. \n" << endl;
        }
    if (a == 0 && b != 0)
        {
        x3 = -c/b;
        cout << "The value of x is: ";
        cout << x3 << endl;
         }
    if (determinant == 0 && a != 0)
        {
        determinant = pow(b,2) - (4 * a *c);
        x4 = -b / (2 * a);
        cout << "The value of x is: ";
        cout << x4 << endl; 
        }
    if (determinant > 0 )
        {
        x1 = (b + sqrt(pow(b,2)- 4 * a * c)/ 2 * a);
        x2 = (-b + sqrt(pow(b,2)- 4 * a * c)/ 2 * a);
        cout << "solution 1 for x1: " << x1 <<endl;
        cout << "solution 2 for x2: " << x2 << endl;
        }
    else
        {
    if (determinant < 0)
        {
        cout << "The solution have an imaginary component. \n\n";
        }
        cout << "The roots of the quadratic equation are x = ";
        cout << negative_root;
        cout << ", ";
        cout << positive_root << endl << endl;
    }   
    return 0;
 
}