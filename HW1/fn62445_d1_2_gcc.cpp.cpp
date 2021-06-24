#include <iostream>

using namespace std;

int main()
{
    int days, year=0;
    cout << "Enter days:";
    cin>> days;
    if (0<days && days<1000000)// Checking the input data
        {
        while(days>0)
        {
            year++;
            if ((year%4==0 || year%400==0)&& year%100!=0) //check if the year is leap
                {
                    days= days-366;
                }
            else
                {
                    days=days-365;
                }
        }
           cout << "The year is:"<<year<< endl;
        }
    else
    {
        cout<< "Enter correct number"<< endl;
    }

    return 0;
}
