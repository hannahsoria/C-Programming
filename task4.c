/**
 * task4.c - Exploring how struc is laid out in memory
 *
 * Hannah Soria
 * 2/21/24
 */

#include <stdio.h>
#include <stdlib.h>
        
/* A short description of the function, if necessary
 */ 

struct new_struc{
    char b;
    int a;
    char c;
    //short int b;
};

int main (int arg, char *argv[]) {
					
    unsigned char *ptr;
    struct new_struc s = {'s', 9, 'h'};
    ptr = (unsigned char *)&(s);

    // print out each byte of struc
    printf("each byte of struc s:\n");
    for(int i=0; i<sizeof(s); i++) {
        printf("%d: %02X\n", i, ptr[i]);
    }

    return 0;
}  
    