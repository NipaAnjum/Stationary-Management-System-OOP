#include"main.h"
void delete_pro()
{
    FILE *f,*f1;
    struct product
    {
        char name[100];
        int code;
        int quantity;
        float price;
    };
    struct product pro[100];
    f=fopen("product.txt","r");
    int code,i,j,l=0,k;
    j=0;
    while(!feof(f))
    {
        fscanf(f,"%s %d %d %f",pro[j].name,&pro[j].code,&pro[j].quantity,&pro[j].price);
       // printf("%s %d %d %f\n",pro[j].name,pro[j].code,pro[j].quantity,pro[j].price);
        l++;
        j++;
    }
    printf("Enter any code: ");
    scanf("%d",&code);
    for(i=0;i<l;i++)
    {
        if(code==pro[i].code)
           k=i;
    }
    for(i=k;i<l-1;i++)
    {
        pro[i]=pro[i+1];
    }
    fclose(f);
    f1=fopen("product.txt","w");
    for(i=0;i<l-2;i++)
    {
        fprintf(f1,"%s %d %d %f\n",pro[i].name,pro[i].code,pro[i].quantity,pro[i].price);
        printf("%s %d %d %f\n",pro[i].name,pro[i].code,pro[i].quantity,pro[i].price);
    }
    fprintf(f1,"%s %d %d %f",pro[i].name,pro[i].code,pro[i].quantity,pro[i].price);
    fclose(f1);
}
