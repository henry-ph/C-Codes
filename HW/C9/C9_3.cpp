#include <iostream>
#include <string>
using namespace std;
 
template<class T, int MAX = 1000>
class Stack
{
private:
       T list[MAX + 1];
public:
    int top;
       Stack() : top(0){};
       void push(const T &item);//将item压栈
       T pop();//将栈顶元素弹出栈
       const T & peek() const;//访问栈顶元素
       bool isEmpty() const;//判断是否栈空
};
//请完成栈模板类的实现，并解决括号匹配问题

template<class T, int MAX>
void Stack<T, MAX>::push(const T &item) {
    list[top++] = item;
}

template<class T, int MAX> 
T Stack<T, MAX>::pop() {
    return list[--top];
}

template<class T, int MAX>
const T& Stack<T, MAX>::peek() const {
    return list[top - 1];
}

template<class T, int MAX>
bool Stack<T, MAX>::isEmpty() const {
    return top == 0;
}

char ans[2][5] = {"No", "Yes"};
int main() {
    string s;
    Stack<char> st;
    cin >> s;
    string::iterator it;
    for (it = s.begin(); it != s.end(); ++it) {
        if (*it == '(')
            st.push(*it);
        if (*it == ')') {
            if (st.isEmpty()) {
                cout << "No" << endl;
                return 0;
            }
            else
                st.pop();
        }
    }
    cout << ans[st.isEmpty()] << endl;
    return 0;
}