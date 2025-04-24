#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "vector.h"

struct Point
{
    int x, y;
};

int main()
{
    Vector<Point> vector {{1,1}, {2,2}, {3,3} };


    vector.Pop();
    vector.Remove(0);
    //vector.Insert(0, {2,3});
    for (size_t i = 0; i < vector.Size(); i++)
    {
        std::cout << vector[i].x << vector[i].y << "\n";
    }


    return 0;
}
