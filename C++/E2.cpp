/* Maria Villarin (Maria)
CIS 71A-CIS 22A SPRING 2021
Laboratory  Assignment E2
Problem E2

Write a program that determines a student letter grade. 
*/
#include<iostream>
#include<cmath>

using namespace std;


int main (void)
{
    int A_SCORE = 90,
    B_SCORE = 80,
    C_SCORE = 70,
    D_SCORE = 60,
    MAX_SCORE = 100;

    int score1, score2, score3;

    double average;

    cout << " Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;

    average = (score1 + score2 + score3)/3.0;
    cout << "Your average is: " << average << endl;

    if (average <= MAX_SCORE)
     {        
        if (average >= A_SCORE)
        cout << " Your grade is A.\n";
        
        else if (average >= B_SCORE)
        cout << "Your grade is B.\n";

        else if (average >= C_SCORE)
        cout << "Your grade is C.\n";

        else if (average >= D_SCORE)
        {
            cout << "Enter the number of homework assignments turned in and the total number of homework assignment: " ;
            int hwAssign, totalHw;
            cin >> hwAssign >> totalHw;

            if ((hwAssign *100/totalHw)>B_SCORE)
            cout << "Your grade is D.\n";
            else
            cout << "Your grade is F.\n";
        }
        else
        cout << " Your grade is F.\n";
        }   
        else
        {        
            cout << "You entered test scores that exceeded the maximun score. ";
        }
        return 0;
}
 

