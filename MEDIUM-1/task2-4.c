#include<stdio.h>
int main(){
    int x,ans=1;
    scanf("%d",&x);
    while(ans){
        if(x&1){
            printf("%d",ans);
            break;
        }
        ans++;
        x=x>>1;
    }
    return 0;
}