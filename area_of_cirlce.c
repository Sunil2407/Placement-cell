#include <stdio.h>
int main()
{
   // Try out your code here
   int diameter;
   float pi = 3.14;
   scanf("%d", &diameter);
   int radius = diameter/2;
   float area =  pi * (radius * radius);
  printf("%.2f", area);
  
   return 0;
}