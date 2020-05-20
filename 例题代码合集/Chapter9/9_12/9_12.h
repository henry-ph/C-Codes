//9_12.h
#ifndef HEADER_9_12_H
#define HEADER_9_12_H

//��������������x��y��ֵ
template <class T>
void mySwap(T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}

//��ѡ�񷨶�����a��n��Ԫ�ؽ�������
template <class T>
void selectionSort(T a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int leastIndex = i;	//��СԪ��֮�±��ֵ��Ϊi
		for (int j = i + 1; j < n; j++)	//��Ԫ��a[i + 1]..a[n - 1]������Ƚ��Գ���Сֵ
			if (a[j] < a[leastIndex])	//smallIndexʼ�ռ�¼��ǰ�ҵ�����Сֵ���±�
				leastIndex = j;
		mySwap(a[i], a[leastIndex]);	//����һ���ҵ�����СԪ����a[i]����
	}
}
#endif	//HEADER_9_12_H
