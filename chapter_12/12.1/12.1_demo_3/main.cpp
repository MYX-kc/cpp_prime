#include <iostream>
#include <memory>

using namespace std;

int main() {
    shared_ptr<double> p1;
    shared_ptr<double> p2(new double(10.1));
    // shared_ptr<double> p3 = new double(10.1); // error: conversion from ‘double*’ to non-scalar type ‘std::shared_ptr<double>’ requested
    int i = 0, *pi = &i;
    // shared_ptr<int> p4(pi); // 运行时，Segmentation fault
    unique_ptr<int> up(new int(10));
    shared_ptr<int> p5(std::move(up));
    cout << (up == nullptr) << endl; // 1
    return 0;
}