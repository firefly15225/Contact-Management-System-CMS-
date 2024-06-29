#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct  {
    char name[50];
    char number [12];
    char address[50];
    char email[40];
}Contact;

Contact *contacts;
int count = 0;

// display clear
void clear(){
    system("cls");}

//header star
void header(){
    for(int i=0;i<50;i++)
        printf("*");
    }

//title
void top(){
    //header
    header();
    printf("\nCONTACT MANAGEMENT SYSTEM\n");
    header();
    printf("\n\n");
    //end of header
}


//contact adding function
void addContact() {
    contacts = (Contact*)realloc(contacts,(count+1)*sizeof(Contact));
    Contact newContact;
    printf("Name: ");

    scanf(" %[^\n]s", &newContact.name);
    printf("Number: ");
    scanf(" %[^\n]s", &newContact.number);
    printf("Address: ");
    scanf(" %[^\n]s", &newContact.address);
    printf("Email: ");
    scanf(" %[^\n]s", &newContact.email);
    contacts[count++] = newContact;
    printf("Contact added successfully.\n");
}

//contact listing function
void listContacts() {
    if (count == 0) {
        printf("Nothing in the list.\n");
        return;

    }
    printf("Contact List:\n");
        for (int j = 0; j < count; j++) {
            printf("Name: %s\nNumber: %s\nAddress: %s\nEmsil: %s\n\n", contacts[j].name, contacts[j].number, contacts[j].address , contacts[j].email);
        }

}

//contact search function
void searchContact() {
    if (count == 0) {
        printf("No contacts found.\n");
        return;
    }

    char searchName[50];
    char searchNumber[12];

    printf("Enter the name to search: ");
    scanf(" %[^\n]s", &searchName);
    printf("Enter phone number to search: ");
    scanf(" %[^\n]s", &searchNumber);



    int found = 0;

    printf("Search Results:\n");
    for (int p = 0; p < count; p++) {
        if (strcmp(contacts[p].name, searchName) == 0 || strcmp(contacts[p].number, searchNumber) == 0 ) {
            printf("Name: %s\nNumber: %s\nAddress: %s\nEmsil: %s\n\n", contacts[p].name, contacts[p].number, contacts[p].address , contacts[p].email);
            found = 1;
        }
    }

    if (!found) {
        printf("No contacts found with the given name or number.\n");
    }
    return;
}


// Function to delete a contact by number
void deleteContact() {
    if (count == 0) {
        printf("No contacts found.\n");
        return;
    }

    char searchName[50];
    char searchNumber[12];

    printf("Enter the name to search: ");
    scanf(" %[^\n]s", &searchName);

    printf("Enter phone number to search: ");
    scanf(" %[^\n]s", &searchNumber);

    int found = 0;
    for (int m = 0; m < count; m++) {
        if (strcmp(contacts[m].name, searchName) == 0 && strcmp(contacts[m].number, searchNumber) == 0 ) {
            found = 1;
            for (int n = m; n < count - 1; n++) {
                contacts[n] = contacts[n + 1];
            }
            count--;
            printf("Contact deleted successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("No contacts found with the given name and number.\n");
    }
}


int main() {
    int choice=6;


    while (1) {
        top();
        //printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. List Contacts\n");
        printf("3. Delete Contact\n");
        printf("4. Search Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                clear();
                printf("Enter the data\n");
                header();
                printf("\n");
                addContact();
                break;
            case 2:
                clear();
                printf("All contact\n");
                header();
                printf("\n");
                listContacts();
                break;
            case 3:
                clear();
                printf("Delete the contact\n");
                header();
                printf("\n");
                deleteContact();
                break;
            case 4:
                clear();
                printf("search for contact \n");
                header();
                printf("\n");
                searchContact();
                break;

            case 5:
                clear();
                printf("Exiting the program.....\n");
                header();
                printf("\n");
                exit(0);
            default:
                clear();
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}



