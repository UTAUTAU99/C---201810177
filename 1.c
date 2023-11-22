#include <stdio.h>
#include "ascii_art.h"
int main(void)
{
    int i;
    for (i=0 ; i<9 ; i++){
        printf("%s\n", ascii_main[i]);
    }
    return 0;
}