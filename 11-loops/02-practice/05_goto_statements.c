#include<stdio.h>

int main()
{

    label:
      printf("we are inside label\n");
      goto end ;

    printf("hello world\n");

    end:
      printf("we are at the end\n");

    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            if(i == 5){
              printf("The value of i is 5 and we are breaking from all loops\n");
              goto end ; // breaking all loops using a single statement.
            }
        }
    }

    end:
      printf("All loops are exited\n");
    return 0 ;
}