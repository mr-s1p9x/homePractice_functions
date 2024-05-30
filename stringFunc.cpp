#include <iostream>
#include <string>
using namespace std;

string Function(string name); // прототип функции, функция которая принимает один строчный параметр

int main()
{
    string sentence = Function("User");

    cout << sentence << endl;

    return 0;
}
// Функция возвращает тип string и принимает один строчный параметр
string Function(string name)
{
    string hi = "Hello, " + name + "!";

    return hi;
}