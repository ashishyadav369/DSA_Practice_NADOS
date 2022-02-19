#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node {
    public :
        T data;
        Node<T> *next;
    
    Node (T data) {
        this->data = data;
        next = NULL;
    }
};

template <typename T>

class Stack {
    Node<T> *head;
    int size;

    public :

        Stack() {
            head = NULL;
            size = 0;
        }

        int getSize() {
            return size;

        }

        bool isEmpty() {
            return size == 0;
        }

        void push(int element) {
            Node<T> *newNode = new Node<T>(element);
            newNode->next = head;
            head = newNode;
            size++;
             
        }

        T pop() {
            if(isEmpty()) {
                return 0;
            }
            T ans = head->data;
            Node<T> *temp = head;
            head = head->next;
            delete temp;
            size--;
            return ans;

        }

        T top() {
            if(isEmpty()) {
                return 0;
            }
            return head->data;

        }

};

int main() {
    Stack <int> st;
    string s;
    cin >> s;
    while(s!="quit"){
        if(s == "push"){
            int val;
            cin >> val;
            st.push(val);
        } else if(s == "pop"){
            int val = st.pop();
            if (val != -1)
                cout << val << endl;
        } else if(s == "top"){
            int val = st.top();
            if(val != -1)
                cout << val << endl;
        } else if(s == "size"){
            cout << st.getSize() << endl;
        }
        cin >> s;
    }
}