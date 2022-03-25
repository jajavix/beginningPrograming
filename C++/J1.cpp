/* Maria Villarin (Maria)
CIS 71A-CIS 22A SPRING 2021
Laboratory  Assignment J1
Problem J1

You do not need to use any functions beyond the main function in this problem.
Initialize an array of int with the values: 4, 6, 9, and 12.
Write a for loop to add the values in the array and find their sum.
Use a loop to print the values in the array.
Print the values in the array and the sum in the following format:

4 + 6 + 9 + 12 = 31
*/

#include<iostream>

using namespace std;

int main()

{
int arr[] = {4, 6, 9, 12}; //array
int i, sum = 0; //i to iterate and sum to store sum

//add all values to sum
for(i=0; i<4; i++)

sum = sum + arr[i];
 //print all values

for(i=0; i<4; i++)

{
 //if not last element, print +
if(i != 3)
cout<<arr[i]<<" + ";
else //if last element, print =
cout<<arr[i]<<" = ";

}
cout<<sum<<endl; //print sum
return 0;

}
