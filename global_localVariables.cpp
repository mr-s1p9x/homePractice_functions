#include <iostream>
using namespace std;

// Прототипы функций
void sampleFunction();
void global();

// А это уже глобальная переменная
string value = "Global variable!";

int main()
{
    // Здесь у нас обычный блок кода, который выводит переменную в main
    // Переменная локальна
    string value = "Local variable in Main!";
    cout << value << endl;

    sampleFunction(); // Это вызов функции, для функции переменная тоже локальна

    global(); // и тут мы вызываем функцию, которая принимает глобальную переменную

    return 0;
}

void sampleFunction()
{
    string value = "Local variable in sampleFunction";
    cout << value << endl;
}

void global()
{
    cout << value << endl;
}