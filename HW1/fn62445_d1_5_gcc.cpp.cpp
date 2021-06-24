#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //ах4+bx2+c = 0
    cout<< "a="; double a; cin>> a;
    cout<< "b="; double b; cin>> b;
    cout<< "c="; double c; cin>> c;
    if (a==0)
    {
        if (b==0)
        {
            if(c==0) cout<< "The equation is true for every x"<< endl;//0+0+0=0
            else cout<<"The equation has no solution"<< endl;//0+0+c=0 c!=0
        }
        else //0*х4+bx2+c=0 => bx2+c=0 x2=(-c)/b
        {
            if ((c/b)<=0)
            {
              double x;
              x=sqrt(-c/b);
              cout<<"x="<<x<<endl;
            }
            else cout<<"The equation has no solution"<< endl; // there is no root of a negative number
        }
    }
    else
    {
        double d=(b*b)-(4*a*c);

    if (d>=0)
    {
        //x2=y => ay2+by+c=0
        double y1, y2;// the roots of the equation
        y1=(-b+sqrt(d))/(2*a);
        y2=(-b-sqrt(d))/(2*a);
        //y1 and y2 >=0 x2 is positive
        if (y1>=0)
        {
          double x1=sqrt(y1), x2=-(sqrt(y1));
          cout<< "x1="<< x1 << "  x2="<< x2 << endl;
        }

        if (y2>=0)
        {
          double x3=sqrt(y2), x4=-(sqrt(y2));
          cout<< "x3="<< x3 << "  x4="<< x4 << endl;
        }
        if (y1<0 && y2<0) cout<< "The equation has no real roots" << endl;

    }
    else cout<< "The equation has no real roots" << endl;
    }

    return 0;
}
