/* Maria Villarin (Maria)
CIS 71A-CIS 22A SPRING 2021
Laboratory  Assignment H2
Problem H2

The purpose of this problem is to write some small functions and practice passing things around amoung functions.
1) The main function shall ask the user to enter three numbers and read the three numbers.
2) Write a function named findSum that takes three numbers as arguments and returns their sum. The main function shall call this function.
3) Write a function named findAverage that takes the sum and the number of numbers and returns the average. The main function shall call this function.
4) Write a function named findSmallest that takes the three numbers and returns the smallest value. The main function shall call this function.
5) The main function shall print the results in the following format, with two decimal positions and the decimal points aligned:
*/

//header files
#include<iostream>
#include<iomanip>

//namespace
using namespace std;

//function to find sum
double findSum(double a, double b, double c)
{
    double sum = a+b+c;
    return sum;
}

//function to find average
double findAverage(double sum, int n)
{
    double avg = sum/3;
    return avg;
}

//function to find smallest
double findSmallest(double a, double b, double c)
{
    double min;
    if(a<b && a<c)
    min = a;
    else if(b<a && b<c)
    min = b;
    else if(c<a && c<b)
    min = c;    
    return min;

}

//main function
int main()
{
//setting precicion to two decimal point
    cout<<fixed<<setprecision(2)<<endl;

//variables
    double a, b, c, total, avg, min;

//accept numbers
    cout<<"Enter the three values: ";
    cin>>a>>b>>c;

//call to functions and store the return values
    total = findSum(a, b, c);
    avg = findAverage(total, 3);
    min = findSmallest(a, b, c);

//display the output
    cout << setprecision(2) << fixed;
    cout<<"Results: "<<endl;
    cout<<"First number: "<<setw(9)<<a<<endl;
    cout<<"Second number: "<<setw(8)<<b<<endl;
    cout<<"Third number: "<<setw(9)<<c<<endl;
    cout<<"Total:       "<<setw(10)<<total<<endl;
    cout<<"Average:     "<<setw(10)<<avg<<endl;
    cout<<"Smallest:    "<<setw(10)<<min<<endl;
    return 0;

}
