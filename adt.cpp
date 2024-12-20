#include <iostream>
#include <string>
#include <vector> // untuk storage data
using namespace std;

struct tipe_data
{
    string nama;
    long int nomor_hp;
    string email;
};

void tambah_kontak(vector<tipe_data> &kontak_list){ // & digunakan supaya ter detect di main
    tipe_data kontak_baru;
    cout << "Masukan nama kontak : "; cin >> kontak_baru.nama;
    cout << "Masukan nomor kontak : "; cin >> kontak_baru.nomor_hp;   
    cout << "Masukan email : "; cin >> kontak_baru.email;

    kontak_list.push_back(kontak_baru); // push_back untuk menambahkan element ke vector
    cout << endl;
    cout << "kontak berhasil ditambahkan!" <<  endl;
    cout << endl;
}

void pertanyaan(int &jum_kontak){ 
    cout << "Mau tambah berapa kontak? "; cin >> jum_kontak;
}

int main(){
    vector<tipe_data> kontak_list;
    int jumlah_kontak;
    //kontak.nama = "Fa\'iz Maulana Habibi";
    //kontak.nomor_hp = +62815546778900;
    //kontak.email = "izfaha@gmail.com";
    pertanyaan(jumlah_kontak);
    if(jumlah_kontak > 0){
        for(int i = 0; i < jumlah_kontak; i++){
            tambah_kontak(kontak_list);
        }
    }
    
    // untuk menampilkan inputan diatas
    cout << endl;
    cout << "\nDaftar Nama Kontak : \n";
    cout << endl;
    for(const auto &kontak : kontak_list){
        cout << "Nama : " << kontak.nama << endl;
        cout << "Nomor : " << kontak.nomor_hp << endl;
        cout << "Email : " << kontak.email << endl;
        cout << endl;
    }
    return 0;
}
