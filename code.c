#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*---------list---------*/
struct list_node
{
    int data;
    struct list_node *node;
}

typedef struct list_node list_single;

list_single * create_list_node(int len)
{

    list_single * node = NULL;
    node = (list_single *) malloc(sizeof(list_single) * len);
    
    for(int i = 0; i < len; i++)
    {
        memset(node, 0 sizeof(list_single));
    }

    return node;
}	


/*--------bubble sort---------*/
int bubble_sort(int len, int a[])
{

    for(int i = 0; i < len; i++ )
    {
    
        for(int j = 0; j < len - 1 - i; j++)
	{
	
            if(a[j] > a[j+1])
            {
	    
	        int tmp = a[j];
		a[j] = a[j+1];
		a[j+1] = tmp;
	    }
	}
    }
}

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
