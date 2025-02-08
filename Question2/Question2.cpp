#include <iostream>  // for input and output
#include <cmath> // math library
using namespace std;
// This program calculates the midpoint between two points.
int main()
   
 {
// user input for x1 ans x2's values:
    double x1,x2, midpoint_x;
    cout << "Please enter a value for x1: "<< endl;
    cin >> x1;
    cout << "Please enter a value for x2: "<< endl;
    cin >> x2;

    midpoint_x= (x1 + x2) / 2;

// user input for y1 ans y2's values:
    double y1, y2,midpoint_y;
    cout << "Please enter a value for y1: "<< endl;    
    cin >> y1;
    cout << "Please enter a value for y2: "<< endl;
    cin >> y2;
    
    midpoint_y= (y1 + y2) / 2;

    //calculate the midpoint between the values given but the user.
    cout <<"The midpoint for x is: "<<midpoint_x << endl;   // will display on the scream the result of x
    cout << "The midpoint for y is: "<< midpoint_y <<endl;  // will display on the scream the result of y

    return 0;

 }