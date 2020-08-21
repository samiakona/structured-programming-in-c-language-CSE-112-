#include<stdio.h>//header file
/*This program is
printing multiplication result*/
int main()
{
    int a,b;//variable
    //a=25,b=5
    printf("Enter two value:\n");
    scanf("%d %d",&a, &b);
    int mult=a*b;
    printf("multiplication of %d and %d is=%d\n",a,b,mult);
    return 0;
}
