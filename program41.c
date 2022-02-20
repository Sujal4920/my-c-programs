#include <stdio.h>
#include<string.h>
int main()
{
    char str[30][30],temp[30];
    int n,i,j;
    printf("Enter how many string you want to enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d string: ",i);
        scanf("%s",str[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }  
    printf("After sorting the strings:\n");
    for(i=0;i<n;i++)
    {
        printf("Now the %d string  is:%s\n",i,str[i]);
    } 

    return 0;
}