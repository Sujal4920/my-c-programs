#include <stdio.h>
int rev=0;
void revf(int n)
{
    while(n!=0)
    {
       rev=rev*10+n%10;
       n=n/10; 
    }
    printf("Using Non-recurvive the reverse is: %d",rev);
}
int revrec(int n)
{
   if(n==0)
   return(rev);
   if(n==1)
   return (1);
   else
       rev=rev*10+n%10;
       revrec(n/10);
       return (rev);
}
int main()
{
    int n,r,m;
    m=n;
    printf("Enter a number: ");
    scanf("%d",&n);
    revf(n);
    printf("\n");
    r=revrec(m);
    printf("Using recursive the reverse is: %d",r);
    return 0;
}