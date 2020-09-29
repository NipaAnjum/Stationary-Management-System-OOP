#include"main.h"

void other()
{
    int a;
    printf("Back to menu-PRESS>1\n");
    printf("Exit-PRESS>0\n");
    scanf("%d",&a);
    if(a==1)
    {
        system("cls");
        main();
    }
    else
        exit (0);
}
int main()
{
    printf("***************STATIONARY SHOP***************\n");
    printf("                    GET WHAT YOU NEED!                    \n");
    printf("-----------------------------------------------------------\n");
    printf("-----------------------------------------------------------\n");
    int n;
    printf("PRODUCT LIST?-PRESS>1\n");
    printf("INSERT?-PRESS>2\n");
    printf("DELETE?-RRESS>3\n");
    printf("SEARCH?-PRESS>4\n");
    printf("UPDATE?-PRESS>5\n");
    printf("NAME || CODE || QUANTITY || PRICE \n");
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n==1)
    {
        //printf("enter name,code,quantity,price of the product!\n");
        product();
        other();
    }//insert product
    if(n==2)
    {
        insert_pro();
        other();
    }//update product
    if(n==3)
    {
        delete_pro();
        other();
    }//delete product
    if(n==4)
    {
        search_pro();
        other();
    }//search product
    if(n==5)
    {
        update();
    }
    return 0;
}
