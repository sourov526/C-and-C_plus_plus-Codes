#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;

int main()
{
    int ch;
    while(1)
    {
    printf("\n\nSingle linked list operation from (f-i) :\n");
    printf("1. create()\n");
    printf("2. isEmpty()\n");
    printf("3. insertFirst()\n");
    printf("4. insertLast()\n");
    printf("5. insertBefore()\n");
    printf("6. getFirst()\n");
    printf("7. getLast()\n");
    printf("8. get()\n");
    printf("9. deleteFirst()\n");
    printf("10.deleteAt_Last()\n");
    printf("11.length()\n");
    printf("12.display()\n");
    printf("13.Exit()\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        create();
        break;
    case 2:
        isEmpty();
        break;
    case 3:
        insertFirst();
        break;
    case 4:
        insertLast();
        break;
    case 5:
        insertBefore();
        break;
    case 6:
        getFirst();
        break;
    case 7:
        getLast();
        break;
    case 8:
        get();
        break;
    case 9:
        deleteFirst();
        break;
    case 10:
        deleteAt_Last();
        break;
    case 11:
        length();
        break;
    case 12:
        display();
        break;
    case 13:
        exit(1);
        break;
    default :
        printf("Invalid input");

    }
    }
}

int create()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));//First enter value multiple time pressing (1).
    printf("\nEnter node data :\n");                  //If you want to see full list,simply call display function.
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *p;
        p = head;
        while(p->link!=NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}

void isEmpty()
{
    if(head == NULL)
    {
        printf("\n\nTrue\n\n");//This function will see you either list is empty or not.
    }
    else
    {
        printf("\nFalse\n");
    }
}

int insertFirst()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));   //Same as create function.
    printf("Enter node data :\n");                      //After giving value simply call display function to see
    scanf("%d",&temp->data);                            //insertFirst() is working or not.
    temp->link = head;
    head = temp;
}

int insertLast()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));   //Same as create function.
    printf("Enter node data :\n");                      //After giving value simply call display function to see
    scanf("%d",&temp->data);                            //insertFirst() is working or not.
    temp->link = NULL;
    struct node *p;
    p = head;
    while(p->link!=NULL)
    {
        p = p->link;
    }
    p->link = temp;
}

int insertBefore()
{
    struct node *temp,*p;
    int pos,len,i=1,data;
    printf("\nEnter position : & Enter data: \n");
    scanf("%d %d",&pos,&data);
    len = length();
    if(pos>length)
    {
        printf("Error");
    }
    else
    {
        p = head;
        while(i<pos-1)
        {
            p = p->link;
            i++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = data;
        temp->link = p->link;
        p->link = temp;
    }
}

int getFirst()
{
        struct node *temp = head;
        while(temp!=NULL)
        {
            printf("First value of the list : %d\n",temp->data);
            break;
        }
}

int getLast()
{
    struct node *temp = head;
    while(temp->link!=NULL)
    {
        temp = temp->link;

    }
    printf("Last value of the node: %d\n",temp->data);
}

int get()
{
    struct node *temp,*p;
    int pos,len,i=1;
    printf("\nEnter position : \n"); //Here you have to give node number.
    scanf("%d",&pos);                //Then you"ll see that node data.
    len = length();			//Search() and get() are same
    if(pos>length)
    {
        printf("NULL");
    }
    else
    {
        p = head;
        while(i<pos)
        {
            p = p->link;
            i++;
        }
        printf("Position %d data is %d\n",pos,p->data);

    }
}
int deleteFirst()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));//After giving value you have to call display() to see the function is working or not.

    temp = head;
    head = temp->link;
    temp->link = NULL;
    free(temp);
}

int deleteAt_Last()
{
    struct node *p = head;
    struct node *q;
    int pos;
    printf("Enter position to delete: \n");////After giving value you have to call display() to see the function is working or not.
    scanf("%d",&pos);
    if(pos>length())
    {
        printf("Invalid position\n");
    }
    else
    {
        int i =1;
        while(i<pos-1)
        {
            p = p->link;
            i++;
        }
        q = p->link;
        p->link = q->link;
        free(q);
    }
}

int length()
{
    int count = 0;
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->link;
    }
    printf("\nTotal node in the list : %d\n",count);
}

int display()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp = head;
    if(temp == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d-> ",temp->data);
            temp = temp->link;
        }
    }
}
