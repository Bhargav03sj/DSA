#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *head = NULL;
struct Node *createNode(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}
void insertinbeg(int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
        head = newNode;
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    printf("Node Inserted!!!!\n");
}

void insertnodeatend(int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
        head = newNode;
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Node Inserted !!!!\n");
}
void insertatanypos(int data, int pos)
{
    if (head == NULL)
        printf("List is Empty!!!\n");
    else if (pos == 0)
        insertinbeg(data);
    else
    {
        struct Node *temp = head;
        int i = 0;
        while (temp != NULL)
        {
            if (i == pos)
                break;
            temp = temp->next;
            i++;
        }
        if(temp == NULL)
         printf("Invalid Position !!!\n");
         else{
            struct Node* newNode = createNode(data);
            temp->next = newNode;
            newNode->prev = temp;
            printf("Node inserted at position %d\n", pos);
         }
    }
}
void deletefrombeg(){
    if(head == NULL)
          printf("Cannot delte from empty list!!!!\n");
          else{
            head = head->next;
            head->prev = NULL;
            printf("Node deleted from begining");
          }        

}
void deletefromend(){
   if(head == NULL)
          printf("Cannot delte from empty list!!!!\n");
          else if(head->next = NULL)
              head = NULL;
          else{
              struct Node* temp = head; 
              while(temp->next != NULL){
                temp = temp->next;
            }
            temp->prev->next = NULL;
            printf("Node deleted from end!!!!\n");
          }        

}
void deletefromanypos(int pos){
    if(head == NULL)
     printf("Cannot delte from empty LIST !!!!\n");
     else if ( pos == 0)
        deletefrombeg();
         else{
            struct Node* temp = head;
             int i = 0;
             while(temp != NULL){
                if(i == pos)
                 break ;
                  temp = temp->next;
                  i++;
             }
             if(temp == NULL)
               printf("Invalid POsition !!!\n");
                else{
                    temp->prev->next = temp->next;
                    if(temp->next != NULL)
                     temp->next->prev = temp->prev;
                     printf("NOde delted from position %d\n", pos);
                }
         }

}
void displaylist(){
    if(head == NULL)
    printf("list is Empty!!!!\n");
    else{
        struct Node* temp = head;
        while(temp != NULL){
            printf("%d", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}


void search(int value){
    if(head == NULL)
    printf("list is Empty!!!!\n");
    else{
        struct Node* temp = head;
        while(temp != NULL){
           if(temp->data == value){
            printf("Found!!!\n");
            return ;
           }
           temp = temp->next;
        }
        printf("Not Found!!!!\n");
    }
}
int main()
{int choice , data , pos;
    while (1)
    {
        printf("\n------Singly linked list menu------\n");
        printf("1: Insert In Beigning\n");
        printf("2: Insert at end\n");
        printf("3: Insert at any position\n");
        printf("4: Delete from beigning\n");
        printf("5: Delete from end\n");
        printf("6: delete from any position\n");
        printf("7:search element\n");
        printf("8: display\n");
        printf("9: exit\n");
        int choice, val, pos;
        printf("Enter choice: ");
        scanf("%i", &choice);
        switch (choice)
        {
        case 1:
            printf("enter data : ");
            scanf("%d", &val);
            insertinbeg(val);
            break;
        case 2:
            printf("enter data : ");
            scanf("%d", &val);
            insertnodeatend(val);
            break;
        case 3:
            printf("enter data: ");
            scanf("%d", &val);
            printf("enter position: ");
            scanf("%d", &pos);
            insertatanypos(val, pos);
            break;
        case 4:
            deletefrombeg(val);
            break;
        case 5:
            deletefromend(val);
            break;
        case 6:
            printf("enter position : ");
            scanf("%d", &pos);
            deletefromanypos(pos);
            break;
        case 7:
            printf("enter data to search : ");
            scanf("%d", &val);
            search(val);
            break;
        case 8:
            displaylist();
            break;
        case 9:
            exit(0);
        default:
            printf("Invalid choice");
        }
        printf("\n\n");
    }
    return 0;
}
