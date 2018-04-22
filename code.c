#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*---------list---------*/
struct list_node
{
    int data;
    struct list_node *node;
};

typedef struct list_node list_single;

list_single * create_list_node(int len)
{

    list_single * node = NULL;
    node = (list_single *) malloc(sizeof(list_single) * len);
    
    for(int i = 0; i < len; i++)
    {
        memset(node, 0, sizeof(list_single));
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

/* test of bubble sort

int main( )
{

    int len = 10;
    int a[10] = {2, 6, 9, 1, 8, 11, 88, 66, 75, 10};
    printf("Initialized array is: ");
    for(int i = 0; i < len; i++ )
    {

        printf("%d,", a[i]);
    }

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

    printf("\nBubble sort array is: ");
    for(int i = 0; i < len; i++ )
    {

        printf("%d,", a[i]);
    }
     
    return 0;
}
*/

int main( )
{

    /* test of bubble sort */
    int len = 10;
    int a[10] = {2, 6, 9, 1, 8, 11, 88, 66, 75, 10};
    printf("Initialized array is: ");
    for(int i = 0; i < len; i++ )
    {

        printf("%d,", a[i]);
    }

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

    printf("\nBubble sort array is: ");
    for(int i = 0; i < len; i++ )
    {

        printf("%d,", a[i]);
    }
     
    return 0;
}

/* nowcoder stander input

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


    //print("\n", );
    return 0;
}




*/
