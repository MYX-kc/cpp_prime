#include <iostream>

using namespace std;

int main() {
    int i = 10;
    // delete i; // 编译器报错：表达式必须是指向完整对象类型的指针
    int *pi = &i;
    // delete pi; // 编译报错：warning: ‘void operator delete(void*)’ called on unallocated object ‘i’
    int *pn = nullptr;
    delete pn;
    int *p1 = new int(33);
    int *p2 = p1;
    delete p1;
    // delete p2; // 运行出错：free(): double free detected in tcache 2, Aborted
    const int *p3 = new int(33);
    delete p3;
    return 0;
}