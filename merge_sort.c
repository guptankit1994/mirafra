#include"header.h"
void merge (int a[],int temp[],int lpos,int rpos,int rend)
{
	int i,lend,num,tempos;
	lend=rpos-1;
	tempos=lpos;
	num=rend-lpos+1;
	while((lpos<=lend)&&(rpos<=rend))
	{
	if(a[lpos]<=a[rpos])
		temp[tempos++]=a[lpos++];
	else
		temp[tempos++]=a[rpos++];
	}
	while(lpos<=lend)
		temp[tempos++]=a[lpos++];
	while(rpos<=rend)
		temp[tempos++]=a[rpos++];
	
	for(i=0;i<num;i++)
	{
		a[rend]=temp[rend];
		rend--;
	}
}
void m_sort(int a[],int temp[],int left,int right)
{
	int center;
    if(left<right)
	{
		 center=(left+right)/2;	
		m_sort(a,temp,left,center);
		m_sort(a,temp,center+1,right);
		merge(a,temp,left,center+1,right);
	}
}
void merge_sort(int a[],int n,int* dummy)
{
	int *temp;
	temp=(int*)malloc(n*sizeof(int));
	m_sort(a,temp,0,n-1);
	 
     printf("merge Sorted Elements are\n");
    for(int i = 0;i < n; i++)
       {    dummy[i] = a[i];
          printf("%d\t",a[i]);  
       }
    printf("\n");
}


