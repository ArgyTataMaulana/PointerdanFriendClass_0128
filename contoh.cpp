// nama repository PointerdanFriendClass_0128 (min commit 10)
#include <iostream>
using namespace std;

class PersegiPanjang
{
    public: // akses modifier
    int Panjang, Lebar;

public: 
    void input (){
        cout << "Masukkan Panjang : ";
        cin >> Panjang;
        cout << "Masukkan Lebar : ";
        cin >> Lebar;
    }

    int luasPp(int a, int b){
        return a * b;
    }
    // lingkaran ol
};

class Lingkaran
{
public: 
    int jariJari;

    void input (){
        cout << "Masukkan Jari-jari : ";
        cin >> jariJari;
    }

    int LuasLingkaran(int r){
        return 3.14 * r * r;
    }
};

int main(){
  
}