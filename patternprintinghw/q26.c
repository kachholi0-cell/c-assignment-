#include<stdio.h>
int main(){
    int rows = 5; 
      for(int i = 5; i >=1 ; i-- ){
        for(int j = rows-i ; j >=1 ; j--){
           printf(" ") ;
        }
        for( int k = 2*i-1 ; k >= 1 ; k--){
            printf("*");
        }
        printf("\n");
      }

    
    return 0;
}