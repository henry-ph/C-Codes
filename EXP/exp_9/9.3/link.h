//LinkedList.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"
#include<iostream>
using namespace std;

template <class T>
class LinkedList {
private:
	//���ݳ�Ա��
	Node<T> *front, *rear;	//��ͷ�ͱ�βָ��
	Node<T> *prevPtr, *currPtr;   //��¼����ǰ����λ�õ�ָ�룬�ɲ����ɾ����������
	int size;	//���е�Ԫ�ظ���
	int position;	//��ǰԪ���ڱ��е�λ����š��ɺ���resetʹ��

	//������Ա��
	//�����½�㣬������Ϊitem��ָ����ΪptrNext
	Node<T> *newNode(const T &item,Node<T> *ptrNext=NULL);

	//�ͷŽ��
	void freeNode(Node<T> *p);

	//������L ��������ǰ�������赱ǰ��Ϊ�գ���
	//���������캯����operator = ����
	void copy(const LinkedList<T>& L);

public:
	LinkedList();	//���캯��
	LinkedList(const LinkedList<T> &L);  //�������캯��
	~LinkedList();	//��������
	LinkedList<T> & operator = (const LinkedList<T> &L); //���ظ�ֵ�����

	int getSize() const;	//����������Ԫ�ظ���
	bool isEmpty() const;	//�����Ƿ�Ϊ��

	void reset(int pos = 0);//��ʼ���α��λ��
	void next();	//ʹ�α��ƶ�����һ�����
	bool endOfList() const;	//�α��Ƿ�����β
	int currentPosition() const;	//�����α굱ǰ��λ��

	void insertFront(const T &item);	//�ڱ�ͷ������
	void insertRear(const T &item);		//�ڱ�β���ӽ��
	void insertAt(const T &item);		//�ڵ�ǰ���֮ǰ������
	void insertAfter(const T &item);	//�ڵ�ǰ���֮�������

	T deleteFront();	//ɾ��ͷ���
	void deleteCurrent();	//ɾ����ǰ���

	T& data();				//���ضԵ�ǰ����Ա���ݵ�����
	const T& data() const;   //���ضԵ�ǰ����Ա���ݵĳ�����

	//����������ͷ����н����ڴ�ռ䡣������������operator= ����
	void clear();
};

template <class T>
Node<T> *LinkedList<T>::newNode(const T& item, Node<T>* ptrNext)	//�����½��
{
	Node<T> *p;
	p = new Node<T>(item, ptrNext);
	if (p == NULL)
	{
		cout << "Memory allocation failure!\n";
		exit(1);
	}
	return p;
}

template <class T>
void LinkedList<T>::freeNode(Node<T> *p) //�ͷŽ��
{
	delete p;
}

template <class T>
void LinkedList<T>::copy(const LinkedList<T>& L) //�������ƺ���
{
	Node<T> *p = L.front;	//P��������L 
	int pos;
	while (p != NULL)	//��L�е�ÿһ��Ԫ�ز��뵽��ǰ�������
	{
		insertRear(p->data);
		p = p->nextNode();
	}
	if (position == -1)	//���������,����
		return;
	//������������������prevPtr��currPtr
	prevPtr = NULL;
	currPtr = front;
	for (pos = 0; pos != position; pos++)
	{
		prevPtr = currPtr;
		currPtr = currPtr->nextNode();
	}
}

template <class T>  //����һ�������������й�ָ������Ϊ�գ�sizeΪ0��positionΪ-1
LinkedList<T>::LinkedList() : front(NULL), rear(NULL),
prevPtr(NULL), currPtr(NULL), size(0), position(-1)
{}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& L)  //�������캯��
{
	front = rear = NULL;
	prevPtr = currPtr = NULL;
	size = 0;
	position = -1;
	copy(L);
}

template <class T>
LinkedList<T>::~LinkedList()	//��������
{
	clear();
}

template <class T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& L)//����"="
{
	if (this == &L)	// ���ܽ�������ֵ��������
		return *this;
	clear();
	copy(L);
	return *this;
}

template <class T>
int LinkedList<T>::getSize() const	//����������С�ĺ���
{
	return size;
}

template <class T>
bool LinkedList<T>::isEmpty() const	//�ж�����Ϊ�շ�
{
	return size == 0;
}

template <class T>
void LinkedList<T>::reset(int pos)	//��������ǰλ������Ϊpos 
{
	int startPos;
	if (front == NULL)	// �������Ϊ�գ�����
		return;
	if (pos < 0 || pos > size - 1)	// ���ָ��λ�ò��Ϸ�����ֹ����
	{
		cerr << "Reset: Invalid list position: " << pos << endl;
		return;
	}
	// ��������������йصĳ�Ա
	if (pos == 0)	// ���posΪ0����ָ���������õ���ͷ
	{
		prevPtr = NULL;
		currPtr = front;
		position = 0;
	}
	else	// �������� currPtr, prevPtr, �� position 
	{
		currPtr = front->nextNode();
		prevPtr = front;
		startPos = 1;
		for (position = startPos; position != pos; position++)
		{
			prevPtr = currPtr;
			currPtr = currPtr->nextNode();
		}
	}
}

