
#include <iostream>
using namespace std;

class Complex
{
    float real, img;

public:

    // Accept complex number
    void accept()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> img;
    }

    // Display complex number
    void display()
    {
        cout << real;

        if (img >= 0)
            cout << " + " << img << "i";
        else
            cout << " - " << -img << "i";

        cout << endl;
    }

    // Addition
    Complex add(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.img = img + c.img;

        return temp;
    }

    // Subtraction
    Complex subtract(Complex c)
    {
        Complex temp;

        temp.real = real - c.real;
        temp.img = img - c.img;

        return temp;
    }

    // Multiplication
    Complex multiply(Complex c)
    {
        Complex temp;

        temp.real = (real * c.real) - (img * c.img);
        temp.img = (real * c.img) + (img * c.real);

        return temp;
    }

    // Division
    Complex divide(Complex c)
    {
        Complex temp;

        float denominator = (c.real * c.real) + (c.img * c.img);

        temp.real = ((real * c.real) + (img * c.img))
                    / denominator;

        temp.img = ((img * c.real) - (real * c.img))
                   / denominator;

        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.accept();

    cout << "Enter second complex number:" << endl;
    c2.accept();

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    c3 = c1.add(c2);
    cout << "\nAddition: ";
    c3.display();

    c3 = c1.subtract(c2);
    cout << "Subtraction: ";
    c3.display();

    c3 = c1.multiply(c2);
    cout << "Multiplication: ";
    c3.display();

    c3 = c1.divide(c2);
    cout << "Division: ";
    c3.display();

    return 0;
}
