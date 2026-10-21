#include <stdio.h>
int backtrack(int n, int row, int col, int ld, int rd){
    int cnt = 0;
    if (row == n) return 1;
    int full = (1 << n) - 1;
    int pos = (~(col | ld | rd)) & full;
    while (pos != 0){
        int p = pos & -pos;
        pos -= p;
        cnt += backtrack(n, row + 1, col | p, (ld | p) << 1, (rd | p) >> 1);
    }
    return cnt;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d",backtrack(n,0,0,0,0));
    return 0;
}