#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
string s;
cin >> s;
int bit=0;
for(int i=s.length()-1; i>=0; i--) //перевод в десятичную систему счисления
    bit+=(s[i]-'0')*pow(2.0,double(s.length()-i-1));
    cout << bit << endl;
 return 0;
}
