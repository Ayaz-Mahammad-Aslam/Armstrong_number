/* Write a program to check armstrong number in c*/
#include<stdio.h>
int main()
/* An armstrong number is a number which is equal to the sum of the cubes of its individual digits.
For example, 153 is an armstrong number as : 
153 = (1)3+ (5)3 + (3)3 
= 1 + 125 + 27
= 153 */
{
    int n,r,sum=0,temp;
    printf("Enter a number :\n");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        r = n%10;
        sum = sum + (r*r*r);
        n = n/10;
    }
    if(temp == sum)
    printf("Armstrong number");
    else
    printf("Not Armstrong");
    return 0;
}
