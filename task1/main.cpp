#include <iostream>

using namespace std;

int main()  {
    int n;
    cout << "n = ";
    cin >> n; //ввод n
    n = (n > 0) ? n*2 : n == 0 ? n = 10 : n-3; //проверка условия и присваивание n нового значения
    cout << n; //вывод n

    return 0;
}
