#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nodeLength;

typedef struct node 
{
    char data;
    struct node *next;
} node;

static node* CreateNode(char *string)
{
    node *head = 0;
    node *temp;
    node *link;
  
    while(*string)
    {
        link = malloc(sizeof(struct node));
        nodeLength++;
        link->data = *string;
        link->next = NULL;
        if(head == NULL)
        {
            head = temp = link;
        }
        else
        {
            temp->next = link;
            temp = link;
        }
        string++;
    }
    return head;
}

static void Display(node *temp)
{
    int index = 0;
    char str[30];

    while(temp != NULL)
    {
        str[index] = temp->data;
        index++;
        if((temp->data == 32)||(temp->next == NULL))
        {
            while(index >= 0 )
            {
                printf("%c", str[index--]);
            }
            printf(" ");
            index = 0;
            memset(str, 0, 30);
        }
        temp = temp->next;
    }   
}

void main()
{
    char *string = "hello world";
    node *link;
    link = CreateNode(string);
    Display(link);
}
