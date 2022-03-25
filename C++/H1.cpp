/* Maria Villarin (Maria)
CIS 71A-CIS 22A SPRING 2021
Laboratory  Assignment h1
Problem H1

Write two functions:
A function named sum which takes two integer values as arguments, and returns their sum.
A main function which asks the user for two integer values, passes the two values to the sum function, then prints the two values and their sum.
The main function then again asks the user for two integer values, passes the two values to the sum function, then prints the two values and their sum.

Test it once, with the values 3 and 4, and then 5 and 49.
*/

# include <iostream>

using namespace std;
int add(int, int);            //Function prototype(declaration)


int main() {
    int num1, num2, sum;
    cout<<"\nEnters two numbers to add: ";
    cin>>num1>>num2;
    sum = add(num1,num2);         //Function call
    cout<<"\nSum = "<<sum;
    cout<<endl;

    return 0;
}
//Functiondeclarator
int add(int a,int b) {          
    int add;
    add = a+b;
    return add;  //Return statement
}
