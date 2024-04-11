/*
AUTHOR : MOUMITA GHOSE
DATE : 11th April 2024

problem link :https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A


*/



#include<stdio.h>
int main()
{
    float x,p,value;
    scanf("%f %f",&x,&p);

    value=(p*100)/(100-x);
    printf("%.2f\n",value);

    return 0;
}
