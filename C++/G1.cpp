/* Maria Villarin
CIS 71A-CIS 22A Spring 2021
Laboratory Assignment G1
Problem G1

This program will read integers from a file and find results from these integers.
*/
 
#include <iostream>
#include <iomanip>
#include<fstream>
using namespace std;

int main()
{
    ifstream myfile;
    myfile.open ("file1.txt");
    // Check if file is opened
    if (!myfile.is_open())
    {
        cout<<"Error: File could not be opened"<<endl;
    }
    else
    {
        int ct=0,sm=0,mn=INT_MAX,mx=INT_MIN;
        int x;

        while(myfile>>x)
        {
        ct++;
        sm+=x;
        mn= min(mn,x);
        mx=max(mx,x);
        }

        myfile.close();
        cout<<"The integer count: "<<ct<<endl;
        cout<<"The sum of the integers: "<<sm<<endl;
        cout<<"The smallest integer: "<<mn<<endl;
        cout<<"The largest integer: "<<mx<<endl;
        cout<<"The average of the integers: "<<((sm*1.0)/ct)<<endl;
    }

    return 0;

}