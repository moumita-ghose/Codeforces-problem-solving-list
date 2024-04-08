/* 
   AUTHOR : MOUMITA GHOSE
   problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
   DATE : 08 / 04 /2024
*/
// CODE IS WRITTEN HERE :
#include <stdio.h>
#include<math.h>
 
int main()
{
    int a,b,f,c,r;
    float div;
    scanf("%d %d",&a,&b);
    div=(float)a/b;
    f=floor(div);
    c=ceil(div);
    r=round(div);
    printf("floor %d / %d = %d\nceil %d / %d = %d\nround %d / %d = %d\n",a,b,f,a,b,c,a,b,r);
    return 0;
}
