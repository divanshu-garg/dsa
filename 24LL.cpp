#include<iostream>
using namespace std;


class Node {
    public:
        int data;
        Node* next;
    
        Node(int val) {
            data = val;
            next = nullptr;
        }
    };

class LinkedList{
    void insertHead(){
}


};

int find(Node* head, int k){
    Node* p1, *p2;
    p1 = head;
    for(int i = 0; i<k;i++){
        head=head->next;
        p2 = head;
    }
    while(p2 !=nullptr){
        p2=p2->next;
        p1=p1->next;
    }

    return p1->data;
}

int search(Node* head, int target){
    Node* cur = head;
    int i = 0;
    while(cur->next!=nullptr){
        if(cur->data == target){
            return i;
        }
        i++;
        cur = cur->next;
    }
    return -1;
}

int main(){


    return 0;
}