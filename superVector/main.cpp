#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Super_Vector_template.h"

struct Point
{
    int x, y;
};

int main()
{
    SuperVector<int> vector{ 1,2,3 };
    SuperVector<int> vector1{ 1,1,3 };
    //SuperVector<Point> vector {{1,1}, {2,2}, {3,3} };
    //SuperVector<Point> vector1 {{1,1}, {2,2}, {3,3} };
    //SuperVector<Point> vector1 {{11,-1}, {-2,-2}, {-3,33} };
    //vector += vector1;
    //vector.Pop();
    //vector.Remove(0);
    //vector.Insert(0, {2,3});
    std::cout << (vector == vector1);
    //for (size_t i = 0; i < vector.Size(); i++)
    //{
    //    std::cout << vector[i].x << vector[i].y << "\n";
    //}


    return 0;
}
