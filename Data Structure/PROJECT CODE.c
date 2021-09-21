#include<stdio.h>
#include<stdlib.h>
struct node
{
    int quantity;
    int foodnumber;
    char size;
    int served;
    int ordernum ;
    struct node*nextnode;
};
struct node*head = NULL;
int order_num =0;

void khaidai()
{
    printf("1. Biriyani                    100/-\n");
    printf("2. Kacci                       250/-\n");
    printf("3. Fride rice with chicken     150/-\n");
    printf("4. Grill and Nan               220/-\n");
    printf("6. Milk shake                  180/-\n");
    printf("7. Lacci                       150/-\n");
    printf("8. 4 Pepsi                      35/-\n");
}
int get_length()
{
    if(head == NULL)
    {
        return 0;
    }
    struct node*temp;
    temp = head;
    for(int i=1;; i++)
    {
        if(temp->nextnode==NULL)
        {
            return i;
        }
        temp = temp->nextnode;
    }
}

void addnodeAtindex(int foodnumber,char size,int quantity)
{

    struct node*newnode =(struct node*)malloc(sizeof(struct node));
    newnode-> foodnumber = foodnumber;
    newnode->size = size;
    newnode->quantity = quantity;
    newnode->served = 0;
    newnode->ordernum = ++order_num;
    newnode->nextnode = NULL;
    if(head == NULL)
    {
        head =newnode;
    }
    else
    {
        struct node*current;
        current = head;
        while(current->nextnode!= NULL)
        {
            current = current->nextnode;
        }
        current->nextnode= newnode;
    }
    return newnode;
}
void addnode(int foodnumber, char size,int quantity)
{
    addnodeAtindex(foodnumber,size,quantity);
}
struct node *getNodeAtIndex(int index)
{
    //return the node that is at the given index
    if(get_length() == 0)
    {
        //printf("getNodeAtIndex(): The list is empty\n");
        return NULL;
    }
    else if(index < 0 || index >= get_length())
    {
        //printf("getNodeAtIndex(): Index out of bounds\n");
        return NULL;
    }
    else
    {
        if(index == 0)
        {
            return head;
        }
        else
        {
            //if the index is not the first item, we wanna loop till we get there
            struct node *tempNode = head;
            for(int x = 0; x< index; x++)
            {
                tempNode = tempNode->nextnode;
            }
            return tempNode;
        }
    }
}
int getnode(int orderNum)
{
    int _length = get_length();
    for(int i = 0; i < _length; i++)
    {
        if(getNodeAtIndex(i)->ordernum == orderNum)
        {
            return i;
        }
    }
    return -1;
}
void deletenode(int index)
{
    if(get_length() == 0)
    {
        printf("deleteNodeAtIndex(): List is empty");
        return;
    }
    if(index < 0 || index >= get_length())
    {
        printf("deleteNodeAtIndex(): Index out of bounds");
        return;
    }
    if(index == 0)
    {
        //if deleting head
        struct node *refToClean = head;
        if(get_length() > 1)
        {
            head = getNodeAtIndex(1);
        }
        else
        {
            head = NULL;
        }
        free(refToClean);
    }
    else if (index == (get_length()-1))
    {
        //if deleting tail
        free(getNodeAtIndex(index));
        getNodeAtIndex(index - 1)->nextnode = NULL;
    }
    else
    {
        //deleting body, there's items before and after this item
        struct node *refToClean = getNodeAtIndex(index);
        getNodeAtIndex(index-1)->nextnode = getNodeAtIndex(index+1);
        free(refToClean);
    }
}

void printorder()
{
    int length = get_length();

    for(int i = 0; i<length; i++)
    {
        printf("\n\tOrder Number  : %d\n",getNodeAtIndex(i)->ordernum);
        printf("\tQuantity      : %d\n",getNodeAtIndex(i)->quantity);
        printf("\tFood Number   : %d\n",getNodeAtIndex(i)->foodnumber);
        printf("\tSize          : %c\n",getNodeAtIndex(i)->size);
        if(getNodeAtIndex(i)->served == 0)
        {
            printf("\n\tNOT SERVED\n\n");
        }
        else
        {
            printf("\tSERVED!\n");
        }


    }
}
struct node *findnode(int orderNum)
{
    int _length = get_length();
    for(int i = 0; i < _length; i++)
    {
        if(getNodeAtIndex(i)->ordernum == orderNum)
        {
            return getNodeAtIndex(i);
        }
    }
    return NULL;
}

void main()
{
    for(;;)
    {

        khaidai();
        printorder();

        int inp1,inp3;
        int pop;
        printf("Enter 1 to add a new order, Enter 2 to delete , Enter 3 to confirm: \n ");
        scanf("%d",&pop);
        switch(pop)
        {
        case 1:
            printf("Enter the food number: ");
            scanf("%d",&inp1);
            printf("\nEnter the food size(S/M/L):" );
            char inp;
            scanf(" %c",&inp);
            printf("\nEnter quantity: \n");
            scanf("%d",&inp3);
            addnode(inp1,inp,inp3);
            printf("Order added successfully!\n");
            break;

        case 2:
            printf("Enter the order number: ");
            int p1;
            scanf("%d",&p1);
            if(findnode(p1)!= NULL)
            {
                deletenode(getnode(p1));
                printf("\nOrder Deleted\n\n");

            }
            else
            {
                printf("Failed to Deleted\n");
            }
            break;
        case 3:
            printf("Enter the order Number: \n");
            int p;

            scanf("%d",&p);
            if(findnode(p)!=NULL)
            {
                findnode(p)->served = 1;
                printf("Confirm\n");

            }
            else
            {
                printf("operation failed\n");
            }
            break;

        case 4:
            return ;

        }
    }
}
