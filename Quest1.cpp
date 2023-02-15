/*1. Write an Integer function TriangleType (int a,int b,int c) that accepts as parameters the three
sides of a triangle a,b and c and returns integer;
1  if the triangle is scalene
2  if the triangle is isosceles
3  if the triangle is equilateral
0  if the sides do not forma triangle*/

#include<iostream>
using namespace std;

int TriangleType(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) // Check if it is valid shape
        return 0;
    if (a + b > c && a + c > b && b + c > a) { //Checking if it is a triangle
        if (a == b && b == c) // Equilateral triangle have equal sides, so the equation must find all are same length.
            return 3;
        else if (a == b || a == c || b == c) // Isosceles triangle have 2 side with same length, so the equation must find the two one of 2 sides are same length.
            return 2;
        else
            return 1;
    }
    else
        return 0;
}

int main() {
    int a, b, c;
    cout << "Enter the sides of triangle: ";
    cin >> a >> b >> c;
    int result = TriangleType(a, b, c);
    if (result == 0)
        cout << "The sides do not form a triangle." ;
    else if (result == 1)
        cout << "The triangle is scalene.";
    else if (result == 2)
        cout << "The triangle is isosceles." ;
    else if (result == 3)
        cout << "The triangle is equilateral.";
    return 0;
}
// Alternatively you can use boolean equation to check if it is triangle or not.
