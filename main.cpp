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

//set column widths
const int W1 = 10;
//range of 25-50
const int MIN = 25, MAX = 50; 

int main() {
    int colorNum = 0; //counter
    //random number
    int n; 
    srand(time(0));
    n = rand() % (MAX - MIN + 1) + MIN;
    
    vector<Color> colorList;
    
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
        Color t = {n, n, n}; //temporary struct
        cout << setw(W1) << left <<  colorNum;
        cout << setw(W1) << t.red;
        cout << setw(W1) << t.green;
        cout << setw(W1) << t.blue;
        cout << endl;
    }
    
    /*colorList.push_back(9);
    //cout << 
    
    for (int i : colorList)
        cout << i << " ";*/
    
    //for (int i = 0; i < n; i++)
        //Color t = {n, n, n};
        //colorList.push_back(n);
    
    return 0;
}
