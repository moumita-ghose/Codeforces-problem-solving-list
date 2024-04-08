/*
AUTHOR : MOUMITA GHOSE
problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
DATE : 08/04/2024

*/

// CODE STRATS FROM HERE :______________>>>>

#include <stdio.h>
int main()
{
    long long int a,b,last_a,last_b,sum;
    scanf("%lld %lld",&a,&b);
    last_a=a%10;
    last_b=b%10;
    sum=last_b+last_a;
    printf("%lld\n",sum);
    return 0;
}
