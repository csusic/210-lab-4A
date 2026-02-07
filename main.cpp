// COMSC-210 | Lab 4A | Christine Susic

#include <iostream>
using namespace std;

// rgb values
struct Color {
    int red;
    int green; 
    int blue;
};

int main() {
    Color c = {45, 23, 78};
    cout << c.red << "\n";
    cout << c.green << "\n";
    cout << c.blue << "\n";

    return 0;
}
