#include"header.h"
char* compare()
//void main(void)
{
    int r,w,n=10,ret = 0,ret1 = 0;
    FILE *fp_r = NULL,*fp_w = NULL;
    fp_r = fopen("./expected.txt","r");
    fp_w = fopen("./output.txt","r");

    if(fp_w == NULL || fp_r == NULL)
    {
        printf("NULL pointer");
        return NULL;
    }

//	fseek(fp_w,0,SEEK_SET);
    while(1)
    {
        fscanf(fp_w,"%d",&w);
        fscanf(fp_r,"%d",&r);
		ret = feof(fp_r);
		ret1 = feof(fp_w);

		if(ret || ret1)
			break;	 
		printf("%d %d\n",w,r);
        if(r!=w)
		{
          printf("false-1\n");
          return "false";
		}
//		n--;
    } 
		if(ret){
			printf("Ret = %d\n",ret);
		}
		if(ret1){
			printf("Ret2 = %d\n",ret1);
		}
		if(ret1 && ret){
        	printf("true\n");
    		return "true";
		}
		else
          printf("false\n");
			return "false";
}
