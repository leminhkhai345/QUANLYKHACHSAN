#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
	T* t;
	Node<T>* next;
public:

	Node(T*);

	~Node();

	T* getValue();

	Node<T>* getNext();

	void setNext(Node<T>*);

};

template <typename T>
Node<T>::Node(T* t) : t(t), next(nullptr) {

}

template <typename T>
Node<T>::~Node() {

}
template <typename T>
T* Node<T>::getValue() {
	return this->t;
}

template <typename T>
Node<T>* Node<T>::getNext() {
	return this->next;
}

template <typename T>
void Node<T>::setNext(Node<T>* next) {
	this->next = next;
}


#endif