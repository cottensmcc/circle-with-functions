// Author: Colter Cotten
// Description: This program reads a radius value from the standard input device
//              and uses the radius to compute the area and circumference of a 
//              circle.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14;

// Function Prototypes
double getRadius();
double computeArea(double);
double computeCircumference(double);
void print(double, double, double);

int main()
{
    // Variable declarations
    double radius, area, circumference;

    // Call getRadius function and value entered by user
    radius = getRadius();

    // Call computeArea function and store result
    area = computeArea(radius);

    // Call computeCircumference function and store result
    circumference = computeCircumference(radius);

    // Call print function to print the values of radius, area, and circumference
    print(radius, area, circumference);

    return 0;
}

// Prompts the user for the radius and returns it as a double
double getRadius()
{
    double r;
    
    cout << "Enter radius: ";
    cin >> r;

    return r;
}

// Computes the area of a circle and returns it as a double
double computeArea(double r)
{
    return PI * pow(r, 2);
}

// Computes the circumference of a circle and returns it as a double
double computeCircumference(double r)
{
    return 2 * PI * r;
}

// Prints the radius, area, and circumference 
void print(double r, double a, double c)
{
    cout << fixed << showpoint << setprecision(2);
    
    cout << "\nRadius: " << r << endl;
    cout << "Area: " << a << endl;
    cout << "Circumference: " << c << endl;
}