#include <stdio.h>
#include <stdlib.h>
 
struct node {
   int data;
   struct node *link;
};
 
struct node *first = NULL;
void insert_at_begin(int);
void insert_after(int,int);
void insert_before(int, int);
void insert_at_end(int);
void traverse();
void delete_from_begin();
void delete_from_bet(int);
void delete_from_end();
int count = 0;
 
int main () {
   int input, data, mid;
 
   for (;;){
      printf("\n\n1. Insert an node at beginning of linked list.\n");
      printf("2. Insert an node after a certain element of the linked list.\n");
      printf("3. Insert an node before a certain node of the linked list.\n");
      printf("4. Insert an node at end of linked list.\n");
      printf("5. Traverse linked list.\n");
      printf("6. Delete node from beginning.\n");
      printf("7. Delete node in between.\n");
      printf("8. Delete node from end.\n");
      printf("9. Exit\n");
 
      scanf("%d", &input);
 
      if (input == 1) {
         printf("Enter value of element\n");
         scanf("%d", &data);
         insert_at_begin(data);
      }
            else if (input == 2)
      {
         printf("\nEnter value of element\n");
         scanf("%d", &data);
         printf("\nAfter which value should it be inserted?\n");
         scanf("%d", &mid);
         insert_after(data,mid);
      }
               else if (input == 3)
      {
         printf("\nEnter value of element\n");
         scanf("%d", &data);
         printf("\nBefore which value should it be inserted?\n");
         scanf("%d", &mid);
         insert_before(data,mid);
      }

      else if (input == 4) {
         printf("Enter value of element\n");
         scanf("%d", &data);
         insert_at_end(data);
      }
      else if (input == 5)
         traverse();
      else if (input == 6)
         delete_from_begin();  
      else if (input == 7)
      {
         printf("Enter the element to delete:");
         scanf("%d",&data);
         delete_from_bet(data);
      } 
      else if (input == 8)
         delete_from_end();
      else if (input == 9)
         break;
      
      else
         printf("Please enter valid input.\n");      
   }
 
   return 0;
}
 
void insert_at_begin(int x) {
   struct node *t,*p;
 
   t = (struct node*)malloc(sizeof(struct node));
   count++;
 
   if (first == NULL) {
      first = t;
      first->data = x;
      first->link = first; //
      return;
   }
 
   p = first;
   while(p->link != first)
   {
      p=p->link;
   }

   t->data = x;
   t->link = first;
   first = t; 
   p->link = first;
}
 
void insert_at_end(int x) {
   struct node *t, *temp;
 
   t = (struct node*)malloc(sizeof(struct node));
   count++;
 
   if (first == NULL) {
      first = t;
      first->data = x;
      first->link = NULL;
      return;
   }
 
   temp = first;
 
   while (temp->link != first)
      temp = temp->link;   
 
   temp->link = t;
   t->data    = x;
   t->link    = first;
}
void insert_after(int x,int y)
{
   struct node *t, *q;

   q=first;

   t=(struct node*)malloc(sizeof(struct node));
   count++;

   if (first == NULL) {
      first = t;
      first->data = x;
      first->link = NULL;
      return;
   }

   while(q->link != first && q->data != y)
   {
      q=q->link;
   }

   t->link=q->link;
   t->data=x;
   q->link=t;

} 

void insert_before(int x,int y)
{
   struct node *t, *q;

   q=first;

   t=(struct node*)malloc(sizeof(struct node));
   count++;

   if (first == NULL) {
      first = t;
      first->data = x;
      first->link = NULL;
      return;
   }

   while(q->link->link != first && q->link->data != y)
   {
      q=q->link;
   }

   t->link=q->link;
   t->data=x;
   q->link=t;

} 
void traverse() {
   struct node *t;
 
   t = first;
 
   if (t == NULL) {
      printf("Linked list is empty.\n");
      return;
   }
 
   printf("There are %d elements in linked list.\n", count);
 
   while (t->link != first) {
      printf("%d\n", t->data);
      t = t->link;
   }
   printf("%d\n", t->data);
}
 
void delete_from_begin() {
   struct node *t,*p;
   int n;
 
   if (first == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }

   p = first;
   while(p->link != first)
   {
      p=p->link;
   }

   n = first->data;
   t = first->link;
   free(first);
   first = t;

   p->link=first;
   
   count--;
 
   printf("%d deleted from beginning successfully.\n", n);
}
 
void delete_from_end() {
   struct node *t, *u;
   int n;
 
   if (first == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
 
   count--;
 
   if (first->link == NULL) {
      n = first->data;
      free(first);
      first = NULL;
      printf("%d deleted from end successfully.\n", n);
      return;
   }
 
   t = first;
 
   while (t->link != first) {
      u = t;
      t = t->link;
   }
 
   n = t->data;
   u->link = first;
   free(t);
 
   printf("\n%d deleted from end successfully.\n", n);
}

void delete_from_bet(int x)
{
   struct node *t,*u;
   int n;

   if(first == NULL)
   {
      printf("\nLinked list is empty!");
      return;
   }

   count--;

   if(first->link == NULL)
   {
      n = first->data;
      free(first);
       first = NULL;
      printf("\n%d deleted successfully!",n);
      return;
   }

   t = (struct node *)malloc(sizeof(struct node));

   t = first;

   while(t->link != NULL && t->data != x)
   {
      u = t;
      t= t->link;
   }

   if(t->link == NULL)
   {
      printf("\nNode %d not found!",x);
      return;
   }

   n=t->data;
   u->link=t->link;
   free(t);

   printf("\n%d successfully deleted!",n);

}