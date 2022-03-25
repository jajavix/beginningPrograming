/* Maria Villarin (Maria)
CIS 71A-CIS 22A SPRING 2021
Laboratory  Assignment J2
Problem J2
Problem J2

Write a function named getData which asks the user for the data and puts it in the array.
Write a function named computeTotal which adds the data in the array and returns the sum.
Write a function named printAll which takes the array and the sum as arguments.

In the main function, call the getData function.
Then in the main function, call the computeTotal function.
Then in the main function, call the printAll function.

Print the results in the formats shown in the following format:

4 + 6 + 9 + 12 = 31
  
Test the program twice with the values:
4, 6, 9, and 12.
then with the values:
1, 7, 9, and 15.
*/


#include<iostream>
using namespace std;
#define TIMES 4


void getData(int *arr) {
   // variable for user input 
   int inp;
   // run a loop TIMES times and input the numbers into the array
   for (int i = 0; i < TIMES; i++) {
       cout << "Enter integer #" << (i + 1) << ": ";
       cin >> inp;
       // put 'inp' into the array
       arr[i] = inp;
   }
}


int computeTotal(int* arr) {
  // variable for user input 
   int sum = 0;
   // we run a loop over the array and add the integers to the sum
   for (int i = 0; i < TIMES; i++)
       sum += arr[i];
   // return the sum
   return sum;
}


void printAll(int* arr, int sum) {
   // printAll the array elements
   cout << "\n";
   for (int i = 0; i < TIMES; i++) {
       // if last element 
       if (i == TIMES - 1)
           cout << arr[i] << " = " << sum << endl;
       // else print elements with a '+' sign as separator
       else
           cout << arr[i] << " + ";
   }
}

/* This is the main method which is responsible for running the program. */
int main() {
 
   int arr[TIMES];
   // call method 'getData()' to populate the array
   getData(arr);
   // now call the method 'computeTotal()' to get the sum of the array elements and store it in a variable
   int sum = computeTotal(arr);
   // now call the method 'printAll()' with the array and sum variables as parameters to print the results
   printAll(arr, sum);
   return 0;
}
