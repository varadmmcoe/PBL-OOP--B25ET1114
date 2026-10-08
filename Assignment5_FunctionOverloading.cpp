
#include <iostream>
using namespace std;

class Addition
{
public:


    int add(int a, int b)
    {
        return a + b;
    }


    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    
    float add(float a, float b)
    {
        return a + b;
    }
};

int main()
{
    Addition obj;

    cout << "Addition of two integers: "
         << obj.add(10, 20) << endl;

    cout << "Addition of three integers: "
         << obj.add(10, 20, 30) << endl;

    cout << "Addition of two float numbers: "
         << obj.add(10.5f, 20.5f) << endl;

    return 0;
}