template <class T>
void LinkedList<T>::next()	//��prevPtr��currPtr��ǰ�ƶ�һ�����
{
	if (currPtr != NULL)
	{
		prevPtr = currPtr;
		currPtr = currPtr->nextNode();
		position++;
	}
}

template <class T>
bool LinkedList<T>::endOfList() const	// �ж��Ƿ��Ѵ��β
{
	return currPtr == NULL;
}

template <class T>
int LinkedList<T>::currentPosition() const  // ���ص�ǰ����λ��
{
	return position;
}

template <class T>
void LinkedList<T>::insertFront(const T& item)   // ��item�����ڱ�ͷ
{
	if (front != NULL)	// ����������������Reset 
		reset();
	insertAt(item);	// �ڱ�ͷ����
}


template <class T>
void LinkedList<T>::insertRear(const T& item)   // �ڱ�β������
{
	Node<T> *nNode;
	prevPtr = rear;
	nNode = newNode(item);	// �����½��
	if (rear == NULL)	// �������������ڱ�ͷ
		front = rear = nNode;
	else
	{
		rear->insertAfter(nNode);
		rear = nNode;
	}
	currPtr = rear;
	position = size;
	size++;
}


template <class T>
void LinkedList<T>::insertAt(const T& item)	// ��item������������ǰλ��
{
	Node<T> *nNode;
	if (prevPtr == NULL)	// ����������ͷ�������������뵽�ձ���
	{
		nNode = newNode(item, front);
		front = nNode;
	}
	else	// ���뵽����֮��. ���������prevPtr֮��
	{
		nNode = newNode(item);
		prevPtr->insertAfter(nNode);
	}
	if (prevPtr == rear)	//������ձ��в��룬�����ǲ��뵽�ǿձ��ı�β
	{
		rear = nNode;	//����rear 
		position = size;	//����position 
	}
	currPtr = nNode;	//����currPtr
	size++;	//ʹsize��ֵ
}


template <class T>
void LinkedList<T>::insertAfter(const T& item)  // ��item ���뵽������ǰλ��֮��
{
	Node<T> *p;
	p = newNode(item);
	if (front == NULL)	 // ��ձ��в���
	{
		front = currPtr = rear = p;
		position = 0;
	}
	else	// ���뵽���һ�����֮��
	{
		if (currPtr == NULL)
			currPtr = prevPtr;
		currPtr->insertAfter(p);
		if (currPtr == rear)
		{
			rear = p;
			position = size;
		}
		else
			position++;
		prevPtr = currPtr;
		currPtr = p;
	}
	size++;              // ʹ����������ֵ
}


template <class T>
T LinkedList<T>::deleteFront()	// ɾ����ͷ���
{
	T item;
	reset();
	if (front == NULL)
	{
		cerr << "Invalid deletion!" << endl;
		exit(1);
	}
	item = currPtr->data;
	deleteCurrent();
	return item;
}


template <class T>
void LinkedList<T>::deleteCurrent()	// ɾ��������ǰλ�õĽ��
{
	Node<T> *p;
	if (currPtr == NULL)	// ������ջ�ﵽ��β�����
	{
		cerr << "Invalid deletion!" << endl;
		exit(1);
	}
	if (prevPtr == NULL)	// ɾ���������ڱ�ͷ������֮��
	{
		p = front;	// ����ͷ����ַ
		front = front->nextNode();	//����������з���
	}
	else	//����prevPtr֮���һ���ڲ���㣬�������ַ
		p = prevPtr->deleteAfter();

	if (p == rear)	// �����β��㱻ɾ��
	{
		rear = prevPtr;	//�µı�β��prevPtr 
		position--;	//position�Լ�
	}
	currPtr = p->nextNode();	// ʹcurrPtrԽ����ɾ���Ľ��
	freeNode(p);	// �ͷŽ�㣬��
	size--;	//ʹ���������Լ�
}

template <class T>
T& LinkedList<T>::data()	//����һ����ǰ�����ֵ������
{
	if (size == 0 || currPtr == NULL)	// �������Ϊ�ջ��Ѿ���ɱ��������
	{
		cerr << "Data: invalid reference!" << endl;
		exit(1);
	}
	return currPtr->data;
}

template <class T>
void LinkedList<T>::clear()	//�������
{
	Node<T> *currPosition, *nextPosition;
	currPosition = front;
	while (currPosition != NULL)
	{
		nextPosition = currPosition->nextNode(); //ȡ����һ���ĵ�ַ
		freeNode(currPosition);	//ɾ����ǰ���
		currPosition = nextPosition;	//��ǰָ���ƶ�����һ���
	}
	front = rear = NULL;
	prevPtr = currPtr = NULL;
	size = 0;
	position = -1;
}


#endif  //LINKEDLIST_H
