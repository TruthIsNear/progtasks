#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, y;
    cout<<"a="; cin>>a;
    if(a<=1)y=pow(0.5,a);
    else if(a>1 && a<4)y=2;
    else y=5;
    cout<<"y="<<y<<endl;
    return 0;
}
