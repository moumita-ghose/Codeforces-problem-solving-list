/*
AUTHOR : MOUMITA GHOSE
PROBLEM LINK : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
DATE : 8th April 2024
*/
#include <stdio.h>
#include<string.h>
#include<stdbool.h>
 
int main()
{
    char s1[101000],s2[100000],s3[110000],s4[10000];
    scanf("%s %s",s1,s2);
    scanf("%s %s",s3,s4);
    bool x=strcmp(s2,s4);
 
    if(x==0){
        printf("ARE Brothers\n");
    }else{
        printf("NOT\n");
    }
    return 0;
}
