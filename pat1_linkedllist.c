#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
} *head = NULL, *tail;
void createlist(int a[], int n)
{
 head = (struct Node *)malloc(sizeof(struct Node));
 head->data = a[0];
 head->next = NULL;
 tail = head;
 for (int i = 1; i < n; i++)
 {
 struct Node *t = (struct Node *)malloc(sizeof(struct Node));
 t->data = a[i];
 t->next = NULL;
 tail->next = t;
 tail = t;
 }
 tail->next = NULL;
}
struct Node *reverse(struct Node *temphead)
{
 struct Node *previous = NULL;
 struct Node *current = temphead;
 struct Node *next = NULL;
 while (current != NULL)
 {
 next = current->next;
 current->next = previous;
 previous = current;
 current = next;
 }
 temphead = previous;
 return temphead;
}
struct Node *reverseindex(struct Node *head, int startindex, int endindex)
{
 int i = 1;
 if (startindex == endindex)
 return head;
 struct Node *reversenode = NULL, *reverseprevious = NULL;
 struct Node *end = NULL, *reversenext = NULL;
 struct Node *current = head;
 while (current && i <= endindex)
 {
 if (i < startindex)
 reverseprevious = current;
 else if (i == startindex)
 reversenode = current;
 else if (i == endindex)
 {
 end = current;
 reversenext = current->next;
 }
 else
 {
 ;
 }
 current = current->next;
 i++;
 }
 end->next = NULL;
 end = reverse(reversenode);
 if (reverseprevious)
 reverseprevious->next = end;
 else
 head = end;
 reversenode->next = reversenext;
 return head;
}
struct Node *checkEven(int n, struct Node *head)
{
 int a[n];
 struct Node *temp = head;
 int i = 0;
 int j = 0;
 int flag = 0;
 while (temp != NULL)
 {
 if (flag == 0 && temp->data % 2 == 0)
 {
 flag = 1;
 a[i] = j;
 i++;
 }
 if (flag == 1 && temp->data % 2 != 0)
 {
 a[i] = j - 1;
 i++;
 flag = 0;
 }
 temp = temp->next;
 j++;
 }
 if (temp == NULL)
 {
 a[i] = j - 1;
 }
 for (int l = 0; l <= i; l = l + 2)
 {
 reverseindex(head, a[l] + 1, a[l + 1] + 1);
 }
 return head;
}

void checkEven1(struct Node *p)
{
    int count=0;
    struct Node *temp=p;
     while(temp!=NULL){
        if(temp->data%2==0){
            int a=temp->data;
           printf("%d ",temp->data);
        count++;

        }
        else if(temp->data%2!=0)
        {
           count=0;
            while(temp->next->data%2!=0)
                temp=temp->next;
        }
        printf("\n");
        temp=temp->next;

    }



}
void display()
{
 struct Node *temp = head;
 while (temp != NULL)
 {
 printf("%d ", temp->data);
 temp = temp->next;
 }


}


int main()
{
 int a[7] = {17, 14, 12, 45, 46, 34, 20};
createlist(a, 7);
checkEven1(head);
 printf("The current List is :");
 display();
 printf("\nAfter the reversal of even number sublists the new list is :");
 checkEven(7, head);
 display();
}

