#include <stdio.h>
#include <stdlib.h>

#define FRUIT_VEGETABLE_GROCERY_DISCOUNT 0.20 // 20% discount

int main() {
    // Declare variables
    char customerName[50];
    char productName[50];
    float price, quantity, totalAmount, discountAmount, subtotal;

    // Get customer name
    printf("Enter customer name: ");
    gets(customerName);

    // Initialize variables
    totalAmount = 0;

    // Process each product
    int productCount;
    printf("Enter the number of products: ");
    scanf("%d", &productCount);

    for (int i = 0; i < productCount; i++) {
        // Get product details
        printf("\nProduct %d:\n", i + 1);
        printf("Enter product name: ");
        gets(productName);
        printf("Enter product price: ");
        scanf("%f", &price);
        printf("Enter product quantity: ");
        scanf("%f", &quantity);

        // Calculate subtotal
        subtotal = price * quantity;

        // Apply discount if applicable
        if (totalAmount >= 1000) {
            discountAmount = subtotal * FRUIT_VEGETABLE_GROCERY_DISCOUNT;
            totalAmount += subtotal - discountAmount;
        } else {
            totalAmount += subtotal;
        }

        // Display product details
        printf("\nProduct: %s\n", productName);
        printf("Price: %.2f\n", price);
        printf("Quantity: %.2f\n", quantity);
        printf("Subtotal: %.2f\n", subtotal);

        if (totalAmount >= 1000) {
            printf("Discount: %.2f\n", discountAmount);
        }
    }

    // Display final bill
    printf("\n\nCustomer Name: %s\n", customerName);
    printf("Total Amount: %.2f\n", totalAmount);

    return 0;
}
