/*
AUTHOR : MOUMITA GHOSE
PROBLEM LINK : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
DATE : 8th April 2024
*/

#include <stdio.h>
 
int main()
{
    char c;
    int upper,lower;
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        upper=c - 32;
        printf("%c",upper);
    }else if(c>='A' && c<='Z'){
        lower= c + 32;
        printf("%c\n",lower);
    }
 
  return 0;
}
