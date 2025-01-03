#ifndef LIST_H
#define LIST_H

#include "Node.h"
#include <iostream>
using namespace std;

template <typename T>
class List {
	Node<T>* head;
public:

	List();

	~List();

	Node<T>* getHead();

	void push(T*);

	void pop(Node<T>*);

};

template<typename T>
List<T>::List() {
	this->head = nullptr;
}

template <typename T>
List<T>::~List() {
	Node<T>* temp = nullptr;
	while (head) {
		temp = head;
		this->head = head->getNext();
		delete temp;
	}
}

template <typename T>
Node<T>* List<T>::getHead() {
	return this->head;
}

template <typename T>
void List<T>::push(T* t) {
	Node<T>* temp = new Node<T>(t);
	if (this->head == nullptr) {
		this->head = temp;
	}
	else {
		Node<T>* x = this->head;
		while (x->getNext()) {
			x = x->getNext();
		}
		x->setNext(temp);
	}
}

template <typename T>
void List<T>::pop(Node<T>* x) {
	if (this->head == x) {
		this->head = this->head->getNext();
		delete x;
	}
	else {
		Node<T>* temp = this->head;
		while (temp->getNext() != x) {
			temp = temp->getNext();
		}
		if (temp == nullptr) {
			cout << "fail!" << endl;
			return;
		}
		temp->setNext(x->getNext());
		delete x;
	}
}

#endif