#include <iostream>
#include <string>
using namespace std;
class mahasiswa{
    string nama;
public:
    friend void setName(mahasiswa &a, string);
};

