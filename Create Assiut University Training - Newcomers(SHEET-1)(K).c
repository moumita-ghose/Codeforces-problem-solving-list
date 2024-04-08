/*
  AUTHOR : MOUMITA GHOSE
  problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
   DATE : 08/04/2024
*/
#include <stdio.h>
 
int main()
{
   int a[3],i,j;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
 
    //sorting
    int temp=0;
 
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
  printf("%d %d\n",a[0],a[2]);
 
 
  return 0;
}
