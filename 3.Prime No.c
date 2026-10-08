#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n,count=0;
    scanf("%d", &n);
    if (n < 2)
    return 0;

    bool prime[n];

    // Initially assume all numbers are prime
    for (int i = 0; i < n; i++)
    {
        prime[i] = true;
    }

    // 0 and 1 are not prime
    prime[0] = prime[1] = false;

    //even gola bad dea de 2 cera karon agola prime na

    for(int i=4;i<n;i+=2)
    {
        prime[i]=false;
    }

    // Sieve only odd no
    for (int i = 3; i * i < n; i+=2)
    {
        if (prime[i])
        {
            for (int j = i * i; j < n; j =j+2*i)
            {
                prime[j] = false;
            }
        }
    }

    // Print prime numbers less than n
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}
