#include<bits/stdc++.h>
using namespace std;


// create a node 
class Node{
    public:
    int data;
    Node *next;
};

// create a linkedlist 
class Linkedlist{

    public:
    Node *head;

// contructor to initialize the head of the linkedlist
    Linkedlist(){
        head = NULL;
    }

    // insert a node at the end of the linkedlist
    void insert(int data){
        Node *new_node = new Node();
        new_node->data = data;
        new_node->next = NULL;

        if(head == NULL){
            head = new_node;
        }else{
            Node *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    // insert a node at the beginning of the linkedlist
    void insertAtBeginning(int data){
        Node *new_node = new Node();
        new_node->data = data;
        new_node->next = head;
        head = new_node;
    }

    // insert a node at the given position of the linkedlist
    void insertAtPosition(int data, int position){
        Node *new_node = new Node();
        new_node->data = data;
        new_node->next = NULL;

        if(position == 0){
            new_node->next = head;
            head = new_node;
        }else{
            Node *temp = head;
            for(int i=0; i<position-1; i++){
                temp = temp->next;
            }
            new_node->next = temp->next;
            temp->next = new_node;
        }
    }

    // delete a node at the end of the linkedlist
    void deleteNode(){
        Node *temp = head;
        Node *prev = NULL;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        delete temp;
    }

    // delete a node at the beginning of the linkedlist
    void deleteAtBeginning(){
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    // delete a node at the given position of the linkedlist
    void deleteAtPosition(int position){
        Node *temp = head;
        Node *prev = NULL;
        if(position == 0){
            head = head->next;
            delete temp;
        }else{
            for(int i=0; i<position; i++){
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
        }
    }

    // display the linkedlist
    void display(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};

int main(){
    Linkedlist l;
    l.insert(1);
    l.display();
    
}