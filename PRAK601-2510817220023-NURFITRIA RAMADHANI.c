#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int batas = a*b;
    char c[batas][5];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf(" %s",&c[i*b + j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%s ",c[i*b + j]);
        }
        printf("\n");
    }
    return 0;
}