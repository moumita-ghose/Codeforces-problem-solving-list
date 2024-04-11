
/*
AUTHOR : MOUMITA GHOSE
DATE : 11th April 2024

problem link :https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B


*/

#include<stdio.h>
int main()
{
    int memo,momo,k;
    scanf("%d %d %d",&memo,&momo,&k);
    if(memo%k==0 && momo%k!=0){
        printf("Memo\n");
    }else if(momo%k==0 && memo %k!=0){
        printf("Momo\n");
    }else if(momo%k==0 && memo %k==0){
        printf("Both\n");
    }else if(momo%k!=0 && memo%k!=0){
        printf("No One\n");
    }
    return 0;
}
