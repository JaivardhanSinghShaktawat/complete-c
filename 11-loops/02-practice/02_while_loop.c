// Print from 1 to n. 

#include<stdio.h>

void print_till_n(int n){
    int i = 1 ;
    while(i <= n){
        printf("%d ",i);
        i++ ; 
    }
    puts("\n");
}

int main(){
    int n ; 
    printf("Enter a number : ");
    scanf("%d",&n); 
 
    print_till_n(n);

    return 0 ; 
}