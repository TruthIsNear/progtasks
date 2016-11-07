#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    const int N=10;
    char mas[N];
    int dec=0;
    cout<<"Enter number (binary) -> ";
    cin.getline(mas,N);
    for(int i=strlen(mas)-1,j=1; i>=0; i--,j*=2)
    {
        if(mas[i]=='1')
        {
            dec+=j;
        }
    }
    cout<<endl<<"Number (decimal) -> "<<dec<<endl;
    return 0;

}
