#include <memory>
#include <string>
#include <iostream>

using namespace std;

struct destination {
    destination(const string &s) : s(s) { }
    string s;
};
struct connection {
    connection(destination *pd) : s(pd->s) { }
    string s;
};
connection connect(destination *pd) {
    return connection(pd);
}
void disconnect(connection) {
    cout << "disconnect success" << endl;
}

void end_connection(connection *p) {
    disconnect(*p);
}

int main() {
    connection c = connect(new destination("m"));
    //shared_ptr<connection> pp(&c, end_connection); // 14
    shared_ptr<connection> pp(&c, [](connection *p) -> void { disconnect(*p); }); //15
    return 0;
}
