#include <iostream>
using namespace std;

class PriorityQueue {
    int arr[100];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    void enqueue(int value) {
        if (size == 100) {
            cout << "Queue is full\n";
            return;
        }

        arr[size] = value;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue is empty\n";
            return;
        }

        
        int highest = 0;

        for (int i = 1; i < size; i++) {
            if (arr[i] > arr[highest]) {
                highest = i;
            }
        }

        cout << "Removed: " << arr[highest] << endl;

        
        for (int i = highest; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
    }

    void peek() {
        if (size == 0) {
            cout << "Queue is empty\n";
            return;
        }

        int highest = 0;

        for (int i = 1; i < size; i++) {
            if (arr[i] > arr[highest]) {
                highest = i;
            }
        }

        cout << "Highest Priority: " << arr[highest] << endl;
    }

    void display() {
        if (size == 0) {
            cout << "Queue is empty\n";
            return;
        }

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    while(true){
        cout << "============" << endl;
        cout << "    Menu    " << endl;
        cout << "============" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek " << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit " << endl;

        int choice;
        cout << "Enter the choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                int num;
                cout << "Enter the number: ";
                cin >> num;
                pq.enqueue(num);
                break;
            case 2:
                pq.dequeue();
                break;
            case 3:
                pq.peek();
                break;
            case 4:
                pq.display();
                break;
            case 5:
                exit(0);
                break;
            default:
                cout << "Enter valid choice!!" << endl;
        }
    }
    return 0;
}