#include<stdio.h>

int sum(int a , int b); // declaring function
void print_star(int); 

// without argument and with return type 
int take_number(){
    int i ; 
    printf("Enter a number : "); 
    scanf("%d",&i);
    return i ; 
}

// without argument and without return type.
void print_hello_world(){
    printf("Hello World\n");
}

int main()
{
    int a , b ; 

    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("\nEnter the value of b : ");
    scanf("%d",&b);

    int c = sum(a,b);

    printf("\nThe sum of %d and %d is %d\n",a,b,c);

    print_star(10);

    int new_num = take_number();
    printf("%d\n",new_num);

    print_hello_world();

    return 0 ; 
}

// with argument and with return type.
int sum(int a , int b){
    return a + b ; 
}

// with argument and without return type.
void print_star(int n){
    for(int i = 1 ; i <= n ; i++){
        printf("%c",'*');
    }
    printf("\n");
}