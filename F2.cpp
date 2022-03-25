/* Maria Villarin
CIS 71A-CIS 22A Spring 2021
Laboratory Assignment F2
Problem F2

Write program to read from the user the maximum number of rolls of toilet paper that may be ordered.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   bool flag = false; 
   int no_of_rolls; 
   float cost_of_1_roll; 

   cout<<"\n Enter Number of Rolls : ";

   while(flag == false) 
   {
        cin>>no_of_rolls; 

        if(no_of_rolls > 0 && no_of_rolls < 11) 
        {
        flag = true;
        }
        else
        {
        cout<<" Try Again... ! Please enter in range [1 , 10] : "; 
        }
        }

        flag = false;
        cout<<"\n Enter the price of one Roll : ";

        while(flag == false) 
        {
            cin>>cost_of_1_roll; 

            if(cost_of_1_roll >= 0.10 && cost_of_1_roll <= 3) 
            {
            flag = true;
            }
            else
            {
            cout<<" Try Again... ! Please enter in range [10 cents , 3 dollars] : "; 
            }
        }

        cout<<endl;
        cout<<"\n Rolls Price "<<endl; 
        cout<<"=================="<<endl;

        for(int i=0; i<no_of_rolls; i++) 
        {
        double cost = (i+1)*cost_of_1_roll;

        cout << " " << i+1 << " ";
        cout << fixed << setprecision(2) << cost<<endl;
        }

   return 0;
}
