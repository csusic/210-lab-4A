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

const int MIN = 25, MAX = 50; //range of 25-50

int main() {
    srand(time(0));
    vector<Color> colorList;
    
    Color c = {45, 23, 78};
    cout << c.red << "\n";
    cout << c.green << "\n";
    cout << c.blue << "\n";
    
    //Color c;
    //c.red = (9);
    //cout << c.red; 
    
    //fot (int i : v) 
        //cout << i << " ";
    
    /*for (int i = 0; i < 5; i++)
        myVec.push_back(i);
    for (int val : myVec) cout << val << " ";
    cout << endl << endl;*/
    
    return 0;
}
