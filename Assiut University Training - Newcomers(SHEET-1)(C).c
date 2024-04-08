/*
AUTHOR : MOUMITA GHOSE
problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
  */

#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int sum=a+b;
    long long int subs=a-b;
    long long int mul=a*b;
    printf("%lld + %lld = %lld\n",a,b,sum);
    printf("%lld * %lld = %lld\n",a,b,mul);
    printf("%lld - %lld = %lld\n",a,b,subs);
 
    return 0;
}
