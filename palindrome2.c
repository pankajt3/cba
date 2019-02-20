#include <stdio.h>
int check( int n)
{
    int reversedInteger = 0, remainder, originalInteger;
    originalInteger = n;

    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
    if(reversedInteger== originalInteger)
        return 1;
    else
        return 0;

}
int main()
{
    int n,result=0;

    printf("Enter an integer: ");
    scanf("%d", &n);
    result= check(n);


    if (result==1)
        printf("%d is a palindrome.",n);
    else
        printf("%d is not a palindrome.",n);
}
