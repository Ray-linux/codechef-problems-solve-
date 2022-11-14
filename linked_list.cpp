#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};

void travers(struct Node * ptr){
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr = ptr->next;
    }
}

int main()
{
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = NULL;
    travers(head);

    return 0;
}