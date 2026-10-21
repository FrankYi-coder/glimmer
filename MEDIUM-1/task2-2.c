#include<stdio.h>
int main(){
    int x,n;
    scanf("%d%d",&x,&n);
    printf("%d\n",(x&(1<<(n-1)))>>(n-1));
    return 0;
}