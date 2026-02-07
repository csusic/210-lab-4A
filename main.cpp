// COMSC-210 | Lab 4A | Christine Susic

#include <iostream>
#include <vector>
using namespace std;

// rgb values
struct Color {
    int red;
    int green; 
    int blue;
};

int main() {
    //Color c;
    //c.red = (9);
    //cout << c.red; 
    
    //fot (int i : v) 
        //cout << i << " ";
    
    /*for (int i = 0; i < 5; i++)
        myVec.push_back(i);
    for (int val : myVec) cout << val << " ";
    cout << endl << endl;*/

    
    Color c = {45, 23, 78};
    cout << c.red << "\n";
    cout << c.green << "\n";
    cout << c.blue << "\n";
    
    /*for (int i = 0; i < storeColors.size(); i++) {
        cout << storeColors[i] << " ";
    }*/
    
    return 0;
}