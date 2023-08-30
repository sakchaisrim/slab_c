// Square area function calulate
#include <stdio.h>
float squareArea(float side){
    return side * side;
}


void main(){
    float side, area;
    //side = 5.25;
    printf("Enter side: ");
    scanf("%f",&side);
    area = squareArea(side);
    printf("Square Area is %.2f", area);
}
