#include"main.h"
void insert_pro()
{
    struct product
    {
        char name[100];
        int code;
        int quantity;
        float price;
    };
struct product pro[10],z,*p;
p=(struct product *)malloc(sizeof(z));
    FILE *fp;
    char another;
    char a[100];
    int b,c;
    float d;
    int i = 0;
     fp=fopen("product.txt","a+");
    if(fp==NULL)
    {
        puts("cannot open the file");
    }
   // while(another=='y')
  A:
 //{

            printf("Enter product details\n");//printf("NAME || CODE || QUANTITY || PRICE\n");
            scanf("%s %d %d %f",p->name,&p->code,&p->quantity,&p->price);
            strcpy(a,p->name);
            b=p->code;
            c=p->quantity;
            d=p->price;
            printf("%s %d %d %f\n",a,b,c,d);
            fprintf(fp,"\n%s %d %d %f",p->name,p->code,p->quantity,p->price);
            //fprintf(fp,"\n");
            //fputs("ABC", fp);
        printf("ANOTHER PRODUCT?PRESS-y!\nENOUGH?PRESS-n!\n");
        //fflush(stdin);
        //another=getch();
        getchar();
        printf("YES OR NO?\n");
        scanf("%c",&another);
        //i++;
 //}
       if(another=='y')
        goto A;
        printf("\n");
    fclose(fp);
}
