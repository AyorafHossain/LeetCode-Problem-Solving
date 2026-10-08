#include<stdio.h>
#include<limits.h>


int main()
{
    int x=00,rem,reverse=0,temp;



    if(x<0||(x%10==0 && x!=0))
    {
        printf("Not Palindrome \n");
        return 0;

    }


    temp=x;

    while(temp!=0)
    {
        rem=temp%10;
        if(reverse>INT_MAX/10 || reverse<INT_MIN/10)
        {
            return 0;
        }
        reverse=reverse*10+rem;
        temp=temp/10;


    }

    if(x==reverse)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}
