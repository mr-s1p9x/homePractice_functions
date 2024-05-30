#include <iostream>
using namespace std;

int addNumbers(int a, int b); // создали прототип функции, принимает 2 параметра типа int, возвращает int
double addNumbersDouble(double a, double b); // по аналогии выше, только double

int main()
{
    int sum = 0, value1 = 2, value2 = 3;
    double sum2 = 0, value3 = 4.64, value4 = 9.3;

    sum = addNumbers(value1, value2); // переменной sum передаем функцию с 2 параметрами
    cout << "value1 + value2 = " << sum << endl;

    cout << endl << endl;

    sum2 = addNumbersDouble(value3, value4);
    cout << "value3 + value4 = " << sum2 << endl;

    return 0;
}

int addNumbers(int a, int b)
{
    cout << "Function(int a, int b) was called" << endl;
    return a + b;
}

double addNumbersDouble(double a, double b)
{
    cout << "Function(double a, double b) was called" << endl;
    return a + b;
}