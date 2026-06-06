// Q. Create a structure Point with x and y coordinates.
// Print the point as (x, y).

#include<stdio.h>
struct Point
{
    int x,y;
};
int main()
{
    struct Point p1 = {10,20};
    printf("points = (%d,%d)",p1.x, p1.y);
}