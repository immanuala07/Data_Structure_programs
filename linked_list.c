#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Create a basic structure for NODE from which new nodes can be created.
struct node
{
	int data;
	struct node *link;
};

//Initialize 3 pointers as globals so that they do not need to be passed in functions.
struct node *header, *ptr, *temp,*ptr1;

//Prototypes for various user defined functions.
void insert_front();
void insert_end();
void insert_any();
void delete_front();
void delete_end();
void delete_any();
void display();

int main()
{
	int choice;

	//Allocate memory for header node.
	header = (struct node *) malloc(sizeof(struct node));

	//clrscr();

	//Set the content of header node
	header->data = NULL;
	header->link = NULL;

	do
	{
		//Display menu to the user
		printf("\n1. Insert at front\n");
		printf("\n2. Insert at end\n");
		printf("\n3. Insert at any position\n");
		printf("\n4. Delete from front\n");
		printf("\n5. Delete from end\n");
		printf("\n6. Delete from anywhere\n");
		printf("\n7. Display linked list\n");
		printf("\n8. Exit\n");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				insert_front();
				break;
			case 2:
				insert_end();
				break;
			case 3:
				insert_any();
				break;
			case 4:
				delete_front();
				break;
			case 5:
				delete_end();
				break;
			case 6:
				delete_any();
				break;
			case 7:
				display();
				break;
			case 8:
				exit(0);
				
		}
		

		//printf("\n\nDo you want to continue? (1 / 0): ");
		//scanf("%d", &cont);
	} while(choice!=8);

	getch();
}

//Function to insert a node at the front of a single linked list.
void insert_front()
{
	int data_value;

	printf("\nEnter data of the node: ");
	scanf("%d", &data_value);

	temp = (struct node *)malloc(sizeof(struct node));

	temp->data = data_value;
	temp->link = header->link;
	header->link = temp;
}

//Function to insert a node at the end of a single linked list.
void insert_end()
{
	int data_value;

	printf("\nEnter data of the node: ");
	scanf("%d", &data_value);

	temp = (struct node *)malloc(sizeof(struct node));

	//Traverse to the end of the linked list.
	ptr = header;
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}

	temp->data = data_value;
	temp->link = ptr->link;
	ptr->link = temp;
}

//Function to insert a node at any position after a particular node.
void insert_any()
{
	int data_value, key;

	printf("\nEnter data of the node: ");
	scanf("%d", &data_value);
	printf("\nEnter data of the node after which new node is to be inserted: ");
	scanf("%d", &key);

	temp = (struct node *) malloc(sizeof(struct node));

	//Traverse till key is found or end of the linked list is reached.
	ptr = header;
	while(ptr->link != NULL && ptr->data != key)
	{
		ptr = ptr->link;
	}
	if(ptr->data == key)
	{
		temp->data = data_value;
		temp->link = ptr->link;
		ptr->link = temp;
	}
	else
	{
		printf("\nValue %d not found\n",key);
	}
}

//Function to delete a node from the front of a linked list.
void delete_front()
{
	//If the list is already empty
	if(header->link == NULL)
	{
		printf("\nEmpty Linked List. Deletion not possible.\n");
	}
	else
	{
		ptr = header->link;
		header->link= ptr->link;
		free(ptr);
		printf("\nNode deleted from the front.\n");
	}	
}

//Function to delete a node from the end of a linked list.
void delete_end()
{
	if(header->link == NULL)
	{
		printf("\nEmpty Linked List. Deletion not possible.\n");
	}
	else
	{
		//Traverse to the end of the list.
		ptr = header;
		while(ptr->link != NULL)
		{
			ptr1 = ptr;
			ptr = ptr->link;
		}
		ptr1->link = ptr->link;
		free(ptr);
		printf("\nNode deleted from the end.\n");
	}
}

//Function to delete any node from linked list.
void delete_any()
{
	int key;

	if(header->link == NULL)
	{
		printf("\nEmpty Linked List. Deletion not possible.\n");
	}
	else
	{
		printf("\nEnter the data of the node to be deleted: ");
		scanf("%d", &key);

		ptr = header;
		while((ptr->link != NULL) && (ptr->data != key))
		{
			ptr1 = ptr;
			ptr = ptr->link;
		}
		if(ptr->data == key)
		{
			ptr1->link = ptr->link;
			free(ptr);
			printf("\nNode with data %d deleted.\n", key);
		}
		else
		{
			printf("\nValue %d not found. Deletion not possible.\n", key);
		}		
	}
}

//Function to display the contents of the linked list.
void display()
{
	ptr = header;
	while(ptr->link == NULL)
	{
		printf("Linked list is empty");
		return;
	}
	printf("\nContents of the linked list are: \n");
	//Print the contents of the linked list starting from header
	
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
		printf("%d ", ptr->data);
	}
	
}
