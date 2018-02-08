#include <stdio.h>
void main()
{
int N, rev = 0, remainder;
printf("Enter an integer: ");
scanf("%d", &N);
while( N!=0 )
{
remainder = N%10;
rev = rev*10 + remainder;
N/= 10;
}
printf("reversed integer is : %d",rev);
}
