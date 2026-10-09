#include<stdio.h>
int main()
{
    int num,i,sum=1;
    scanf("%d",&num);
    if(num==1)
    {
        printf("Not Perfect Number\n");
        return ;
    }
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
            if(i!=num/i)
            {
                sum+=num/i;
            }
        }
    }

    if(num==sum)
    {
        printf("Perfect Numner\n");
    }
    else
    {
        printf("Not Perfect Number\n");
    }


}
