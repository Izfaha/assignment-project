#include <iostream>
using namespace std;

struct nilai
{
    int nil_mhs;
    string nama_mhs;
};

void data_mhs(){
    int nilai_raport_mhs[4]={12, 22, 43, 55};
    cout << nilai_raport_mhs << endl;
}

int main(){
    data_mhs();
    return 0;
}