#include <stdio.h>
#include <iostream>
using namespace std;

struct dogs{
    string breed;
    int age;
};

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

   int specialNumber;
   cout << "Present thy number: ";
   cin >> specialNumber;
   cout << "The special number is " << specialNumber;

    dogs dog1;
    dog1.breed = "cockapoo";
    dog1.age = 7;
    dogs dog2;
    dog2.breed = "german shepherd";
    dog2.age = 10;

    cout << dog2.breed;
    cout << &dog2 << "\n"; // & can be used to get the memory address of a variable, also used for ref variable (see below)

    string cat = "wild";
    string &lion = cat;
    cout << lion;

    return 0; // return statement matching function data type :)


}


