#include <stdio.h>

struct Product {
    int id;
    char name[50];
    char brand[30];
    char size[10];
    int qty;
    float mrp;
    float discount;
    float sellingPrice;
    float amount;
};

int main()
{
    int n, i;
    float subtotal = 0, gst, total;

    printf("==============================================================\n");
    printf("                   RELIANCE TRENDS\n");
    printf("                      TAX INVOICE\n");
    printf("==============================================================\n");

    printf("Enter Number of Products");
    scanf("%d", &n);

    struct Product items[n];

    for(i = 0; i < n; i++)
    {
        printf("--- Enter Details for Product %d ---\n", i + 1);

        printf("Product ID");
        scanf("%d", &items[i].id);

        printf("Product Name"); 
        scanf("%s", items[i].name);

        printf("Brand");
        scanf("%s", items[i].brand);

        printf("Size (S/M/L/XL)");
        scanf("%s", items[i].size);

        printf("Quantity");
        scanf("%d", &items[i].qty);

        printf("MRP");
        scanf("%f", &items[i].mrp);

        printf("Discount (%%)");
        scanf("%f", &items[i].discount);

        items[i].sellingPrice = items[i].mrp - (items[i].mrp * items[i].discount / 100);
        items[i].amount = items[i].sellingPrice * items[i].qty;
        
        subtotal=subtotal+ items[i].amount;
    }

    printf("---------------------------------------------------------------------------------------------\n");
    printf("ID\tProduct\tBrand\tSize\tQty\tMRP\tDisc%%\tPrice\tAmount\n");
    printf("---------------------------------------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\t%s\t%d\t%f\t%f%%\t%f\t%f\n",
               items[i].id, items[i].name, items[i].brand, items[i].size,
               items[i].qty, items[i].mrp, items[i].discount,
               items[i].sellingPrice, items[i].amount);
    }

    gst = subtotal * 0.10;
    total = subtotal + gst;

    printf("==============================================================\n");
    printf("Subtotal          : %f\n", subtotal);
    printf("GST (10%)         : %f\n", gst);
    printf("--------------------------------------------------------------\n");
    printf("Grand Total       : %f\n", total);
    printf("==============================================================\n");

    printf("Store Name        : Reliance Trends\n");
    printf("Invoice No.       : RT2026001\n");
    printf("Payment Mode      : Cash\n");
    printf("Customer Type     : Retail\n");
    printf("==============================================================\n");
    printf("        THANK YOU FOR SHOPPING WITH US!\n");
    printf("==============================================================\n");

    return 0;
}