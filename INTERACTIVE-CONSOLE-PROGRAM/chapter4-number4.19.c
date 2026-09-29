//najjukamargarettracynumber8
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int product,quantity;
    float price,item_total,grand_total;

    while(1){
        printf("\n----------ONLINE RETAILER----------\n");
        printf("Enter product number:\n");
        printf("1.Product 1($2.98)\n");
        printf("2.Product 2($4.50)\n");
        printf("3.Product 3($9.98)\n");
        printf("4.Product 4($4.49)\n");
        printf("5.Product 5($6.87)\n");
        printf("6.Exit(Show total sales)\n");
        printf("Choice made:");
        scanf("%d",&product);

        if(product==6){
            printf("Exiting program.Calculating sales!\n");
            break;
        }
        if(product<1|| product>5){
            printf("Invalid choice please select a valid option");
            continue;
        }
        printf("Enter quantity sold for one day:");
        scanf("%d",&quantity);

        if(quantity<=0){
            printf("input a positive quantity.Transaction cancelled.\n");
            continue;
        }

        switch(product){
        case 1:
        price=2.98;
        printf("product selected:1\n");
        break;
        case 2:
        price=4.50;
        printf("product selected:2\n");
        break;
        case 3:
        price=9.98;
        printf("product selected:3\n");
        break;
        case 4:
        price=4.49;
        printf("product selected:4\n");
        break;
        case 5:
        price=6.87;
        printf("product selected:5\n");
        break;
        }

        item_total=price*quantity;
        grand_total=grand_total+item_total;

        printf("\n----------SALE SUMMARY----------\n");
        printf("Quantity sold:%d\n",quantity);
        printf("price per unit($):%.2f\n",price);
        printf("Item total($):%.2f\n",item_total);
        printf("Running total($):%.2f\n",grand_total);
        printf("-------------------------------\n");
        }

        printf("\n------------TOTAL RETAIL VALUE------\n");
        printf("Total retail value of all products sold($):%.2f\n",grand_total);
        printf("----------------------------\n");


    return 0;
}
