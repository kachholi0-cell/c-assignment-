#include<stdio.h>
int main(){
      for(int i = 0 ; i<5; i++ ){
        for(int j=0 ; j<i ; j++){
            printf(" ");
        }
        for(int k = 'A' ; k<= 'A' + 5-i ; k++){
            printf("%c",k);
        }
        printf("\n");
      }           
    return 0 ;
}