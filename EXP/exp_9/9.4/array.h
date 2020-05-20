//Array.h
#ifndef ARRAY_H
#define ARRAY_H

#include <cassert>
#include<cmath>

//������ģ�嶨��
template <class T> 
class Array {
private:
	T* list;	//T����ָ�룬���ڴ�Ŷ�̬����������ڴ��׵�ַ
	int size;	//�����С��Ԫ�ظ�����
public:
	Array(int sz = 50);			//���캯��
	Array(const Array<T> &a);	//�������캯��
	~Array();	//��������
	Array<T> & operator = (const Array<T> &rhs); //����"="ʹ�������������帳ֵ
	T & operator [] (int i);	//����"[]"��ʹArray���������C++��ͨ���������
	const T & operator [] (int i) const;	//"[]"�������const�汾
	operator T * ();	//���ص�T*���͵�ת����ʹArray���������C++��ͨ���������
	operator const T * () const;	//��T*����ת����������const�汾
	int getSize() const;	//ȡ����Ĵ�С
	void resize(int sz);	//�޸�����Ĵ�С
	void insertionSort();
	void selectionSort();
	void bubbleSort();
	int seqSearch(const T &key);
};

//���캯��
template <class T>
Array<T>::Array(int sz) {
	assert(sz >= 0);	//szΪ�����С��Ԫ�ظ�������Ӧ���Ǹ�
	size = sz;	// ��Ԫ�ظ�����ֵ������size
	list = new T [size];	//��̬����size��T���͵�Ԫ�ؿռ�
}

//��������
template <class T>
Array<T>::~Array() {
	delete [] list;
}

//�������캯��
template <class T>
Array<T>::Array(const Array<T> &a) {
	//�Ӷ���xȡ�������С������ֵ����ǰ����ĳ�Ա
	size = a.size;
	//Ϊ���������ڴ沢���г������
	list = new T[size];	// ��̬����n��T���͵�Ԫ�ؿռ�
	//�Ӷ���X��������Ԫ�ص�������  
	for (int i = 0; i < size; i++)
		list[i] = a.list[i];
}

//����"="�������������rhs��ֵ��������ʵ�ֶ���֮������帳ֵ
template <class T>
Array<T> &Array<T>::operator = (const Array<T>& rhs) {
	if (&rhs != this) {
		//����������������С��rhs��ͬ����ɾ������ԭ���ڴ棬Ȼ�����·���
		if (size != rhs.size) {
			delete [] list;		//ɾ������ԭ���ڴ�
			size = rhs.size;	//���ñ�����������С
			list = new T[size];	//���·���n��Ԫ�ص��ڴ�
		}
		//�Ӷ���X��������Ԫ�ص�������  
		for (int i = 0; i < size; i++)
			list[i] = rhs.list[i];
	}
	return *this;	//���ص�ǰ���������
}

//�����±��������ʵ������ͨ����һ��ͨ���±����Ԫ�أ����Ҿ���Խ���鹦��
template <class T>
T &Array<T>::operator[] (int n) {
	assert(n >= 0 && n < size);	//����±��Ƿ�Խ��
	return list[n];			//�����±�Ϊn������Ԫ��
}

template <class T>
const T &Array<T>::operator[] (int n) const {
	assert(n >= 0 && n < size);	//����±��Ƿ�Խ��
	return list[n];			//�����±�Ϊn������Ԫ��
}

//����ָ��ת�����������Array��Ķ�����ת��ΪT���͵�ָ�룬
//ָ��ǰ�����е�˽�����顣
//���������ʹ����ͨ�����׵�ַһ��ʹ��Array��Ķ�����
template <class T>
Array<T>::operator T * () {
	return list;	//���ص�ǰ������˽��������׵�ַ
}

template <class T>
Array<T>::operator const T * () const {
	return list;	//���ص�ǰ������˽��������׵�ַ
}

//ȡ��ǰ����Ĵ�С
template <class T>
int Array<T>::getSize() const {
	return size;
}

// �������С�޸�Ϊsz
template <class T>
void Array<T>::resize(int sz) {
	assert(sz >= 0);	//���sz�Ƿ�Ǹ�
	if (sz == size)	//���ָ���Ĵ�С��ԭ�д�Сһ����ʲôҲ����
		return;
	T* newList = new T [sz];	//�����µ������ڴ�
	int n = (sz < size) ? sz : size;	//��sz��size�н�С��һ����ֵ��n
	//��ԭ��������ǰn��Ԫ�ظ��Ƶ���������
	for (int i = 0; i < n; i++)
		newList[i] = list[i];
	delete[] list;		//ɾ��ԭ����
	list = newList;	// ʹlistָ��������
	size = sz;	//����size
}

template <class T>
void Array<T>::insertionSort() {
	int i, j;
	T temp;

	//���±�Ϊ1��n-1��Ԫ��������뵽�������������ʵ���λ��
	for (int i = 1; i < size; i++) {
		//��a[i - 1]��ʼ��a[0]����ɨ���Ԫ��,Ѱ���ʵ�λ�ò���a[i]
		int j = i;
		T temp = list[i];
		while (j > 0 && temp < list[j - 1]) {
			//����Ƚϣ�ֱ��temp >= a[j - 1]ʱ��j����Ӧ�����λ�á�
			//���ﵽj == 0����0��Ӧ�����λ�á�
			list[j] = list[j - 1];    //��Ԫ��������ƣ��Ա��ҵ�����λ��ʱ���������롣
			j--;
		}
		//����λ�����ҵ����������롣
		list[j] = temp;
	}
}

template <class T>
void Array<T>::selectionSort() {
	for (int i = 0; i < size - 1; i++) {
		int leastIndex = i;	//��СԪ��֮�±��ֵ��Ϊi
		for (int j = i + 1; j < size; j++)	//��Ԫ��a[i + 1]..a[n - 1]������Ƚ��Գ���Сֵ
			if (list[j] < list[leastIndex])	//smallIndexʼ�ռ�¼��ǰ�ҵ�����Сֵ���±�
				leastIndex = j;
		std::swap(list[i], list[leastIndex]);	//����һ���ҵ�����СԪ����a[i]����
	}
}

template <class T>
void Array<T>::bubbleSort() {
	int i = size - 1;	// i����һ����������򽻻���Ԫ��֮����±�
	while (i > 0) {	//����������̣�ֱ�����һ������û�н������������Ѵ�n - 1��
		int lastExchangeIndex = 0;	//ÿһ�˿�ʼʱ�����ý�����־Ϊ0��δ������
		for (int j = 0; j < i; j++)	//ÿһ�˶�Ԫ��a[0]..a[i]���бȽϺͽ���
			if (list[j + 1] < list[j]) {	//���Ԫ��a[j + 1] < a[j]������֮
				swap(list[j], list[j + 1]);
				lastExchangeIndex = j;	//��¼��������һ��Ԫ���н�С���±�
			}
		i = lastExchangeIndex;	//��i����Ϊ���˱����������һ��Ԫ���н�С���±�
	}
}

template <class T>
int Array<T>::seqSearch(const T &key) {
	for(int i = 0; i < size; i++)
		if (list[i] == key)
			return i;            
	return -1;                 
}

#endif  //ARRAY_H
