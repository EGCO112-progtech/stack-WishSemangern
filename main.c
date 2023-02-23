#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "node.h"
#include "stack.h"
int main(int argc, char **argv){
  
  Stack s;
  s.top = NULL;

  printf("Checking the  parentheses in argv agruments");
  for(int i =1 ; i < argc ; i++){
    pop_all(&s);
    printf("\nargv %d %s", i, isBalance(&s, argv[i]));
  }
 
  

 /*
 Stack s;
 printf("Checking the parentheses in argv arguments\n");
  for(i=1;i<argc;i++){
   
     for(j=0;j<strlen(argv[i]);j++){
       /* Use stack to help with the parentheses*/



   return 0;
}
