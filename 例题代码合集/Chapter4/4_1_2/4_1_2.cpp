#include <iostream>	
using namespace std;

class Clock { //ʱ����Ķ���
public:		//�ⲿ�ӿڣ����г�Ա����
	Clock(int newH, int newM, int newS);	//���캯��
	Clock(); //Ĭ�Ϲ��캯��
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
private:	//˽�����ݳ�Ա
	int hour, minute, second;
};
Clock::Clock() : hour(0), minute(0), second(0) { }//Ĭ�Ϲ��캯��
Clock::Clock(int newH, int newM, int newS) : hour(newH), minute(newM), second(newS) {
}

//ʱ�����Ա�����ľ���ʵ��
void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

inline void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}
int main() {
	Clock c(0, 0, 0); //�Զ����ù��캯��
	Clock c2;
	c.showTime();
	return 0;
}
