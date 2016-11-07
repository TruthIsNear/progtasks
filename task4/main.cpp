#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x1,x2;
    double a, b, c;
    cout<<"The quadratic decision\nEnter in one line value of factors and press <Enter>\n";
    cin>>a>>b>>c;
    if(a==0)
    {
        cout<<"The equation isn't square";
    }
    else
    {
        double d=b*b-4*a*c;
        if(d<0)
        {
            cout<<"The equation has no decision in the valid area";
        }
        if(d==0)
        {
            cout<<"The equation has 2 identical roots of the equation:\n";
            x1=-b/(2*a);
            cout<<"x = "<<x1;
        }
        if(d>0)
        {
            cout<<"Equation roots:\n";
            d=sqrt(d);
            x1=(-b+d)/(2*a);
            x2=(-b-d)/(2*a);
            cout<<"x1 = "<<x1<<"\n"<<"x2 = "<<x2;
        }
    }
    return 1;
}
