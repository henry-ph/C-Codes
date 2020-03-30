#include<iostream>
using namespace std;
enum CPU_Rank {P1 = 1, P2, P3, P4, P5, P6,P7};

class CPU {
public:
    CPU(CPU_Rank r = P2, int f = 2, float v = 3): rank(r), frequency(f), voltage(v) {
        cout << "Using CPU constructor now." << endl;
    }
    CPU(const CPU &p): rank(p.rank), frequency(p.frequency), voltage(p.voltage) {
        cout << "Using CPU copy constructor now." << endl;
    }
    ~CPU() {
        cout << "Using CPU destructor now." << endl; 
    }
    CPU_Rank getRank() const { return rank; }
    int getFrequency() const { return frequency; }
private:
    CPU_Rank rank;
    int frequency;
    float voltage;
};

class RAM {
public:
    RAM(int r): ram(r) {
        cout << "Using RAM constructor now." << endl;
    }
    RAM(): ram(0) {
        cout << "Using RAM default constructor now." << endl;
    }
    RAM(const RAM &p): ram(p.ram) {
        cout << "Using RAM copy constructor now." << endl;
    }
    ~RAM() {
        cout << "Using RAM destructor now." << endl;
    }

private: 
    int ram;
};

class CDROM {
public:
    CDROM(int d): cdrom(d) {
        cout << "Using CDROM constructor now." << endl;
    }
    CDROM() {
        cout << "Using CDROM default constructor now." << endl;
    } 
    CDROM(const CDROM &p): cdrom(p.cdrom) {
        cout << "Using CDROM copy constructor now." << endl;
    }
    ~CDROM() {
        cout << "Using CDROM destructor now." << endl;
    } 

private:
    int cdrom;
};

class Computer {
public:
    Computer(CPU c, RAM r, CDROM cd);
    Computer();
    Computer(const Computer &p);
    ~Computer();
    int showCPUFre();

private:
    CPU cpu;
    RAM ram;
    CDROM cdrom;
};

inline Computer:: Computer(CPU c, RAM r, CDROM cd): cpu(c), ram(r), cdrom(cd) {
    cout << "Using Computer constructor now." << endl;
}

inline Computer:: Computer(): cpu(P3, 100, 2.3), ram(20), cdrom(30) {
    cout << "Using Computer default constructor now." << endl;
}

inline Computer:: Computer(const Computer &p): cpu(p.cpu), ram(p.ram), cdrom(p.cdrom) {
    cout << "Using Computer copy constructor now." << endl;
}

inline Computer:: ~Computer() {
    cout << "Using Computer destructor now." << endl;
}

int Computer:: showCPUFre() {
    cout << "CPU frequency is" << cpu.getFrequency() << endl;
    return cpu.getFrequency();
}

int main() {
    CPU CPUObject(P6, 300, 2.8);
    RAM RAMObject(1);
    CDROM CDROMObject(2);
    Computer Computer_2(CPUObject, RAMObject, CDROMObject);
    Computer &Computer_3 = Computer_2;
    Computer_2.showCPUFre();
    cout << "Over!" << endl;
    return 0;
}