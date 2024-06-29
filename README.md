<h1 align="center">Contact Management System (CMS)</h1>

A simple, command-line based contact management system implemented using an array-based structure. This system allows users to manage contact information such as names, phone numbers, addresses, and email addresses.

---

## Features

- **Add New Contacts**: Easily add new contacts with essential details.
- **List All Contacts**: Display all the contacts stored in the system.
- **Search Contacts**: Search for contacts by name or phone number.
- **Delete Contacts**: Remove contacts from the system.
- **Command-Line Interface**: User-friendly command-line interface for easy interaction.

---

## Implementation Details

- **Data Structure**: Contacts are stored using a structure defined as follows:
    ```c
    typedef struct {
        int phone;
        char name[20];
        char address[50];
        char email[30];
    } contact_t;
    ```

- **Array-Based Storage**: Contacts are stored in an array, making it simple and efficient to manage.

---

## Usage

The system provides a simple menu for users to interact with:
- **Add New Contact**
- **List All Contact**
- **Search Contact**
- **Delete Contact**
- **Exit**

---

## Getting Started

1. **Clone the Repository**:
    ```sh
    git clone https://github.com/firefly15225/contact-management-system.git
    cd contact-management-system
    ```

2. **Compile the Program**:
    ```sh
    gcc main.c -o contacts
    ```

3. **Run the Program**:
    ```sh
    ./contacts
    ```
