#include <stdio.h>
#include <math.h>
int isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return 0; 
    if (n <= 3)  return 1; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return 0; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return 0; 
  
    return 1; 
} 
int main()
{
    int count=0,n;
    printf("\nEnter N");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
            if(isPrime(i)==1)
            {
                printf("%d ",i);
            }
        
    }
    return 0;
}
