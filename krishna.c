#include<stdio.h>

int main(){
    int r;
    float area,circum;

    printf("enter radius of circle :");
    scanf("%d",&r);
    area=3.14*r*r;
    circum=2*3.14*r;
    printf("area of circum is : %f",area);
    printf("\nThe circumference of circle is %f",circum);
    return 0;
}