#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   char s1;
   char s2[100];
   char s3[100];
   
   scanf("%c", &s1);
   scanf("%s ", s2);
   fgets(s3,100, stdin);
   
   printf("%c\n",s1);
   printf("%s\n",s2);
   printf("%s",s3);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
