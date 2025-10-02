#include <iostream>
using namespace std;

// Color class
class Color {
private:
    int red;
    int green;
    int blue;

public:
    // Default constructor
    Color() {
        red = 0;
        green = 0;
        blue = 0;
    }

    // Parameterized constructor
    Color(int r, int g, int b) {
        red = r;
        green = g;
        blue = b;
    }

    // Partial constructor
    Color(int r, int g) {
        red = r;
        green = g;
        blue = 0;
    }

    // Setters
    void setRed(int r)      { red = r; }
    void setGreen(int g)    { green = g; }
    void setBlue(int b)     { blue = b; }

    // Getters
    int getRed()            { return red; }
    int getGreen()          { return green; }
    int getBlue()           { return blue; }

    // Print method
    void print() {
        cout << "Color: " << endl;
        cout << "R= " << getRed() << " "
             << "G= " << getGreen() << " "
             << "B= " << getBlue() << endl;
    }
};

int main() {
    // Using default constructor
    Color color1;
    color1.print();
    
    // Using parameterized constructor
    Color color2(255, 0, 0);
    color2.print()

    // Using partial constructor
    Color color3(0, 255);
    color3.print();

    // Using parameterized constructor again


}