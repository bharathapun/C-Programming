#include <stdio.h>
#include<string.h>
int main()
{
   char s[100];
   int l,count=0,c,i;
   scanf("%s",s);
   l=strlen(s);
   
   for(i=0;i<l;i++)
   {
       if(s[i]>='0' && s[i]<='9')
       {
       count++;
       printf("%d",count);
       }
       else
       printf("%d",count);
   }

    return 0;
}


