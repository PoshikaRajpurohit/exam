#include <stdio.h>

struct Laptop {
    char company_name[50];
    char processor[50];
    float price;
};

void inputLaptopDetails(struct Laptop laptops[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for laptop %d:\n", i + 1);
        printf("Company Name: ");
        scanf("%s", laptops[i].company_name);
        printf("Processor: ");
        scanf("%s", laptops[i].processor);
        printf("Price: ");
        scanf("%f", &laptops[i].price);
    }
}

void displayLaptopDetails(struct Laptop laptops[], int n) {
    printf("\nLaptop Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Laptop %d:\n", i + 1);
        printf("Company Name: %s\n", laptops[i].company_name);
        printf("Processor: %s\n", laptops[i].processor);
        printf("Price: %.2f\n", laptops[i].price);
        printf("\n");
    }
}

 main() {
    int n;

    printf("Enter the number of laptops: ");
    scanf("%d", &n);

    struct Laptop laptops[n];

    inputLaptopDetails(laptops, n);

    displayLaptopDetails(laptops, n);

}