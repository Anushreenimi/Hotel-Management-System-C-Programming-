#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "customer.h"

// Global variables
Customer customers[MAX_CUSTOMERS];
int customerCount = 0;

// Function to add a new customer
void addCustomer() {
    if (customerCount >= MAX_CUSTOMERS) {
        printf("Cannot add more customers.\n");
        return;
    }

    Customer c;
    c.id = customerCount + 1;
    printf("Enter customer name: ");
    scanf(" %[^\n]", c.name);
    printf("Enter room number: ");
    scanf("%d", &c.roomNumber);
    printf("Enter number of days: ");
    scanf("%d", &c.days);

    customers[customerCount] = c;
    customerCount++;
    printf("Customer added successfully!\n");
}

// Function to view all customers
void viewCustomers() {
    int i;
    if (customerCount == 0) {
        printf("No customers found.\n");
        return;
    }

    printf("\n===== CUSTOMER LIST =====\n");
    for (i = 0; i < customerCount; i++) {
        printf("ID: %d | Name: %s | Room: %d | Days: %d\n",
               customers[i].id, customers[i].name,
               customers[i].roomNumber, customers[i].days);
    }
}

// Function to search for a customer by ID
void searchCustomer() {
    int id, i;
    printf("Enter customer ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < customerCount; i++) {
        if (customers[i].id == id) {
            printf("ID: %d | Name: %s | Room: %d | Days: %d\n",
                   customers[i].id, customers[i].name,
                   customers[i].roomNumber, customers[i].days);
            return;
        }
    }
    printf("Customer not found.\n");
}

// Function to edit a customer
void editCustomer() {
    int id, i;
    printf("Enter customer ID to edit: ");
    scanf("%d", &id);

    for (i = 0; i < customerCount; i++) {
        if (customers[i].id == id) {
            printf("Enter new name: ");
            scanf(" %[^\n]", customers[i].name);
            printf("Enter new room number: ");
            scanf("%d", &customers[i].roomNumber);
            printf("Enter new number of days: ");
            scanf("%d", &customers[i].days);
            printf("Customer updated successfully!\n");
            return;
        }
    }
    printf("Customer not found.\n");
}

// Function to delete a customer
void deleteCustomer() {
    int id, i, j;
    printf("Enter customer ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < customerCount; i++) {
        if (customers[i].id == id) {
            for (j = i; j < customerCount - 1; j++) {
                customers[j] = customers[j + 1];
            }
            customerCount--;
            printf("Customer deleted successfully!\n");
            return;
        }
    }
    printf("Customer not found.\n");
}
