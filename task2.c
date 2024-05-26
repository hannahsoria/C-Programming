/**
 * task2.c - Understanding a stack in C memory
 *
 * Hannah Soria
 * 2/21/24
 */

#include <stdio.h>
#include <stdlib.h>
        
/* Creating several variables and an unsigned char. Then print 100 accesses to memory using unsigned char *
 */ 
int main (int arg, char *argv[]) {
					
    // declare variables
    char a = 0X10;
    char b = 0X20;
    int c = 0X00000001;

    // declare unsigned char
    unsigned char *ptr_c;
    ptr_c = (unsigned char *)&(ptr_c);

    // print 100 bytes of unsiged char
    printf("the first 100 bytes of unsigned char:\n");
    for(int i=0; i<100; i++){
        printf("%d: %02X\n", i, ptr_c[i]);
    }
					
  return 0;
}  