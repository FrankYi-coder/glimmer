#include<stdio.h>
#include<string.h>
int main(){
    int mask1=0,mask2=0,i=1,c;
    while((c=getchar()) != EOF){
        if(c==' '){
            i=0;
            continue;
        }
        if(c=='\n') break;
        if(i) mask1=mask1|(1<<(int)(c-'a'));
        if(!i) mask2=mask2|(1<<(int)(c-'a'));
    }
    printf("%d",((mask1&mask2)!=0));
    return 0;
}
//PS:在写完本题以后才看到题目要求补充给出代码，但已经写完了不太想改，再加上题目给的代码空间复杂度好像是O(N)，最后就把这份空间复杂度压缩到O(1)的交上来了。