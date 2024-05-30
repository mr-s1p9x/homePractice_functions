#include <iostream>
using namespace std;

bool orFunc(bool a, bool b);

int main()
{
    bool res = false, v1 = true, v2 = false;

    res = orFunc(v1, v2);

    cout << "a || b = " << res << endl;

    return 0;
}

bool orFunc(bool a, bool b)
{
    cout << "Function(bool a, bool b) was called" << endl;
    return a || b;
}
