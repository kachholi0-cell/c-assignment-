#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5; 

    for(i = 1; i <= rows; i++) {
        
        for(space = i; space < rows; space++) {
            printf(" ");
        }
    
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }


      for(int i = 4; i >=1 ; i-- ){
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
