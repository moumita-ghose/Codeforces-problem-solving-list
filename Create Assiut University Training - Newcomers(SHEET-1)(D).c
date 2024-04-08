/*
AUTHOR : MOUMITA GHOSE
PROBLEM LINK :https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D
*/
#include <stdio.h>
int main()
{
   long long int a,b,c,d,mul1,mul2,subs;
   scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
   mul1=a*b;
   mul2=c*d;
   subs=mul1-mul2;
   printf("Difference = %lld\n",subs);
    return 0;
}
