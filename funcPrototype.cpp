#include <iostream>
using namespace std;

// Прототип функции getValue
int getValue();

int main()
{
    int value = getValue();

    cout << value << endl;

    return 0;
}

// благодаря прототипу, если мы объявим функцию после main - ошибку не получим
int getValue()
{
    return 10;
}