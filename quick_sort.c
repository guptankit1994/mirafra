#include<stdio.h>
#include<stdlib.h>

void quick_sort(int* ,int );
void q_sort(int*,int ,int);
void swap(int*x ,int*y);

int main(void)
{   
    int n;
    printf("Enter number of elements of an  array\n");
    scanf("%d",&n);
    int* a;
    a = (int*)malloc(sizeof(int)*n);
    printf("Enter elements of an  array\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quick_sort(a,n);
    printf("Sorted Elements are\n");
    for(int i = 0;i < n; i++)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}



void quick_sort(int a[],int n)
{ 
	q_sort(a,0,n-1);
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


void swap(int*a ,int*b)
{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
}
