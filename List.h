#ifndef LIST_H
#define LIST_H

#include<iostream>

#include "LISTNODE.h"

using std::cout;
using std::endl;

template<class NODETYPE>
class List {
private:
	ListNode<NODETYPE>* first;
	ListNode<NODETYPE>* last;
	ListNode<NODETYPE>* getnewNode(const NODETYPE&);
public:
	List();
	~List();
	void insertAtFront(const NODETYPE&);
	void insertAtBack(const NODETYPE&);
	bool removeFromFront(NODETYPE&);
	bool removeFromBack(NODETYPE&);
	bool isEmpty() const;
	void print() const;
};

template<class NODETYPE>
List<NODETYPE>::List():first(0),last(0) {}

template<class NODETYPE>
List<NODETYPE>::~List() {
	if (!isEmpty()) {
		ListNode<NODETYPE>* current = first;
		ListNode<NODETYPE>* temp;
		while (current) {
			temp = current;
			current = current->nextPtr;
			delete temp;
		}
	}
	cout << "All Nodes are Destroyed...\n";
}

template<class NODETYPE>
void List<NODETYPE>::insertAtFront(const NODETYPE& value) {
	ListNode<NODETYPE>* newNode = getnewNode(value);
	if (isEmpty()) {
		first = last = newNode;
	}
	else {
		newNode->nextPtr = first;
		first = newNode;
	}
}

template<class NODETYPE>
void List<NODETYPE>::insertAtBack(const NODETYPE& value) {
	ListNode<NODETYPE>* newNode = getnewNode(value);
	if (isEmpty()) {
		first = last = newNode;
	}
	else {
		last->nextPtr = newNode;
		last = newNode;
	}
}

template<class NODETYPE>
bool List<NODETYPE>::removeFromFront(NODETYPE& value) {
	if (isEmpty())
		return false;
	else {
		ListNode<NODETYPE>* tempPtr = first;
		value = first->data;
		if (first == last)
			first = last = 0;
		else
			first = first->nextPtr;

		delete tempPtr;
		return true;
	}
}

template<class NODETYPE>
bool List<NODETYPE>::removeFromBack(NODETYPE& value) {
	if (isEmpty())
		return false;
	else {
		ListNode<NODETYPE>* tempPtr = last;
		ListNode<NODETYPE>* current = first;
		if (first == last)
			first = last = 0;
		else {
			while (current->nextPtr != tempPtr) {
				current = current->nextPtr;
			}
			current->nextPtr = NULL;
			last = current;
		}
		value = tempPtr->data;
		delete tempPtr;
		return true;
	}
}

template<class NODETYPE>
bool List<NODETYPE>::isEmpty() const {
	return first == 0;
}

template<class NODETYPE>
void List<NODETYPE>::print() const {
	ListNode<NODETYPE>* current = first;
	if (isEmpty()) {
		return;
	}
	cout << "The List is : ";
	while (current) {
		cout << current->data << " ";
		current = current->nextPtr;
	}
	cout << endl;
}

template<class NODETYPE>
ListNode<NODETYPE>* List<NODETYPE>::getnewNode(const NODETYPE& value) {
	return new ListNode<NODETYPE>(value);
}


#endif // !LIST_H
