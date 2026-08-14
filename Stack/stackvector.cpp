#include <iostream>
#include <vector>
using namespace std;

class Stack{
    vector <int> vec;
    int top;

public:

    Stack(){
        top = -1;
    }

    void push(int num){
        top = top + 1;
        vec.push_back(num);
    }

    void pop(){
        if(top == -1){
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << "Removed: " << vec[top] << endl;
        vec.pop_back();
        top--;
    }

    void display(){
        if(top == -1){
            cout << "Stack is Empty" << endl;
            return;
        }

        for(int i = 0; i <= top; i++){
            cout << vec[i] << " ";
        }
    }

    void peek(){
        if(top == -1){
            cout << "Stack is Empty" << endl;
            return;
        }

        cout << vec[top] << endl;
    }
};

int main(){
    Stack st;

    while(true){
        cout << "==========" << endl;
        cout << "   Menu   " << endl;
        cout << "==========" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Peek" << endl;
        cout << "5. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                int num;
                cout << "Enter the number: ";
                cin >> num;
                st.push(num);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.display();
                break;
            case 4:
                st.peek();
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