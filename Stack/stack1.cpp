#include <iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
    Node(int d){
        data = d;
        next = nullptr;
    }
};

void push(Node *& head){
    int x;
    cout << "Enter the value data: ";
    cin >> x;
    Node * temp =  new Node (x);
    temp -> next = head;
    head = temp;
}

int pop(Node *& head){
    if (head == nullptr){
        cout << "UnderFlow";
        return -1;
    }
    else{
        int x = head -> data;
        Node * temp = head;
        head = head -> next;
        delete (temp);
        return x;
    }
}

void display(Node * head){
    if (head == nullptr){
        cout << "Empty Stack!!" << endl;
    }
    Node * temp = head;
    while(temp != nullptr){
        cout << temp -> data << " " << "->" << " ";
        temp = temp -> next;
    }
    cout << "nullptr" << endl;
}

int main(){
    bool exit = true;
    Node * head = nullptr;

    do{
        cout << "================" << endl;
        cout << "Stack Operations" << endl;
        cout << "================" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                push(head);
                break;
            case 2:
                pop(head);
                break;
            case 3:
                display(head);
                break;
            case 4:
                exit = false;
                break;
            default:
                cout << "Wrong Choice!!";
        }
    }while(exit);

    return 0;
}