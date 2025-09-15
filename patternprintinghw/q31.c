#include<stdio.h>
int main(){
    // int row[5]={1,2,3,4,5};

    // for(int i =1 ; i <= 5; i++){
    //     if(row[i] == row[1] && row[5] ){
    //         printf("*");
    //     }
    //    // for(int j = 1 ; j <= 5 ; j++){
    //         // if(j,i == 1){
    //         // printf("*");}
    //         printf("*");
        
    //     if(i==1){
    //         printf("*");
    //     }else{printf(" ");}

    //     printf("\n") ;
    // }
    
    int n = 5;  // you can change n or take input from user

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
        
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    
    return 0;
}