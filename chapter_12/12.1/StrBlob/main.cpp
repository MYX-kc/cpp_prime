#include <iostream>
#include <string>
#include "StrBlob.h"

using namespace std;

int main() {
    StrBlob sb = { "a", "b", "c"};
    sb.debug(); // a b c
    cout << sb.size() << endl; // 3
    cout << sb.empty() << endl; // 0
    sb.push_back("d");
    sb.debug(); // a b c d
    sb.pop_back();
    sb.debug(); // a b c
    cout << sb.front() << endl; // a
    cout << sb.back() << endl; // c
    StrBlob sb1 = sb;
    sb1.debug(); // a b c
    return 0;
}