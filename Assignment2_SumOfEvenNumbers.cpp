
#include <iostream>
using namespace std;

int main()
{
    int sumEven = 0;

    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
    }

    cout << "Sum of even numbers from 0 to 50 is "
         << sumEven << endl;

    return 0;
}
