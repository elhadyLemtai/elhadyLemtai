// Linked list does not store data one after the other so none continous collection 
// so randomly positioned  ; Arrays store data one after the other in memory 

#include <iostream>
using namespace std;

class Node {
public:
      int Value;
      Node* Next;
};

void printList(Node* n) {
     while (n!=NULL) {
           cout << n->Value << endl;
           n = n->Next;
     }
}

void insertAtTheFront(Node**head, int newValue) {
      //1. Prepare a newNode
      Node* newNode = new Node();
      newNode->Value = newValue;

      //2. Put it in front of current head
      newNode->Value = *head;

      //3. Move head of the list to point to the newNode
      *head=nawNode;
}


void insertAtTheEnd(Node**head, int newValue) {
      // 1. Prepare a newNode
      Node* newNode = new Node();
      newNode->Value = newValue;
      newNode->Next = NULL;
      // 2.If Linked list is empty, newNode will be a head node
      if (*head == NULL){
           *head = newNode;
           return;
      }
      // 3. Find the last node
      Node* last = *head;
      while (last->Next!=NULL) {
            last = last->Next;
      }

      // 4. Insert newNode after last node (at the end)
      last->Next = newNode;
}

void insertAfter(Node*previous, int newValue) {
        // 1. Check if previous node is NULL
        if(previous == NULL) {
           cout << "Previous can not be NULL !";
           return ;
        }

        // 2. Prepare a newNode
        Node* newNode = new Node();
        newNode->Value = newValue;

        // 3. Insert newNode after previous
        newNode->Next = previous->Next;
        previous->Next = newNode;

}
int main()
{
     Node* head = new Node();
     Node* second = new Node();
     Node* third = new Node();

     head->Value = 1;
     head->Next = second;
     second->Value = 2;
     second->Value = third;
     third->Value = 3;
     third->Next = NULL;


     // insertAtTheFront
     insertAtTheFront(&head, -54743); 
     insertAtTheFront(&head, -4571);

     // insertAtTheEnd
     insertAtTheEnd(&head, 6549);
     insertAtTheEnd(&head, 5461);

     // insertAfter(after head or second, -458  or -21547 will be the elements)
     insertAfter(head, -458);
     insertAfter(second, -21547);
     printList(head);



     system("pause>0");
}
