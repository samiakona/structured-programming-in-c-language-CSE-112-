#include<stdio.h>//header file
/*This program is
printing division result*/
int main()
{
    float a,b;//variable
    //a=10,b=3
    printf("Enter two value:\n");
    scanf("%f %f",&a, &b);
    double division;
    float div= a/(double)b;
    printf("\n");
    printf("the quotient is = %f",div);
    return 0;
}
