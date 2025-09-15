#include<stdio.h>
int main(){
int rows = 5;
for(int i=1;i<=5; i++){
    for(int k = 1 ; k <=rows-i; k++){
        printf(" ");
    }
    for(int j = 'A' ; j <= 'A' + 2*i-2 ;j++){
        printf("%c",j);
        }
        printf("\n");

    }

    
    return 0 ; 
}