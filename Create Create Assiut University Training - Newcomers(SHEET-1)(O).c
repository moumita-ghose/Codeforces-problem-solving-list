/*
AUTHOR : MOUMITA GHOSE
PROBLEM LINK : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
DATE : 8th April 2024
*/

#include <stdio.h>
int main()
{
    int a,b,sum,subs,div,mul;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    if(c=='+'){
        sum=a+b;
        printf("%d\n",sum);
    }else if(c=='-'){
        subs=a-b;
        printf("%d\n",subs);
    }else if(c=='*'){
        mul=a*b;
        printf("%d\n",mul);
    }else if(c=='/'){
        div=a/b;
        printf("%d\n",div);
    }
 
    return 0;
}
