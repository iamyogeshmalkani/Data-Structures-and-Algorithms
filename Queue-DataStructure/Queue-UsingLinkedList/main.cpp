/* Implementing Queue DataStructure using linked list
Queue works on the principle of FIFO(first-in-first-out)
hence the function we are implementing are:
1. preAppend() to denote the queue is forming hence all the node added from head.
2. removeElement() removes the first element that was inserted at the starting.
3. display() show all the elements in the queue.

    50-->20-->30-->20-->10
lastElement         firstElement
*/

#include <iostream>
#include <cstdio>

using namespace std;
class Node {
public:
    int data;
    Node *next;
};

class Queue {
    Node *last, *first;
    int totalElements;
public:

    Queue() {
        last = NULL;
        first = NULL;
        totalElements = 0;
    }

    void preAppend(int data) { //function to pre-append data into queue
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;

        if(first == NULL) {
            first = newNode;
            last  = newNode;
            totalElements++;
            return;
        }

       last->next=newnode;
      last=newnode;
      totalnodes++;
    }

    void removeElement() {
        if(first == NULL) {
            cout<<"Queue Already empty"<<endl;
            return;
        }
         int data=first->data;
      first=first->next;
      totalnodes--;
      cout<<data<<" is popped"<<endl;
    }

    void display() {
        if(first == NULL) {
            cout<<"Queue is Empty"<<endl;
            return;
        }
         node *temp=first;
       for(int i=0;i<totalnodes;i++){
         cout<<temp->data<<" ";
         temp=temp->next;
        cout<<endl;
    }
};

int main() {
    Queue q;
    q.preAppend(10);
    q.preAppend(20);
    q.preAppend(30);
    q.preAppend(40);
    q.preAppend(50);  // 50->40->30->20->10

    q.removeElement(); // 50->40->30->20
    q.display();
}
