#include <iostream>
using namespace std;

// Color class
class Color {
private:
    int red;
    int green;
    int blue;

public:
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
    Color color1;
    Color color2;
    Color color3;

    // Set values
    color1.setRed(255);
    color1.setGreen(0);
    color1.setBlue(0);

    color2.setRed(0);
    color2.setGreen(255);
    color2.setBlue(0);

    color3.setRed(0);
    color3.setGreen(0);
    color3.setBlue(255);

    // Print calls
    color1.print();
    color2.print();
    color3.print();
    return 0;
}