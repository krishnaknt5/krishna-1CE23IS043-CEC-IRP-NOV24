#include <stdio.h>
# define max 6
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int element);
int dequeue();
void display();
int main() {
    int choice =-1,x;
    while(choice<4 && choice!=0)
    {
        printf("\n press 1 : Insert an element");
        printf("\n press 2 : ");
        printf("\n press 3 : ");
        printf("\n press 4 : ");
    }

    
}
void enqueue(int element)
{
    if((   front==-1) && (rear==-1))
}