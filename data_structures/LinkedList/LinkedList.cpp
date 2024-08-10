//============================================================================
// Name        : Test.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
// Example program
#include <iostream>
#include <string>

using namespace std;

struct Node{
    Node *next;
    int data;
};

void initNode(Node *node, int n){
    node->data = n;
    node->next= NULL;
}

void display(Node *head){
    Node *temp = head;
    while(temp){
            cout<<temp->data<<"\t";
            temp = temp->next;
    }
}
//As head needs to be changed need to use double pointer otherwise head need to be explicitly returned.
void insertFront(Node **head, int n){
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = *head;
    *head = newNode;
}

void appendNode(Node *head, int n){
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;
	Node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

Node *searchNode(Node *head, int n){
	Node *temp = head;
	while(temp){
		if(temp->data == n){
			return temp;
		}
		temp = temp->next;
	}
	cout<<"No such node present"<<endl;
	return NULL;
}


Node deleteNode(){

}
int main()
{
     Node *head = new Node;
     initNode(head,10);
     insertFront(&head,20);
     insertFront(&head,30);
     appendNode(head,40);
     display(head);
     searchNode(head,5);
     searchNode(head,20);

     return 0;
}

