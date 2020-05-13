#include<iostream>

using namespace std;

class Vehicle
{
public:
	int MaxSpeed, Weight;
	//void Run() {cout << "vehicle run!" << endl;}
	//void Stop() {cout << "vehicle stop!" << endl;}
	virtual void Run() {cout << "vehicle run!" << endl;}
	virtual void Stop() {cout << "vehicle stop!" << endl;}
};

class Bicycle : virtual public Vehicle
{
public:
	int Height;
	void Run() {cout << "bicycle run!" << endl;}
	void Stop() {cout << "bicycle stop!" << endl;}
};

class Motorcar : virtual public Vehicle{
public:
    void Run() {cout << "motorcar run!" << endl;}
	void Stop() {cout << "motorcar stop!" << endl;}
};

class Motorcycle : public Bicycle, public Motorcar{
public:
    void Run() {cout << "motorcycle run!" << endl;}
	void Stop() {cout << "motorcycle stop!" << endl;}
};

int main()
{
	Vehicle v;
	v.Run();
	Bicycle b;
	b.Run();
	Motorcar m;
	m.Run();
	Motorcycle mc;
	mc.Run();
	Vehicle* vp = &v;
    vp->Run();
    return 0;
}

