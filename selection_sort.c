#include<stdio.h>
#include<stdlib.h>

void selection_sort(int* a,int n);
void swap(int *a,int* b);

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
    selection_sort(a,n);
    return 0;
}



void selection_sort(int* a,int n)
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
    printf("Sorted Elements are\n");
    for(int i = 0;i < n; i++)
    printf("%d\t",a[i]);
    printf("\n");
}


void swap(int *a,int* b)
{ 
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
