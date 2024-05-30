#include <iostream>
#include <string>
using namespace std;

string compare(int, int);

int main()
{
    int value1 = 17, value2 = 15;
    string res;

    res = compare(value1, value2);

    cout << value1 << res << value2 << endl;

    return 0;
}

string compare (int value1, int value2)
{
    string result = "";

    if (value1 > value2)
    {
        result = " > ";
    }
    else if (value1 < value2)
    {
        result = " < ";
    }
    else
    {
        result = " = ";
    }

    return result;
}