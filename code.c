#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct list_node
{
    int data;
    struct list_node *node;
}

typedef struct list_node list_single;

list_single * 
 
int main( )
{
    int counter = 0;
    int len = 0;
    char str[10000] = {'\0'};
     
    gets(str);
    len = strlen(str);
     
    if(len == 0)
        return 0;
    
    int i = 0;
    for ( ; i< len; i++)
    {
        if( str[i] >= 'A' && str[i] <= 'Z' )
        {
            counter++;
        }
    }
     
    printf("%d", counter);
     
    return 0;
}
