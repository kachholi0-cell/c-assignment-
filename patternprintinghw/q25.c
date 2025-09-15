#include<stdio.h>
int main(){
for(int i = 0 ; i < 5 ; i++ ){
    for(int j = 'A' ; j <= 'A'+i ; j++){
        printf("%c",j );
    }
    for(int k = 'A' + i-1 ; k >= 'A'  ; k--){
        printf("%c",k);
    }
    
    printf("\n") ;
}

    return 0;
}