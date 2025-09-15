#include<stdio.h>
int main(){
    int rows = 5 ; 
    for(int i = 5 ; i>=0 ; i-- ){
        for(int j = rows-i ; j >=1 ; j--){
            printf(" ");
        }
        for(int k = 'A' ; k <= 'A'+i ; k++ ){
            printf("%c",k);
        }
        for(int m = 'A'+i-1 ; m >= 'A' ; m--){
            printf("%c",m);
        }
        printf("\n");
    }
    return 0;
}