#include <iostream>
#include <memory>
#include <string>

using namespace std;

int main() {
    shared_ptr<string> p1;
    p1 = make_shared<string> ();
    // p1不为空，且p1指向的string为空
    if (p1 && p1->empty()) {
        *p1 = "hi";
    }
    if (p1) {
        cout << *p1 << endl;
    }
    string *ps = p1.get();
    cout << *ps << endl;
    cout << p1.unique() << endl;
    return 0;
}