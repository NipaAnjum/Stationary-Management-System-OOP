#include "main.h"
void update()
{

   FILE *f,*f1;
    //printf("fdf");
    struct product
    {
        char name[100];
        int code;
        int quantity;
        float price;
    };
    struct product pro[50];
    f=fopen("product.txt","r");
    int j,i,l=0;
    j=0;
    //char more='y';
        char nm[50];
        int cd,qn;
        float pr;
    while(!feof(f))
    {
        fscanf(f,"%s %d %d %f",pro[j].name,&pro[j].code,&pro[j].quantity,&pro[j].price);
      // printf("fg");
        l++;
        j++;
    }
    /*if(f==NULL)
    {
        puts("Nothing available");
    }*/
     // A:
       //int q=0;
      //while(more=='y')
      //{
        printf("product code:\n");
        scanf("%d",&cd);
        printf("\n");
        printf("Enter name,quantity,price:\n");
        scanf("%s %d %f",nm,&qn,&pr);
    for(i=0;i<l;i++)
    {
        if(cd==pro[i].code)
        {
          strcpy(pro[i].name,nm);//pro[j].name=nm;
          pro[i].code=cd;
          pro[i].quantity=qn;
          pro[i].price=pr;
        }
        //printf("tgg");
    }
    fclose(f);
    f1=fopen("product.txt","w");
    for(i=0;i<l;i++)
    {
        fprintf(f1,"%s %d %d %f\n",pro[i].name,pro[i].code,pro[i].quantity,pro[i].price);
        //printf("jsjd");
    }
    //printf("More updates?\n");
    //more=getchar();
    //q++;
     // }
     /*getchar();
     printf("y or n:\n");
    scanf("%c",&more);
    if(more=='y')
        goto A;
     printf("\n");
    fclose(f);*/
    fclose(f1);
}
