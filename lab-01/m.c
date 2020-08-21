#include<stdio.h>//header file
/*This program is
printing division result*/
int main()
{
    int a,b;//variable
    //a=10,b=3
    printf("Enter two value:\n");
    scanf("%d %d",&a, &b);
    double division;
    int div= a/(double)b;
    int rem=a%b;
    printf("\n");
    printf("the quotient is = %d\n",div);
    printf("reminder is =%d",rem);
    return 0;
}
