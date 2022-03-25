/* Maria Villarin (Maria)
CIS 71A-CIS 22A SPRING 2021
Laboratory  Assignment G2
Problem G2

This program provide a loop with a menu and test numbers for patterns. 
*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void Square(int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
    for(j=0;j<size;j++)
      cout<<size;

    cout<<endl;
    }
}

void Triangle(int size)
{
int i,j;
for(i=0;i<size;i++)
    {
      for(j=0;j<=i;j++)
      cout<<size;

      cout<<endl;
    }
}

void Diagonal(int size)
{
 int i,j;
 for(i=0;i<size;i++)
    {
    for(j=i;j>0;j--)
      cout<<"*";
    cout<<size;
    for(j=0;j<size-(i+1);j++)
      cout<<"*";

    cout<<endl;
    }
}

void Reverse_Diagonal(int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
    for(j=0;j<size-(i+1);j++)
      cout<<"*";
    cout<<size;
    for(j=i;j>0;j--)
      cout<<"*";

    cout<<endl;
    }
}

void display()
{
int choice,size;

while(true)
{
    cout<<"\n\n1. Square   pattern\n2. Triangle pattern\n3. Diagonal pattern\n4. Reverse diagonal pattern\n5. Quit\n"<<endl;
    cout<<"Enter you choice::";
    cin>>choice;
  
    if(!(choice>=1&&choice<=5))
    {
      cout<<"\nIncorrect choice!!!\nPlease try again\n";
      continue;
        }else if(choice==5)
            break;
  
            cout<<"Enter Size::";
            cin>>size;

            switch(choice)
        {
        case 1:
        Square(size);
        break;
        case 2:
        Triangle(size);
        break;
        case 3:
        Diagonal(size);
        break;
        case 4:
        Reverse_Diagonal(size);
        break;
        }
    }

}

int main()
{
display();
return 1;
}
