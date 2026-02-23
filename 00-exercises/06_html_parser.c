/* 
Write a program parser that takes an html element as input in string format.Parse 
the content/text of the element.Remove the whitespaces from the start and end of the
text content.

Ex : 

Input : 
<h1> this is a heading </h1>

Output : 
this is a heading

*/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

// parser function that parse the content of the html element.
void html_parser(char *str){
    int i = 0 ;
    int start = 0 ; 
    bool is_inside = false ; 
    char prev_char = str[0] ; 
    bool space = false ; 

    // <h1> coding  is  fun  </h1>
    while(str[i] != '\0'){
       if(str[i] == '<'){
          is_inside = true ; 
       }else if(str[i] == '>'){
          is_inside = false ; 
       }else if(!is_inside){
         if(str[i] == ' ' && (prev_char == '>' || prev_char == ' ')){
            prev_char = str[i] ; 
            i++ ; 
            continue ; 
         }else if(str[i] == ' ' && !space){
            space = true ; 
         }else{
            if(str[i] != ' '){
                if(space){
                    str[start] = ' ' ; 
                    start++ ; 
                    space = false ; 
                }
                str[start] = str[i] ; 
                start++ ; 
            }
         }
       }
       prev_char = str[i] ; 
       i++ ; 
    }

    str[start] = '\0' ; 
}

int main()
{
    char str[100] ; 
    printf("Enter the html element in string format : "); 
    fgets(str , sizeof(str) , stdin); 

    str[strcspn(str,"\n")] = '\0' ; 
  
    printf("Input string is : %s\n",str); 
    html_parser(str); 
    printf("Parsed string is : ~~%s~~\n",str); 

    return 0 ; 
}