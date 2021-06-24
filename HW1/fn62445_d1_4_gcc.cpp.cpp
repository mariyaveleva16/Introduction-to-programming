#include <iostream>
#include <math.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    double time;
    cout<< "Enter time:";
    cin>> time;
    if (1<=time && time <=(pow(2, 16)-1) )// Checking the input data
    {
        for (double i=time; i>=0; i=i-0.5)//to make the timer slower "i" will decrease by 0.5
        {
            system("cls");
            cout << i;
        }
    }
    return 0;
}
