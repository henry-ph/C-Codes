#include <iostream>
using namespace std;
enum CPU_Rank {P1 = 1, P2, P3, P4, P5, P6,P7};
class CPU {
public:
    CPU(CPU_Rank r, int f, float v) {
        rank = r;
        frequency = f;
        voltage = v;
        cout << "A CPU has been constructed!" << endl;
    }
    CPU(const CPU& p): rank(p.rank), frequency(p.frequency), voltage(p.voltage) {
        cout << "CPU copy" << endl;
    }
    ~CPU() { cout << "A CPU has been destructed!" << endl; }
    CPU_Rank GetRank() const { return rank; }
    int GetFrequency() const { return frequency; }
    float GetVoltage() const { return voltage; }
    void SetRank(CPU_Rank r) { rank = r; }
    void SetFrequency(int f) { frequency = f; }
    void SetVoltage(float v) { voltage = v; }
    void Run() { cout << "CPU starts running!" << endl; }
    void Stop() { cout << "CPU stops running!" << endl; }
private:
    CPU_Rank rank;
    int frequency;
    float voltage;
};
int main()
{
    CPU a(P6, 300, 2.8);
    CPU &b = a;
    return 0;
}