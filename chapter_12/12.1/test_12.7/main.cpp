/*
    函数一：返回一个动态分配内存的int的vector，将此vector传递给函数二
    函数二：读取标准输入，读入的值保存在vector中，将vector传递给函数三
    函数三：打印函数二中读入的值
*/

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> f1();
shared_ptr<vector<int>> f2(shared_ptr<vector<int>>);
void f3(shared_ptr<vector<int>>);

int main() {
    f3(f2(f1()));
    return 0;
}

shared_ptr<vector<int>> f1() {
    return make_shared<vector<int>>();
}

shared_ptr<vector<int>> f2(shared_ptr<vector<int>> pv) {
    int i = 0;
    while (cin >> i) {
        pv->push_back(i);
    }
    return pv;
}

void f3(shared_ptr<vector<int>> pv) {
    for (int i : *pv) {
        cout << i << endl;
    }
}