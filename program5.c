#include<stdio.h> 
 int main()
 {
     int a,h,i,j,k,l,add;
     printf("Enter a 5 digit number: ");
     scanf("%d",&a);
       h=((a/10000)+1)%10;
       i=(((a/1000)%10)+1)%10;   
       j=(((a/100)%10)+1)%10;
       k=(((a/10)%10)+1)%10;
       l=((a%10)+1)%10;
       add=(h*10000+i*1000+j*100+k*10+l);
       printf("The number after adding 1 to each digits are: %d",add);
     return 0;
 }
 