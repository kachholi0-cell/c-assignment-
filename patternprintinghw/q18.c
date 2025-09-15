#include<stdio.h>
int main(){
    for(int i = 0 ; i <=4 ; i++){
        for(int j = 'A' ; j <= 'A'+4-i; j++){
            printf(" %c",j);
        }
        printf("\n");
    }
    return 0;
}