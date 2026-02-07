// COMSC-210 | Lab 4A | Christine Susic

#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

//rgb values
struct Color {
    int red;
    int green; 
    int blue;
};

//set column widths
const int W1 = 10;
//range of 25-50 for random numbers
const int MIN = 25, MAX = 50; 
//range of 0-255 for rgb random numbers
const int MIN1 = 0, MAX1 = 255; 

int main() {
    int colorNum = 0; //counter
    //random numbers
    int n, n1, n2, n3; 
    srand(time(0));
    n = rand() % (MAX - MIN + 1) + MIN;
    
    vector<Color> colorList;
    
    //output headers
    cout << left;
    cout << setw(W1) << left << "Color # ";
    cout << setw(W1) << "R value ";
    cout << setw(W1) << "G value "; 
    cout << setw(W1) << "B value " << endl;
    cout << setw(W1) << left << "-------";
    cout << setw(W1) << "-------";
    cout << setw(W1) << "-------";
    cout << setw(W1) << "-------" << endl;
         
    for (int i = 0; i < n; i++) {
        colorNum++; //counter
        //random numbers for rgb
        n1 = rand() % (MAX1 - MIN1 + 1) + MIN1;
        n2 = rand() % (MAX1 - MIN1 + 1) + MIN1;
        n3 = rand() % (MAX1 - MIN1 + 1) + MIN1;
        Color t = {n1, n2, n3}; //temporary struct
        //output colorNum and rgb values
        cout << setw(W1) << left <<  colorNum;
        cout << setw(W1) << t.red;
        cout << setw(W1) << t.green;
        cout << setw(W1) << t.blue;
        cout << endl;
        colorList.push_back(t); //push struct
    }
    
    return 0;
}
