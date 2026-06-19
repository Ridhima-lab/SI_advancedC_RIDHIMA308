#include <stdio.h>

int main()
{
    int n, i, qty;
    int productID;
    char product[50], brand[30], size[10];
    float mrp, discount, sellingPrice;
    float amount, subtotal = 0, gst, total;

    printf("==============================================================\n");
    printf("                   RELIANCE TRENDS\n");
    printf("                      TAX INVOICE\n");
    printf("==============================================================\n");

    printf("Enter Number of Products\n");
    scanf("%d", &n);

    printf("---------------------------------------------------------------------------------------------\n");
    printf("ID\tProduct\tBrand\tSize\tQty\tMRP\tDisc%%\tPrice\tAmount\n");
    printf("---------------------------------------------------------------------------------------------\n");

    for(i = 1; i <= n; i++)
    {
        printf("Product %d Details\n", i);

        printf("Product ID ");
        scanf("%d", &productID);

        printf("Product Name ");
        scanf("%s", product);

        printf("Brand ");
        scanf("%s", brand);

        printf("Size (S/M/L/XL) ");
        scanf("%s", size);

        printf("Quantity");
        scanf("%d", &qty);

        printf("MRP ");
        scanf("%f", &mrp);

        printf("Discount (%%) ");
        scanf("%f", &discount);

        sellingPrice = mrp - (mrp * discount / 100);
        amount = sellingPrice * qty;
        subtotal=subtotal + amount;

        printf("\n%d\t%s\t%s\t%s\t%d\t%.2f\t%.0f\t%.2f\t%.2f",
               productID, product, brand, size,
               qty, mrp, discount,
               sellingPrice, amount);
    }

    gst = subtotal * 0.18;
    total = subtotal + gst;

    printf("==============================================================\n");
    printf("Subtotal          : %f\n", subtotal);
    printf("GST (18%%)         : %f\n", gst);
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