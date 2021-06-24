#include <iostream>

using namespace std;

int main()
{
    double x,y; // x and y are coordinates
    cout<< "Enter the coordinates:"<< endl;
    cout<< "x=";
    cin>> x;
    cout<< "y=";
    cin>> y;
    if ((x<-3.0|| x>3.0) || (y<-3.0|| y>3.0)) cout << "Outside";//outside the figure
    else if ((x==-1.0 || x==1.0)&& (-1.0<=y && y<=1.0))cout << "Undefined";//on the left or right side of the square
    else if ((-1.0<=x && x<=1.0)&& (y==-1.0 || y==1.0))cout << "Undefined";//on the top or bottom side of the square
    else if ((x*x+y*y==4) || (x*x+y*y==9) )cout << "Undefined";//on the one of the two circles
    else if ((-1.0<x && x<1.0)&& (-1.0<y && y<1.0))cout << "Black";// in the square
    else if ((x*x+y*y>4) && (x*x+y*y<9) )cout << "Black";//between the circles
    else cout << "White";

    return 0;
}
