/*
C PROGRAM TO READ THE RADIUS OF A CIRCLE, CALCULATE ITS AREA, AND DISPLAY IT
NAME: JAIDON GILL SHAJAN
ROLL NO: 039
CLASS: AD
*/
#include<stdio.h>
#define PI 3.1428

 int main()
{
  float radius, area;
  printf("Enter the radius of a circle\n");
  scanf("%f", &radius);
  area = PI*radius*radius;
  printf("\nArea of the circle = %.2f\n", area);
  return 0;
}
