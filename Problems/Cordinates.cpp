#include <iostream>
#include <cmath>
using namespace std;

class Coordinates
{

private:
    float x, y;

public:
    void input()
    {
        cout << "Enter x and y coordinates: " << endl;
        cin >> x >> y;
    }

    float distance(Coordinates c)
    {
        float dx = c.x - x;
        float dy = c.y - y;
        return sqrt(pow(dx, 2) + pow(dy, 2));
    }
};

int main()
{
    Coordinates p1, p2;
    cout << "Enter First Point: " << endl;
    p1.input();
    cout << "Enter Second Point: " << endl;
    p2.input();

    float d = p1.distance(p2);

    cout << "The Distance Between Two Points is: " << d;
    return 0;
}