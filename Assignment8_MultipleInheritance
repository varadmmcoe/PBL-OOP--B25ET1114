#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Exception Handling Program" << endl;
    cout << "1. Division by zero" << endl;
    cout << "2. Negative number" << endl;
    cout << "3. Invalid age" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    try
    {
        if (choice == 1)
        {
            int a, b;

            cout << "Enter two numbers: ";
            cin >> a >> b;

            if (b == 0)
                throw b;

            cout << "Result = " << a / b << endl;
        }

        else if (choice == 2)
        {
            int n;

            cout << "Enter a number: ";
            cin >> n;

            if (n < 0)
                throw "Negative number is not allowed";

            cout << "Number = " << n << endl;
        }

        else if (choice == 3)
        {
            int age;

            cout << "Enter age: ";
            cin >> age;

            if (age < 0 || age > 150)
                throw age;

            cout << "Valid age = " << age << endl;
        }

        else
        {
            throw 1.5;
        }
    }

    catch (int)
    {
        cout << "Exception: Invalid integer value!" << endl;
    }

    catch (const char *msg)
    {
        cout << "Exception: " << msg << endl;
    }

    catch (double)
    {
        cout << "Exception: Invalid choice!" << endl;
    }

    return 0;
}
