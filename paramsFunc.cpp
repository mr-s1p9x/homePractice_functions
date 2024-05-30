#include <iostream>
using namespace std;

// Мы можем прописывать значения параметров сразу в прототите
// А-ля значения по умолчанию (если не задать при вызове)
void testFunc(int a = 5, int b = 10);

int main()
{
    int operator1 = 2, operator2 = 5;

    testFunc(operator1, operator2); // передали 2 своих параметра
    testFunc(operator1); // передали 1 свой параметр
    testFunc(); // ничего не передали, но в прототипе у нас есть значения по умолчанию

    return 0;
}

void testFunc(int a, int b)
{
    cout << "a = " << a << "; " << "b = " << b << endl;
}