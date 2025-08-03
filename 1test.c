#include <stdio.h>
#include <string.h>

typedef struct EnginePart {
    char serialNo[4]; // 3 characters + 1 for null terminator
    int yearOfManufacture; // Year of manufacture
    char material[20]; // Material of the part (string)
    int quantityManufactured; // Quantity manufactured
} EnginePart;

// Function to check if a serial number is within the specified range
int isSerialNoInRange(const char* serialNo) {
    return (strcmp(serialNo, "BB1") >= 0 && strcmp(serialNo, "CC6") <= 0);
}

int main() {
    int n;

    // Input number of parts
    printf("Enter the number of parts: ");
    scanf("%d", &n);
    getchar(); // Consume the newline character left by scanf

    EnginePart parts[n]; // Array of EnginePart structures

    // Input details for each part
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for part %d:\n", i + 1);
        
        printf("Enter serial number (e.g., AA0): ");
        fgets(parts[i].serialNo, sizeof(parts[i].serialNo), stdin);
        parts[i].serialNo[strcspn(parts[i].serialNo, "\n")] = 0; // Remove newline character

        printf("Enter year of manufacture: ");
        scanf("%d", &parts[i].yearOfManufacture);
        getchar(); // Consume the newline character

        printf("Enter material of the part: ");
        fgets(parts[i].material, sizeof(parts[i].material), stdin);
        parts[i].material[strcspn(parts[i].material, "\n")] = 0; // Remove newline character

        printf("Enter quantity manufactured: ");
        scanf("%d", &parts[i].quantityManufactured);
        getchar(); // Consume the newline character
    }

    // Retrieve and display parts with serial numbers between BB1 and CC6
    printf("\nParts with serial numbers between BB1 and CC6:\n");
    for (int i = 0; i < n; i++) {
        if (isSerialNoInRange(parts[i].serialNo)) {
            printf("Serial No: %s\n", parts[i].serialNo);
            printf("Year of Manufacture: %d\n", parts[i].yearOfManufacture);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity Manufactured: %d\n", parts[i].quantityManufactured);
            printf("-----------------------------\n");
        }
    }

    return 0;
}