/*1.	Write an Integer function PolygonType (int a,int b,int c,int d) that  accepts as parameters the four sides of a polygon a,b,c and d and returns integer;

                      1  if the poligon is rectangle
                      2  if the poligon is square
                      3  if the poligon is other than rectangle or square

                      0  if the sides do not form a polygon with 4 side
*/

#include<iostream>
using namespace std;

int SquareType(int a, int b, int c, int d) {
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) // Check if it is valid shape
        return 0;

    if (a>=1 && b >=1 && c >= 1 && d >= 1){
        if (a == b && b==c && c==d) // Square have equal sides, so the equation must find all are same length.
            return 2;
        else if (a == b || c == d) // IRectangle have 2 side with same length, so the equation must find the 2 sides are same length.
            return 1;
        else
            return 3;
    }
    else

        return 0;
}

int main() {
    int a, b, c,d;
    cout << "Enter the sides of poligon: ";
    cin >> a >> b >> c >> d;
    int result = SquareType(a, b, c,d);
    if (result == 0)
        cout << "The sides do not form a a polygon with 4 side." ;
    else if (result == 1)
        cout << "The poligon is rectangle.";
    else if (result == 2)
        cout << "The poligon is square." ;
    else if (result == 3)
        cout << "The poligon is other than square and rectangle.";
    return 0;
}

