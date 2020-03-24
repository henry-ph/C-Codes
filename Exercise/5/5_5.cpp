#include<iostream>
using namespace std;

class Student {
public:
    Student(string _idNumber, string _name, int _chinese, int _math, int _english) : idNumber(_idNumber), name(_name), chinese(_chinese), math(_math), english(_english){
        sumChinese += chinese;
        sumMath += math;
        sumEnglish += english;
    }
    static void Average(int n);

private:
    string idNumber, name;
    int chinese, math, english;
    static int sumChinese, sumMath, sumEnglish;
};
int Student::sumChinese = 0, Student::sumMath = 0, Student::sumEnglish = 0;

void Student::Average(int n) {
    int aveChinese, aveMath, aveEnglish;
    aveChinese = sumChinese / n;
    aveMath = sumMath / n;
    aveEnglish = sumEnglish / n;
    cout << "语文平均分：" << aveChinese << endl
         << "数学平均分：" << aveMath << endl
         << "英语平均分：" << aveEnglish << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        string idNumber, name;
        int chinese, math, english;
        cin >> idNumber >> name >> chinese >> math >> english;
        Student stu(idNumber, name, chinese, math, english);
    }
    Student::Average(n);
    return 0;
}
// This program isn't correct, strange.