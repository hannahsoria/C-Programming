/**
 * Task1.c - Memory exploration of C
 *
 * Hannah Soria
 * 2/21/24 
 */

#include <stdio.h>
#include <stdlib.h>
        
/* Storing different data types in memory to better understand how it works in C.
 */ 
int main (int arg, char *argv[]) {
					
    // declare a variable of all types	
    char c = 'h';
    short int s = 100;
    int i = 8;
    long int l = 10000;
    float f = 0.8;
    double d = 8.888;

    // caste to unsigned characters
    unsigned char * ptrc;
    unsigned char * ptrs;
    unsigned char * ptri;
    unsigned char * ptrl;
    unsigned char * ptrf;
    unsigned char * ptrd;

    //reassign the unsigned characters
    ptrc = (unsigned char *)&(c);
    ptrs = (unsigned char *)&(s);
    ptri = (unsigned char *)&(i);
    ptrl = (unsigned char *)&(l);
    ptrf = (unsigned char *)&(f);
    ptrd = (unsigned char *)&(d);

    // print out each byte of char
    printf("each byte of char c:\n");
    for(i=0; i<sizeof(char); i++) {
        printf("%d: %02X\n", i, ptrc[i]);
    }

    // print out each byte of short
    printf("each byte of short s:\n");
    for(i=0; i<sizeof(short int); i++) {
        printf("%d: %02X\n", i, ptrs[i]);
    }

    // print out each byte of int
    printf("each byte of int i:\n");
    for(i=0; i<sizeof(int); i++) {
        printf("%d: %02X\n", i, ptri[i]);
    }

    // print out each byte of long
    printf("each byte of long l:\n");
    for(i=0; i<sizeof(long int); i++) {
        printf("%d: %02X\n", i, ptrl[i]);
    }

    // print out each byte of float
    printf("each byte of float f:\n");
    for(i=0; i<sizeof(float); i++) {
        printf("%d: %02X\n", i, ptrf[i]);
    }

    // print out each byte of int
    printf("each byte of double d:\n");
    for(i=0; i<sizeof(double); i++) {
        printf("%d: %02X\n", i, ptrd[i]);
    }
                    
    return 0;
}  
    