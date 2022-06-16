#include <iostream>
using namespace std;

// Second example of Parameterized and Default constructor
// This is the example of the Point x and y.

class Point
{
    int x, y;

public:
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

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(2, -1);
    q.displayPoint();

    return 0;
}
