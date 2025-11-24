#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if(a!=b){
        printf("Jumlah tidak sama");
        return 0;
    }
    int x[a], y[b];
    for(int i=0;i<a;i++){
        scanf("%d",&x[i]);
    }
    for(int i=0;i<b;i++){
        scanf("%d",&y[i]);
    }
    for(int i=0;i<a;i++){
        printf("%d ",x[i]*y[i]);
    }
    return 0;
}