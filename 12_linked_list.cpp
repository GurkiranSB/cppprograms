/*
Question:
Understand what are linked list. 
Make one, and print elements on console.


reference: https://www.codesdope.com/blog/article/c-linked-lists-in-c-singly-linked-list/





Also, read a bit from CTCI: (didn't understand the code)

class Node{
	Node next = null;
	int data;

	public Node(int d) {
		data = d;
	}

	void appendToTail(int d) {
		Node end = new Node(d);
		Node n = this;
		while (n.next != null) {
			n = n.next;
		}
		n.next = end;
	}
}




https://www.youtube.com/watch?v=iWS6qmtppcU



*/




#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *link;
};

class List{
	Node *head, *tail;
public:
	List(){
		head = NULL;
		tail = NULL;
	}
	void traverse();
	void add_node(int);
};

void List::traverse(){

}

void List::add_node(int value){
	Node *temp = new Node;
	temp->data = value;
	temp->link = NULL;

	if(head==NULL){
		head = temp;
		tail = temp;
		temp = NULL; //optional
	}
	else{
		tail->link = temp;
		tail = temp;
		temp = NULL;
	}
}

int main()
{

	return 0;
}