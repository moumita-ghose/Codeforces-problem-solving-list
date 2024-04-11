/*
AUTHOR : MOUMITA GHOSE
DATE : 11th April 2024

problem link :https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

*/

#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);

    if(c>='a'){
        if(c>='a' && c<'z'){
            printf("%c",c+1);
        }else if(c=='z'){
            printf("a\n");
        }
    }

}
