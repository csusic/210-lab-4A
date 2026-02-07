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

//set precision, column widths
const int PREC = 2, W1 = 10, W2 = 10; 
//range of 25-50
const int MIN = 25, MAX = 50; 

int main() {
    cout << fixed << setprecision(PREC);
    //random number
    int n; 
    srand(time(0));
    n = rand() % (MAX - MIN + 1) + MIN;
    
    vector<Color> colorList;
    
    Color c = {45, 23, 78};
    cout << left;
    cout << setw(W1) << "Red: " 
         << setw(W2) << c.red << endl;
    cout << setw(W1) << "Green: " 
         << setw(W2) << c.green << endl;
    cout << setw(W1) << "Blue: " 
         << setw(W2) << c.blue << endl;
    cout << n;
    
    /*colorList.push_back(9);
    //cout << 
    
    for (int i : colorList)
        cout << i << " ";*/
    
    //for (int i = 0; i < n; i++)
        //Color t = {n, n, n};
        //colorList.push_back(n);
    
    return 0;
}
