#include <stdio.h>
#include <stdlib.h>
 
/* copy input to output; 1st+2nd versions  K&R 16-17pg:30-31epg
 getchar 332pg:350epg
 feof 339pg:357epg
 ferror 339pg:357epg
 exit 351pg:369epg
 putchar 333pg:351epg
 perror 339pg:357epg
 */

int my_getchar();
int my_putchar(int c);

int main( )
{
    int c;   
    
    
    c=my_getchar();
    
    while (c != EOF)
    {
        my_putchar(c);
        c = my_getchar();       
        
    }
 
    return 0;
}



int my_getchar()
{
    int c;
    
    if((c = getchar()) == EOF)
    {
        if(ferror(stdin))
        {
            perror("error indicator is set");
            exit(1);          
        } 
        if(feof(stdin))
        {
            perror("end-of-file indicator is set");
            exit(3);
        }
        perror("getchar returned EOF when error indicator and end-of-file indicator ARE NOT SET");
        exit(2);
    }
    
    return c;
}

int my_putchar(int c)
{
    if(putchar(c) == EOF)
    {
        perror("putchar returned EOF");
        if(ferror(stdout))
        {
            perror("error indicator is set");
            exit(3);          
        } 
        else
        {
            perror("ERROR INDICATOR IS NOT SET");
            exit(4); 
        }        
    }
    return c;
    
}

