// PracticalWork17.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

class Vector 
{
private:
    float x = 10;
    float y = 5;
    float z = 3;
public:
    float Modulus()
    {
        return sqrt((x * x) + (y * y) + (z * z));
    }
    Vector(const float& x, const float& y, const float& z) : x(x), y(y), z(z) {};
};

int main()
{
    Vector Modulus1(10,5,3);
    Modulus1.Modulus();
    std::cout << Modulus1.Modulus() << "\n";
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
