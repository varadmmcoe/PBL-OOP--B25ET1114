#include <iostream>
using namespace std;

int fact(int number)
{
    int res = 1;

    for (int i = number; i >= 1; i--)
    {
        res = res * i;
    }

    return res;
}

int main()
{
    int number = 8;

    cout << "Factorial of " << number << " is ";
    cout << fact(number) << endl;

    return 0;
}
