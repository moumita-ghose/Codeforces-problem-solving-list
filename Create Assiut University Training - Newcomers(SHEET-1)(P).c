/*
AUTHOR : MOUMITA GHOSE
PROBLEM LINK : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
DATE : 08/04/2024
*/

#include <stdio.h>
 
int main()
{
    int x,i;
    scanf("%d",&x);
    int rem=0;
    while(x!=0){
        rem=x%10;
        x=x/10;
 
      if(x==0){
        if(rem%2==0){
            printf("EVEN\n");
            break;
        }else{
            printf("ODD\n");
            break;
        }
      }
    }
 
 
  return 0;
}
