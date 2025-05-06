#include <iostream>
#include <string>
using namespace std;
class mahasiswa{
private:
    string nama;
public:
    friend void setName(mahasiswa &a, string);
};

void setNama(mahasiswa &a, string b){
    

}