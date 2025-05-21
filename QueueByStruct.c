// Queue implementation using Array
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
// Queue implementation using structure
typedef struct Node
{
   int data;
   struct Node *Next;
}Node;

void Enqueue(Node **Rare,Node **Front,int val)
{
    Node *NwN = (Node*)malloc(sizeof(Node));
    NwN->data = val;
    NwN->Next = NULL;
    if( *Front == NULL || *Rare == NULL) *Front = *Rare = NwN;
    else
    {
        (*Rare)->Next = NwN; // link last node with new node
        *Rare = NwN; // Rare node now point to new node
    }
}

int Dequeue(Node **Rare,Node **Front)
{
    if( *Front == NULL || *Rare == NULL) return 0;
    Node *tmpN = *Front; // temporary store front
    *Front = tmpN->Next; // move front to next
    int val = tmpN->data;
    free(tmpN); // delete current
    if(*Front == NULL) *Rare=NULL; // reset
    return val;
}
void ShowQueue(Node *Front,Node *Rare)
{
    if(Front == NULL) printf("\nQueue is empty\n");
    else
    {
        while(Front!=NULL)
        {
            printf("%d\t",Front->data);
            Front = Front->Next;
        }
        printf("\n");
    }
}
int CheckPeek(Node *Front)
{
    if(Front!=NULL) return Front->data;
    else return 0;
}
int CheckEnd(Node *Rare)
{
    if(Rare!=NULL) return Rare->data;
    return 0;
}
void FreeQueue(Node **Front ,Node **Rare)
{
    Node *tmpN = NULL;
    while(*Front!=NULL)
    {
        tmpN = *Front;
        *Front = (*Front)->Next;
        free(tmpN);
    }
    *Rare = NULL;
}

int main(void)
{
    Node *Front = NULL;
    Node *Rare = NULL;int choice=0,n=0;
    while(1)
    {
        printf("\nEnter Chioce\n1.Enqueue\n2.Dequeue\n3.Show\n4.Peek\n5.End\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter n:");
                scanf("%d",&n);
                Enqueue(&Rare,&Front,n);
            break;
            
            case 2:
                printf("\n Deq=%d \n",Dequeue(&Rare,&Front));
            break;
            
            case 3:
                ShowQueue(Front,Rare);
            break;
            
            case 4:
                printf("\n Peek = %d\n",CheckPeek(Front));
            break;
            
            case 5:
                printf("\n End = %d\n",CheckEnd(Rare));
            break;
            
            default:
                FreeQueue(&Front,&Rare);
                exit(1);
        }            
    }
    return 0;
}

