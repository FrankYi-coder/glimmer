#include<stdio.h>
int main(){
    int x,n,t;
    scanf("%d%d%d",&x,&n,&t);
    int t1=1<<(n-1);
    printf("%d",t?(x|t1):(x&(~t1)));
    return 0;
}