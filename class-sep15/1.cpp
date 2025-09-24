#include <iostream>
using namespace std;

class Complex {
    float x;
    float y;

public:
    // Constructor
    Complex(float a, float b) {
        x = a;
        y = b;
        cout << "Your complex number has been created: " 
             << x << " + " << y << "i" << endl;
    }

    // Overloaded * operator for multiplication
    Complex operator*(const Complex &second_obj) {
        Complex c3(0, 0);
        c3.x = (this->x * second_obj.x) - (this->y * second_obj.y);
        c3.y = (this->x * second_obj.y) + (this->y * second_obj.x);
        return c3;
    }

    // Function to print details
    void get_details() {
        cout << "Complex number is: " << x << " + " << y << "i" << endl;
    }

    // Destructor
    ~Complex() {
        cout << "Complex number has been destroyed: " 
             << x << " + " << y << "i" << endl;
    }
};

int main() {
    Complex c1(2, 4), c2(4, 5);
    Complex c3 = c1 * c2;  // multiplication
    c3.get_details();      // display result
    return 0;
}