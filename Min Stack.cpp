#include <iostream>
#include <vector>
using namespace std;

// 提交代码开始
class MinStack {
private:
    vector<int> stack;
    vector<int> stackMin;
public:
    void push(int x) {
        stack.push_back(x);
        if (stackMin.empty() || stackMin[stackMin.size() - 1] >= x) stackMin.push_back(x);
        return;
    }

    void pop() {
        int top = stack[stack.size() - 1];
        stack.pop_back();
        if (top == stackMin[stackMin.size() - 1]) stackMin.pop_back();
        return;
    }

    int top() {
        return stack[stack.size() - 1];
    }

    int getMin() {
        return stackMin[stackMin.size() - 1];
    }
}; 
// 提交代码结束

int main() {
    MinStack ms;

	// 检查结果是否正确
    ms.push(1);
    cout << ms.top() << endl;

	return 0;
}