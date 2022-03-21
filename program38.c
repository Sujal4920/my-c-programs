//write own substring function in c 
#include<stdio.h>
#include<string.h>
char* substring(char *destination,const char *source,int beg, int n)
{

    while(n>0)
    {
        *destination=*(source + beg);

        destination++;
        source++;
        n--;
    }
    *destination='\0';
    return destination;
}
int main()
{
    char source[]="Data are simply values or sets of values";
    char destination[25];
    int start=9;
    int len=6;
    substring(destination,source,start,len);
    printf("%s\n",destination);
    return 0;
}