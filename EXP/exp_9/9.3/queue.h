//Queue.h
#ifndef QUEUE_H
#define QUEUE_H
#include"link.h"
#include<cassert>

template<class T>
class Queue {
public:
	Queue();
	void insert(const T &item);
	T remove();
	void clear();
	const T &getFront();
	bool empty() const;

private:
	int cnt;
	LinkedList<T> list;
};

template <class T>
Queue<T>::Queue() : cnt(0){};

template <class T>
void Queue<T>::insert(const T &item) {
	cnt++;
	list.insertRear(item);
}

template<class T>
T Queue<T>::remove() {
	list.reset();
	int temp = list.data();
	list.deleteFront();
	cnt--;
	return temp;
}

template<class T>
const T &Queue<T>::getFront() {
	list.reset();
	return list.data();
}

template<class T>
void Queue<T>::clear() {
	cnt = 0;
	list.clear();
}

template<class T>
bool Queue<T>::empty() const{
	return !cnt;
}
#endif  //QUEUE_H
