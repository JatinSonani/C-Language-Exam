#include <stdio.h>

struct Employee {
    char name[100];
    char role[100];
};

int main() {
    int numEmployees = 3;
    struct Employee employees[numEmployees];

   
    for (int i = 0; i < numEmployees; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name); 
        printf("Role (Designation): ");
        scanf(" %[^\n]", employees[i].role);
    }

    
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    
    for (int i = 0; i < numEmployees; ++i) {
        fprintf(file, "Employee %d:\n", i + 1);
        fprintf(file, "Name: %s\n", employees[i].name);
        fprintf(file, "Role (Designation): %s\n\n", employees[i].role);
    }

    
    fclose(file);
    printf("Employee details written to data.txt successfully!\n");

    
}
