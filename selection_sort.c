#include"header.h"
void selection_sort(int* a,int n ,FILE *fp_w)
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
   
    fprintf(fp_w,"%d\n",n);  
     printf("Selection Sorted Elements are\n");
    for(int i = 0;i < n; i++)
       {    printf("%d\t",a[i]);  
          fprintf(fp_w,"%d\t",a[i]);  
       }
    fprintf(fp_w,"\n");
	fclose(fp_w);
    printf("\n");
}

