#include"header.h"
void selection_sort(int* a,int n,int* dummy)
{
    int i,j,min;
    for(i = 0;i < n-1;i++)
    {  
        
        min=i;
		for(j=i+1;j < n;j++)
		{	
			if(a[min] > a[j])
				min = j;
		}
        swap(&a[min],&a[i]);
    }
     printf("Selection Sorted Elements are\n");
    for(int i = 0;i < n; i++)
       {    dummy[i] = a[i];
          printf("%d\t",a[i]);  
       }
    printf("\n");
}

