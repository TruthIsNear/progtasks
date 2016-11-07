#include <iostream>
using namespace std;
int main()
{
    int n, i, counter=0;
    float a[50], sum=0;
    cout << "Enter the length of the array:\n";
    cin >> n;
    cout << "Enter the array:\n";
    for (i=0; i<n; i++)
    {
        cin >> a[i];
        if (a[i]>0)
        {
            counter++;
            sum=sum+a[i];
        }
    }
    cout << "The amount of positive numbers:\n" << counter << endl;
    cout << "Average:\n" << sum/counter << endl;
    return 0;
}
