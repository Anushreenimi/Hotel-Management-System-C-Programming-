#include <stdio.h>
#include <stdlib.h>
#include "customer.h"

int main() {
    int choice;

    while (1) {
        printf("\n===== HOTEL MANAGEMENT SYSTEM =====\n");
        printf("1. Add New Customer\n");
        printf("2. View All Customers\n");
        printf("3. Search Customer\n");
        printf("4. Edit Customer\n");
        printf("5. Delete Customer\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addCustomer(); break;
            case 2: viewCustomers(); break;
            case 3: searchCustomer(); break;
            case 4: editCustomer(); break;
            case 5: deleteCustomer(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}
