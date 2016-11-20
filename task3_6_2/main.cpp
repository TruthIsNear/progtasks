#include <iostream>

using namespace std;

int main()
{
    float x,y;
    cout<<"x="; cin>>x;
    cout<<"y="; cin>>y;
    if (y<=0 && y>=-4*x-12 && y>=-4 && y>=4*x-12)
        cout<<"The point belongs to the region"<<endl;
    else
        cout<<"The point doesn't belong to the region"<<endl;
    return 0;
}
