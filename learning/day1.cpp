#include <stdio.h>
#include <iostream>
using namespace std;



int main() {
    string lyric = "awooo";
    cout << "testing the output \n\n"; // This is style used for character outputs.
    cout << 5*22; // Character output of mathematical function.
    cout << lyric;
   
    float x,y,z; // Multi variable assignment ~float x,y,z = 25;~ this will not work as
                // it is treated differently when trying to perform addition (multiplying appears to).
    x = y = z = 25;
    cout << x+y+z;
    

    const string fix = "not changing me :-)"; // How to set a constant static variable.
                                            // - can't be changed at the output stage this results in an error.
                                            // - can't be assigned to self-value e.g. const of 25 to a value of 25.
    cout << fix;

    int length = 25; // Multiplication and assignment of variable further practice.
    int width = 5;
    int area = length * width;

   cout << area;



    return 0; // return statement matching function data type :)
}





