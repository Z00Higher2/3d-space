// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 9A
// Write a program 3d-space.cpp, in which you define a function length() 
// that receives the coordinates of a point P passed as a pointer, 
// and computes the distance from the origin to the point P:

#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p){
    double vector = sqrt(p->x * p->x + p->y * p ->y + p->z * p ->z);
    return vector;

}


int main() {
    Coord3D pointP = {10, 20, 30};
    cout << length(&pointP) << endl; // would print 37.4166
}