#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    int number, digit, counter=0; //number - the number which is entered, digit - each single digit of the number
    cin>> number;
    if ((-(pow(2, 31)))<number && number<((pow(2, 31))-1))//verification of the input
    {
       for(int i=0;i<=9; i++)
       {
           int oldnumber=number;//the entered number is stored in a new variable

           while (number>0)
           {
             digit=number%10; //digit takes the vale of the last digit of the number
             number=number/10; // the last digit of the number is removed
              if (i==digit) //check if i is equal to every single digit
                {
                    counter++; // counts how many equal digits the number has
                }

           }
            if (2<=counter)// check if there are two or more equal digits
              {
                cout<< "There are at least two equal digits in the number."<< endl;
                break;
              }
            else
              {
                counter=0;// make the value of counter 0 to check with the next value of i
              }
            number=oldnumber;
       }
       if (2>counter)
        {
            cout << "There are no equal digits in the number.";
        }

    }
    else cout<< "Enter a number in the interval";

    return 0;
}
