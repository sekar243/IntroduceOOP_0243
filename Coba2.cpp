#include <iostream>
using namespace std;

class persegipanjang
{
    public:
    float panjang;
    float lebar;
    float luas;
    void inputdata(){
        cout << " input panjang : ";
        cin >> panjang;
        cout << " input lebar : ";
        cin >> lebar;
    }
    void menghitungluas(){
        luas=panjang*lebar;
        cout << "luas persegi panjang =" << luas << endl;
        
        
    }

};

int main() {


}