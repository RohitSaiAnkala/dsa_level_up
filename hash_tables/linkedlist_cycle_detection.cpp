#include<iostream>
#include<unordered_map>

using namespace std;

class node {
public:
    int data;
    node *next;

    node(int data) {
        this->data = data;
        next = NULL;
    }
};

bool containsCycle(node *head) {
    unordered_map<node *, bool> map;
    while (head->next != NULL) {
        if (map[head])
            return true;
        map[head] = true;
        head = head->next;
    }
    return false;
}

void display(node *temp) {
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void insertAtHead(node *&head, int data) {
    if (head == NULL) {
        head = new node(data);
        return;
    } else {
        node *newnode = new node(data);
        newnode->next = head;
        head = newnode;
    }
}

int main() {
    node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    node *temp = head;
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    display(head);
    temp->next = head;
    cout << "ContainsCycle:" << containsCycle(head) << endl;
    return 0;
}
