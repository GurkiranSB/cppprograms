/*
Question:
Understand what are linked list. 
Make one, and print elements on console.


reference: https://www.codesdope.com/blog/article/c-linked-lists-in-c-singly-linked-list/
^Understood little from here




Next, read a bit from CTCI: (didn't understand the code)

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
^This video is regarding Inserting Nodes at the end and transversing. Code written from here. 
Wrote in comments what I understood.


*/




#include<iostream>
using namespace std;
//First write a structure. This will help create the two parts of the node - data and link to next node.
struct Node{
	int data;//The data part of the node
	Node *link;// A pointer of the type 'Node' is created to store the address of the next node.(Hence the type node)
};
//Now a class list is created to help organize the node. This class helps organizing the list of data. 
class List{
	Node *head, *tail;//Two pointers created to point to the first and the last nodes. These are private to the class
public:
	List(){//This is a constructor. So when an object of the class is created, this function will auto execute.
		head = NULL;//Initialize the pointers as null. 
		tail = NULL;
	}
	void transverse();
	void add_node(int);
};

void List::transverse(){//Prints values of the nodes
	Node *temp = head;//start at first node

	while(temp != NULL){//print data corresponding to node address and go to next node till link is null. That is end of list.
		cout << temp->data<<endl;
		temp = temp->link;
	}
}

void List::add_node(int value){//Adds a node containing the value passed to it
	Node *temp = new Node;//Temp pointer created. Which points to a new structure variable(?), ie new node.
	temp->data = value;//Set the value in the node pointed by temp as the value passed to this function.
	temp->link = NULL;//Set the link as null initially.

	if(head==NULL){//If this is the first node created, set the head and tail both as this node's address
		head = temp;
		tail = temp;
		temp = NULL; //optional
	}
	else{//If this is second, third, etc node. 
		tail->link = temp;// Set previous tail's corresponding link value as temp. Syntax important.
		tail = temp; // then rightly set new tail as temp, that is new node's address.
		temp = NULL;//optional
	}
}

int main()
{
	List mylist;//Create an object of the class List. The constructor will auto execute. null values assigned to head and tail.
	for(int i=1; i<=10; i++){
		mylist.add_node(i);//Create 10 nodes with the values from 1 to 10.
	}
	mylist.transverse();//Call the function to print the values in all the nodes.
	//system('pause');
	return 0;
}