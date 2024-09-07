#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

 main() {
    FILE *file;
    int n;
    char fruit[MAX_LENGTH];
    char color[MAX_LENGTH];

    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the number of fruits: ");
    scanf("%d", &n);
    getchar(); 

   
    for (int i = 0; i < n; i++) {
        printf("Enter fruit %d name: ", i + 1);
        fgets(fruit, MAX_LENGTH, stdin);
        fruit[strcspn(fruit, "\n")] = '\0';

        printf("Enter fruit %d color: ", i + 1);
        fgets(color, MAX_LENGTH, stdin);
        color[strcspn(color, "\n")] = '\0';

        fprintf(file, "Fruit: %s, Color: %s\n", fruit, color);
    }

    fclose(file);

    printf("Data has been written to data.txt successfully.\n");

}