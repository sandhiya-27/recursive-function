/* Program in C to find the  LCM of two numbers using recursion.*/
#include <stdio.h>
int lcmsolv(int x,int y);
int main()
{
    int no1,no2,lcm;
    printf("\n Recursion:to find LCM of two numbers:\n");
    printf(-----------------------------------------\n");
    printf("Enter the first number:");
    scanf("%d",&no1);
    printf("Enter the second number:");
    scanf("%d",&no2);
    if(no1>no2)
    lcm=lcmsolv(no2,no1);
    else 
    lcm=lcmsolv(no1,no2);
    printf("LCM of %d and %d: %d\n,"no1,no2,lcm);
    return 0;
}
int lcmsolv(int x,int y)
{
    static int p=0;
    p+=y;
    if((p% x ==0)&& (p% y ==0))
    {
         return p;
    }
    else 
    {
         lcmsolv(x,y);
    }


no1=12;
no2=30;
lcm=60
