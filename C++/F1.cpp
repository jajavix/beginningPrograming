/* Maria Villarin
CIS 71A-CIS 22A Spring 2021
Laboratory Assignment F1
Problem F1

Write a do while loop to require the user to enter two integers;
 the second integer must be equal to, or larger than, the first integer
*/

#include <iostream>
#include<math.h>
#include <iomanip>

using namespace std;

int main()
{
    int firstInt,secondInt;
    do
    {
        cout << "Enter first integer: ";
        cin >> firstInt;
        cout << "Enter second integer: ";
        cin >> secondInt;

        if (firstInt <=secondInt && firstInt <=20 && secondInt >=1 )
        {
        break;    
        }
        else
        {
            cout << "Error : enter integers where the second integer is \n greater or equal to the first integer and numbers must be between 1 to 20. "<<endl;

        }
    } 
    while (1);
    cout << "INTEGER\tSQUARE ROOT" <<endl;
    for (int x= firstInt; x<=secondInt; x++)
    {
        double squareRoot =sqrt(x);
        cout << x << "\t" <<std::setprecision(4)<<std::fixed<<squareRoot<<endl;
    }  
    return 0;
}
