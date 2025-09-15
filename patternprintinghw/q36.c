#include<stdio.h>
    int main(){
    for(int i = 1 ; i<= 5 ; i++){
for(int j = 1 ; j <=i ; j++){
    printf(" ") ;
}
for(int k = 'A' ; k <'A'+i; k++){
    printf("%c",k);
}
    printf("\n") ;

}
    return 0 ; 
}