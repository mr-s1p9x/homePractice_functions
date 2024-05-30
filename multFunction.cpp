#include <iostream>
#include <string>
using namespace std;

int mult(int x, int y);

int main()
{
    int res = 0, d1, d2;

    cout << "Enter 2 digits separated with space: ";
    cin >> d1 >> d2;

    res = mult(d1, d2);

    cout << d1 << " * " << d2 << " = " << res << endl;

    return 0;
}

int mult(int x, int y)
{
    int temp = x * y;
    return temp;
}