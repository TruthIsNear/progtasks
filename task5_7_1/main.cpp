#include <iostream>

using namespace std;

void DeleteElement(int* arr, int length, int pos)
{
    for( ; pos<length-1; ++pos) arr[pos]=arr[pos+1];
}

int main()
{
    int *b, *b1, *c, *c1, *a, n=0, n1=0, m=0, m1=0, p=1, count=0, count1=0, max=0;
    cout<<"The amount of elements in the array b="; cin>>n;
    b=new int[n];
    for (int i=0;i<n;i++)
    {
        cout<<"B["<<i<<"]="; cin>>b[i];
        if (b[i]>=0) n1++;
    }
    for (int i=0; i<n ; i+=2)
    {
        if (b[i]<0) p*=b[i];
    }
    for (int i=0;i<n; i++)
    {
        if (b[i]%3==0 && b[i]>max) max=b[i];
    }
    cout<<"p="<<p<<"\n";
    cout<<"max="<<max<<"\n";
    b1=new int[n1];
    for (int i=0;i<n;i++)
    {
        if (b[i]>=0)
        {
            b1[count]=b[i];
            count++;
        }
    }
    cout<<"The amount of elements in the array c="; cin>>m;
    c=new int[m];
    for (int i=0;i<m;i++)
    {
        cout<<"C["<<i<<"]="; cin>>c[i];
        if (c[i]>=0) m1++;
    }
    c1=new int[m1];
    for (int i=0;i<m;i++)
    {
        if (c[i]>=0)
        {
            c1[count1]=c[i];
            count1++;
        }
    }
    a=new int[n1+m1];
    for (int i=0;i<n1;i++) a[i]=b1[i];
    for (int i=n1;i<n1+m1;i++) a[i]=c1[i-n1];
    cout<<"Array A:\n";
    for (int i=0; i<n1+m1; i++) cout<<a[i]<<" ";
    for (int i=0; i<n1+m1; i++)
    {
        if (a[i]%17==0)
        {
            DeleteElement(a, n1+m1, i);
            break;
        }
    }
    cout<<"\nNew array A:\n";
    for (int i=0; i<n1+m1-1; i++) cout<<a[i]<<" ";
    delete [] b;
    delete [] b1;
    delete [] c;
    delete [] c1;
    delete [] a;
    return 0;
}
