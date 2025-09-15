#include<stdio.h>
int main(){
    int rows = 5 ; 
    for(int i = 5 ; i>=1 ; i-- ){
        for(int j = rows-i ; j >=1 ; j--){
            printf(" ");
        }
        for(int k = 1 ; k <= i ; k++ ){
            printf("%d",k);
        }
        for(int m = i-1 ; m >=1 ; m--){
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}