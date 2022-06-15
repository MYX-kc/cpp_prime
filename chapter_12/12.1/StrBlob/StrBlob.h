#ifndef STRBLOB
#define STRBLOB

#include <vector>
#include <string>
#include <memory>
#include <initializer_list>
#include <iostream>

class StrBlob {
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    explicit StrBlob(std::initializer_list<std::string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const std::string &str) { data->push_back(str); }
    void pop_back();
    std::string &front() const;
    std::string &back() const;
    void debug() const {
        for (auto &s : *data) {
            std::cout << s << " ";
        }
        std::cout << std::endl;
    }
private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const; 
};

#endif