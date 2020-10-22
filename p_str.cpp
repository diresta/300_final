#include <iostream>

using namespace std;

class StringPointer {
private: 
    string *p_str;
    bool alloc = false;
public:
    string *operator->() {return p_str;};
    operator string*() {return p_str;};
    StringPointer(string *pointer) : p_str(pointer) {
        if (pointer == NULL)
        {
            cerr << "NULL-pointer"<< endl;
            p_str = new string();
            alloc = true;
        }
    };
    ~StringPointer() {
        if (alloc)
            delete p_str;
    }
};