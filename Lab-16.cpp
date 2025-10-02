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
        red = 255;
        green = 255;
        blue = 255;
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
    Color color1;                       // White
    color1.print();
    
    // Using parameterized constructor
    Color color2(255, 0, 0);            // Red
    color2.print();

    // Using partial constructor
    Color color3(0, 255);               // Green
    color3.print();

    // Using parameterized constructor again
    Color color4(128, 0, 128);
    color4.print();                     // Purple

    return 0;
}