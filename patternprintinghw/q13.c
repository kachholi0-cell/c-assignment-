// #include<stdio.h>
// int main(){
// for (int i = 1 ; i <= 5 ; i++){
//     for(int j = 1 ; j <= 2*i-i ; j++){
//         printf(" ");
        
//     }for(int k = 1 ; k <=)
//     printf("\n");
// }


//     return 0;
// }
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
    return 0;
}
