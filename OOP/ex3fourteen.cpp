#include <iostream>
#include <cmath>
using namespace std;

// Second example of Parameterized and Default constructor
// Problem of: //(make it through friend function)Create a function which takes 2 point object and computes the distance between those points.

class Point
{
    int x, y;

public:
    //Here the parameter inside this should be the Constructor name which we are using so to invoke the data
    friend void distanceFormula(Point, Point);
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

void distanceFormula(Point obj1, Point obj2)
{
    double dis;
    dis = sqrt((pow((obj2.x - obj1.x), 2)) + pow((obj2.y - obj1.y), 2));
    cout << dis;
}

int main()
{
    Point p(1, 0);
    p.displayPoint();

    Point q(70, 0);
    q.displayPoint();

    distanceFormula(p, q);

    return 0;
}