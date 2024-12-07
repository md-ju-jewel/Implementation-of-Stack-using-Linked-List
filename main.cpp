/// ** In the name of ALLAH ** ///

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a Node
struct Node
{
    int data;
    struct Node* next;
};

// Global variable for the stack's top
struct Node* top = NULL;

// Function to push an element onto the stack
void push(int x)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

// Function to display the elements in the stack
void display()
{
    struct Node* temp = top;
    if (temp == NULL)
    {
        printf("The Stack is Empty\n");
        return;
    }
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to peek at the top element of the stack
void peek()
{
    if (top == NULL)
    {
        printf("The Stack is Empty\n");
    }
    else
    {
        printf("The Top Element is %d\n", top->data);
    }
}

// Function to pop an element from the stack
void pop()
{
    if (top == NULL)
    {
        printf("The Stack is Empty\n");
        return;
    }
    struct Node* temp = top;
    printf("Popped Element is %d\n", top->data);
    top = top->next;
    free(temp);
}
int main()
{
    push(2);
    push(3);
    push(4);

    display();
    peek();

    pop();
    display();
    peek();

    return 0;
}

