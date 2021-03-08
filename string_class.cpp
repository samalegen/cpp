#include <iostream>

class String {
private:
    char* str = nullptr;
    size_t sz = 0;

public:
    String() {}
    String(size_t sz, char c = '\0') {
        this->sz = sz;
        str = new char[sz];
        for (size_t i = 0; i < sz; ++i) {
            str[i] = c;
        }
    }


    ~String() {
        delete[] str;
    }
};

int main() {
    String s;
    return 0;
}
