#include<stdio.h>
#include<string.h>
int main(){
    char a[101];
    char b[101];
    scanf("%s%s",&a,&b);
    int al=strlen(a),bl=strlen(b),t=1;
    if(al!=bl){
        printf("0");
        return 0;
    }
    for(int i=0;i<al;i++){
        if(a[i]!=b[i]) t=0;
        if(t) printf("%c",a[i]);
        else printf("0");
    }
    return 0;
}