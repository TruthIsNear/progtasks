#include <iostream>
using namespace std;

int main ()
{
    char ch=' ';
    int num2=0;
    int j=0;

    do
    {
        int num=rand() % 10;
        while(j<=10)
        {
            cout << "Enter a number: ";
            cin >> num2;
            j++;
            if( num < num2)
                cout << "The number you entered is too big!" << endl;
            if( num > num2)
                cout << "The number you entered is too small!" << endl;
            if( j == 10)
                {cout << endl << "You couldn't guess the number " << num << " in 10 tries!" << endl; break;}
            if( num2 == num )
                {cout << endl << "You guessed the number! in " << j << " tries!" << endl; break;}
        }

    cout << "Retry? (y/n):_\b";
    cin >> ch; cout << endl; j=0;
    }
    while( ch != 'n' );
 return 0;
}
