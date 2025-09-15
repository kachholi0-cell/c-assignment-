#include<stdio.h>
int main(){

// int n = 69 ;

//     for(int i = 65; i <= n; i++) {
    
//         for( int j = 65; j <= n - i; j++) {
//             printf(" ");

//         }

//         for( int j = 65  ; j <= i ; j++) {
//             printf("%c",j);
//         }
//         printf("\n");
//     }

    // 
    for(int i = 1 ; i <=4 ; i++){
        for(int j=4 ; j >=1 ; j--){
            if(i>j){printf("*");}
            else{printf(" ");}
        }
        printf("\n");
    }

    return 0;
}


