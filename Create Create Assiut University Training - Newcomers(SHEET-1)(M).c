/*
AUTHOR : MOUMITA GHOSE
PROBLEM LINK : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
DATE : 8th April 2024
*/
#include <stdio.h>
 
int main()
{
   char c;
   scanf("%c",&c);
   if(c>='A' && c<='Z'){
        printf("ALPHA\nIS CAPITAL\n");
   }else if(c>='a' && c<='z'){
        printf("ALPHA\nIS SMALL\n");
   }else if(c>='0' && c<='9'){
        printf("IS DIGIT\n");
   }
 
 
  return 0;
}
