
/*
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
we have to print this pattern for the raw number =5,for that we have to devide this in the 3 parts
*/
#include <iostream>//header
using namespace std;//standard

int main()//execution of program begins from here
{
    int raw;//declaring variable name raw for number of raws
    cout << "enter the number of raws" << endl;//printing a line
    cin >> raw;//taking input from user
    /*we have to break this code into three parts,1st is for printing the left side stars,then
     printing the middle spaces,then the third one is for the right side stars */
    for (int i = 1; i <= raw; i++)//this is outer loop for printing the number of raws
    {
        for (int j = 1; j <= i; j++)/*this is the 1st loop that we have discussed earliear that this loop will
         print the all stars of left side */
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * raw - 2 * i; j++)/*this the 2nd loop and will print the spacess
         in between the stars */
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)/*this is the 3rd loop for printing the stars of right side,this code is exactly
         same to the 1st loop because the stars are in the pattern in left and right side*/
        {
            cout << "*";
        }
        cout << endl;
    }
    //we have printed the upper part of the pattern,and now we have to revers that code and our pattern will be complete
    for (int i = raw; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * raw - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
