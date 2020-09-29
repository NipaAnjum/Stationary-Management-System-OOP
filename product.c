#include"main.h"
void product()
{
    FILE *pro;
    char w[50];
    int x,y;
    float z;
    //int i=0
    pro=fopen("product.txt","r");
    if(pro==NULL) printf("er");
    while(!feof(pro))
    {
        //if(feof(pro)) break;
        fscanf(pro,"%s %d %d %f",w,&x,&y,&z);
        printf("%s\t%d\t%d\t%f\n",w,x,y,z);
    }
    printf("\n");
    fclose(pro);

}
