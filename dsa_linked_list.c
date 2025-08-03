#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;               // Data part of the node
    struct Node* next;      
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // Allocate memory for a new node
    if (newNode == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        exit(1); // Exit if memory allocation fails
    }
    newNode->data = data; // Set the data for the new node
    newNode->next = NULL; // Initialize the next pointer to NULL
    return newNode; // Return the new node
}

// Function to add a node at the end of the linked list
void appendNode(struct Node** head_ref, int new_data) {
    struct Node* newNode = createNode(new_data); // Create a new node
    struct Node* last = *head_ref; // Start with the head node

    // If the linked list is empty, then make the new node as head
    if (*head_ref == NULL) {
        *head_ref = newNode; // Set the head to the new node
        return;
    }

    // Otherwise, traverse to the last node
    while (last->next != NULL) {
        last = last->next; // Move to the next node
    }

    // Change the next of the last node
    last->next = newNode; // Link the new node at the end
}

// Function to display the linked list
void displayList(struct Node* node) {
    while (node != NULL) { // Traverse the list
        printf("%d -> ", node->data); // Print the data of the current node
        node = node->next; // Move to the next node
    }
    printf("NULL\n"); // Indicate the end of the list
}

// Main function to demonstrate the linked list operations
int main() {
    struct Node* head = NULL; // Initialize the head of the linked list

    // Append nodes to the linked list
    appendNode(&head, 10);
    appendNode(&head, 20);
    appendNode(&head, 30);
    appendNode(&head, 40);

    // Display the linked list
    printf("Linked List: ");
    displayList(head);

    // Free the allocated memory (optional but good practice)
    struct Node* current = head; // Start from the head
    struct Node* nextNode; // Pointer to hold the next node
    while (current != NULL) { // Traverse the list
        nextNode = current->next; // Store the next node
        free(current); // Free the current node
        current = nextNode; // Move to the next node
    }

    return 0; // Return success
}