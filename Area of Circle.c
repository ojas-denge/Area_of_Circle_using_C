//Write a program to find area of a circle when radius is given.//
#include <stdio.h>
int main () {
    float n1;
    
    printf("Enter RADIUS of the CIRCLE:\n");
    scanf("%f", &n1);
    
    printf("The AREA of CIRCLE with RADIUS %f is :%f", n1, 3.1415926* n1* n1);
    
    return 0;
}