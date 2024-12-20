#include <iostream>
using namespace std;

struct nilai {
    int nil_mhs;
    string nama_mhs;
};

void data_mhs() {
    int nilai_raport_mhs[4] = {12, 22, 43, 55};

    // Loop through and print the values of the array
    for (int i = 0; i < 4; i++) {
        cout << "Nilai ke-" << i + 1 << ": " << nilai_raport_mhs[i] << endl;
    }
}

int main() {
    cout << "Report Nilai Mahasiswa : " << endl;
    data_mhs();
    return 0;
}
