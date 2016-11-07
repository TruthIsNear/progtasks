#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number: " << endl; // введите число
    int numb; // число возводимое в степень
    cin >> numb;
    cout << "Enter power: "; // введите степень
    int power;
    cin >> power;
    int count = 1; // переменная, отвечающая за истинность условия цикла do while
    int power_numb = numb; // результат возведения числа в степень
    do
    {
        if (power == 0)
            power_numb = 1;
        else
            if (power != 1 && power > 0)
                power_numb = power_numb * numb; // возводим в степень
        count++; // инкремент переменной-счётчика
    } while ( power > count); // проверка условия цикла do while
    cout << "number = " << power_numb << endl; // печать возведённого числа в степень
    return 0;
}
