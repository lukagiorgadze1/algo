#include <stdio.h>
#include <stdlib.h>

int main( )
{
    wchar_t wide[3];
    wide[0]=129;
    wide[1]=0;
    wide[2]=0;
    
    if(printf("print %ls", wide) < 0)
        perror("Getting printf error\n");
}
