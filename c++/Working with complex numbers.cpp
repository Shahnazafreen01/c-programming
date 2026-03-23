#include<iostream>
using namespace std;

class Complex {
public:
    int real,imag;

    void input() {
        cin >> real >> imag;
    }

    void add(Complex c1,Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void subtract(Complex c1,Complex c2) {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;

    }

    void display() {
        cout << real << " + " << imag << " i ";
    }

    void display2() {
        cout << real << " - " << imag << " i ";
    }


};

int main() {
    Complex c1, c2, sum, diff;

    cout << "Enter first complex number (real imaginary): ";
    c1.input();

    cout << "Enter second complex number (real imaginary): ";
    c2.input();

    sum.add(c1, c2);
    diff.subtract(c1, c2);

    cout << "\nSum = ";
    sum.display();

    cout << "\nDifference = ";
    diff.display2();

    return 0;
}
