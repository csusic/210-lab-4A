// COMSC-210 | Lab 4A | Christine Susic

#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

// rgb values
struct Color {
    int red;
    int green; 
    int blue;
};

const int PREC = 2; //precision 
const int MIN = 25, MAX = 50; //range of 25-50

int main() {
    cout << fixed << setprecision(PREC);
    //random number
    int n; 
    srand(time(0));
    n = rand() % (MAX - MIN + 1) + MIN;
    
    vector<Color> colorList;
    
    Color c = {45, 23, 78};
    cout << c.red << "\n";
    cout << c.green << "\n";
    cout << c.blue << "\n";
    cout << n;
    
    //for (int i = 0; i < n; i++)
        //c.red.push_back(n);
    
    return 0;
}
