#include <stdio.h>
int main(){
    int a = 1;
    int nsp = 3;
    for(int i=1;i<=3;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ", a);
            a++;
        }
        printf("\n");
        nsp--;
    }
    return 0;
}