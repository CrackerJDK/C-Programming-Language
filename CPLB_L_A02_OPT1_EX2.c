#include<stdio.h>
#include<math.h>

 int main() {
     float width;
     float length;

    printf("Let type length and width of rectangle: ");

    printf("\nLength: ");
    scanf("\n%f",&length);

    printf("\nWidth: ");
    scanf("\n%f",&width);
    printf("\nThe perimeter of this rectangle: %g",(width+length)*2);
    printf("\nThe area of this rectangle: %g",width*length);
    
    float diagonal;
    diagonal = sqrt(pow(length, 2) + pow(width, 2));
    printf("\nThe diagonal of this rectangle: %f",diagonal);

    return 0;
 }