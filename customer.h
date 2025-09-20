#ifndef CUSTOMER_H
#define CUSTOMER_H

#define MAX_CUSTOMERS 100

typedef struct {
    int id;
    char name[50];
    int roomNumber;
    int days;
} Customer;

extern Customer customers[MAX_CUSTOMERS];
extern int customerCount;

void addCustomer();
void viewCustomers();
void searchCustomer();
void editCustomer();
void deleteCustomer();

#endif
