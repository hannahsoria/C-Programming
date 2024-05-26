/**
 * task3.c - Repeatedly allocate memory in a loop
 *
 * Hannah Soria
 * 2/21/24
 */

#include <stdio.h>
#include <stdlib.h>
        
/* This function allocates the frees memory in an unending loop
 */ 
int main (int arg, char *argv[]) {

    int * ptr;
    // keep allocating memory 
    while(1){
        ptr = (int *)malloc(sizeof(int));
        // free deallocates the memory
        free(ptr);

  }
					
  return 0;
}  
   