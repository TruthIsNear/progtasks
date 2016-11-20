#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "a=";
    cin >> a;
    a=a%10*10+a/10;
    cout << "Reversed a=" << a << endl;
    return 0;
}
