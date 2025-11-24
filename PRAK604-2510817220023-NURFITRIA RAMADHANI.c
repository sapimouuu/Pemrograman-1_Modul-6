#include <stdio.h>

int main() {
    char a[200], b[200];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    if(strlen(a) != strlen(b)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    int len = strlen(a);
    int star = 0, pagar = 0;

    for(int i = 0; i < len; i++) {
        if(a[i] == ' ' && b[i] == ' '){
            printf(" ");
            continue;
        }if(a[i] == b[i]){
            printf("*");
            star++;
        }else{
            printf("#");
            pagar++;
        }
    }
    printf("\n* = %d\n", star);
    printf("# = %d\n", pagar);

    if(star >= pagar){
        printf("Pesan Asli");
    }else{
        printf("Pesan Palsu");
    }
    return 0;
}