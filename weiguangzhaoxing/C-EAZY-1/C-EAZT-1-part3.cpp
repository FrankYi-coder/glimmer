#include<stdio.h>
double power(double a,double b){
    double ans=1;
    for(int i=0;i<b;i++) ans=ans*a;
    return ans;
}//在a,b均为整数时实现a^b的运算
double score(double a,double b,double c){
    return a+b+c-(power((b+c-2*a)/3,2)+power((a+c-2*b)/3,2)+power((a+b-2*c)/3,2))/3;
}//输入三个平时成绩，输出综合成绩
void result(double a,double b,double c){
    if(a>b){
        if(b>c) printf("小明 > 小强 > 小林");
        else if(a>c) printf("小明 > 小林 > 小强");
        else printf("小林 > 小明 > 小强");
    }
    else{
        if(a>c) printf("小强 > 小明 > 小林");
        else if(b>c) printf("小强 > 小林 > 小明");
        else printf("小林 > 小强 > 小明");
    }
    return;
}//对三人进行排序并输出结果
int main(){
    double x1, x2, x3;
    double y1, y2, y3;
    double z1, z2, z3;
    printf("请输入小明的三项成绩（顺序为A B C,以一个空格为间隔）：");
    scanf("%lf %lf %lf", &x1, &x2, &x3);
    printf("请输入小强的三项成绩（顺序为A B C,以一个空格为间隔）：");
    scanf("%lf %lf %lf", &y1, &y2, &y3);
    printf("请输入小林的三项成绩（顺序为A B C,以一个空格为间隔）：");
    scanf("%lf %lf %lf", &z1, &z2, &z3);
    result(score(x1,x2,x3),score(y1,y2,y3),score(z1,z2,z3));
    return 0;
}