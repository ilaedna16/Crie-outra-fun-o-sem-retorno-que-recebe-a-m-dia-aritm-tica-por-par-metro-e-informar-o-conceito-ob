#include <stdio.h>

int media; 
  
int main()
{
    printf ("informe a media desejada"); 
    scanf ("%d", &media); 
    
    
    if (media >= 9) { 
        
        printf ("A");  } 
        
        else if (media >= 7 || media  < 9 ) {
        
    printf ("B"); } 
     
     else if (media >= 6 || media < 7) {
         
     printf("C"); } 
     
     else if (media >= 4 || media < 6){ 
         
     printf ("D"); } 
     
     else if (media < 4) { 
         
    printf ("E"); } 
     
     printf  ("conceito obtido pelo aluno eh %d\n", media); 

    return 0;
}
