#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};
	struct Node* head = NULL;

void addAtBeginning(int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}

void displayList() {
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

int main() {
	int choice, value;

	while (1) {
		printf("\n1. Add node at beginning\n");
		printf("2. Display linked list\n");
		printf("3. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("Enter value: ");
			scanf("%d", &value);
			addAtBeginning(value);
			break;
		case 2:
			displayList();
			break;
		case 3:
			exit(0);
		default:
			printf("Invalid choice.\n");
		}
	}

	return 0;
}
