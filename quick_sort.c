#include"header.h"
void quick_sort(int a[],int n,FILE* fp_w)
{ 
	q_sort(a,0,n-1);

    fprintf(fp_w,"%d\n",n);  
    printf("Quick Sorted Elements are\n");
    for(int i = 0;i < n; i++)
       {  printf("%d\t",a[i]);
          fprintf(fp_w,"%d\t",a[i]);  
       }
    printf("\n");
    fprintf(fp_w,"\n");
   
}



void q_sort(int a[],int low,int high)
{
	int i,j,p_index,n;
    if(low<high)
   {
	    p_index=low;
	    i=low+1;
        j=high;
	    while(a[i]<p_index)
	    {    
            i++;
        }

        for( ; ; )
        {
            while (a[i]<a[p_index] && i<=high)
            {
                  i++;
            } 
            while(a[j]>a[p_index] && j>=low+1)
            {
                 j--;
            }  
            if(i<j)
            {
                 swap(&a[i],&a[j]);
            }
            else 
                break;
        }
        swap(&a[j],&a[p_index]);
        q_sort(a,low,j-1);
        q_sort(a,j+1,high);


	}

}


