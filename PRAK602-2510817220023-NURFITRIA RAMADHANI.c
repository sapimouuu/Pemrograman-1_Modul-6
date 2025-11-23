#include <stdio.h>

int main(){
    int batas;
    scanf("%d", &batas);
    int a[batas];
    
    for(int i=0;i<batas;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<batas;i++){
        a[i]=a[i]*(i+1);
    }
    for(int i=0;i<batas;i++){
        printf("%d ",a[i]);
    }
    return 0;
}