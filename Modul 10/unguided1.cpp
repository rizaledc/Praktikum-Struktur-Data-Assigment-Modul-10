#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

vector<string> Rizal_2311110029; // mengganti nama 'simpul' menjadi 'Rizal_2311110029'
vector<vector<int>> busur;
unordered_map<string, int> kotaIndex;

// Fungsi untuk mengisi nama-nama kota ke dalam vektor Rizal_2311110029 dan membuat mapping indeks kota
void isiRizal_2311110029(int jumlahSimpul) { 
    string namaKota;
    cout << "Masukkan nama-nama kota:" << endl;
    cin.ignore(); // untuk mengabaikan karakter newline dari input sebelumnya
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << "Nama kota " << i + 1 << ": ";
        getline(cin, namaKota);
        Rizal_2311110029.push_back(namaKota);
        kotaIndex[namaKota] = i; // simpan indeks kota
    }
    busur.resize(jumlahSimpul, vector<int>(jumlahSimpul, 0));
}

void isiBusur() {
    int jarak;
    cout << "Masukkan jarak antar kota (0 jika tidak ada jalur langsung):" << endl;
    for (size_t i = 0; i < Rizal_2311110029.size(); i++) { 
        for (size_t j = 0; j < Rizal_2311110029.size(); j++) {
            if (i != j) {
                cout << "Jarak dari " << Rizal_2311110029[i] << " ke " << Rizal_2311110029[j] << ": ";
                cin >> jarak;
                busur[i][j] = jarak;
            }
        }
    }
}

void tampilGraph() {
    cout << left << setw(12) << "Kota Asal" << " | ";
    for (const auto& kota : Rizal_2311110029) {  
        cout << setw(10) << kota << " | ";
    }
    cout << endl;

    for (size_t i = 0; i < Rizal_2311110029.size(); i++) { 
        cout << left << setw(12) << Rizal_2311110029[i] << " | "; 
        for (size_t j = 0; j < Rizal_2311110029.size(); j++) {
            cout << setw(10) << busur[i][j] << " | ";
        }
        cout << endl;
    }
}

// Fungsi untuk menghitung total jarak perjalanan berdasarkan rute kota yang dipilih
int hitungJarak(const vector<string>& perjalanan) {
    int totalJarak = 0;
    for (size_t i = 0; i < perjalanan.size() - 1; i++) {
        int asal = kotaIndex[perjalanan[i]];
        int tujuan = kotaIndex[perjalanan[i + 1]];
        totalJarak += busur[asal][tujuan];
    }
    return totalJarak;
}

int main() {
    int jumlahSimpul;
    cout << "Masukkan jumlah kota: ";
    cin >> jumlahSimpul;

    isiRizal_2311110029(jumlahSimpul); 
    isiBusur();
    tampilGraph();

    int jumlahPerjalanan;
    cout << "Masukkan jumlah kota dalam perjalanan: ";
    cin >> jumlahPerjalanan;
    vector<string> perjalanan(jumlahPerjalanan);
    cout << "Masukkan nama-nama kota dalam perjalanan:" << endl;
    for (int i = 0; i < jumlahPerjalanan; i++) {
        cout << "Kota " << i + 1 << ": ";
        cin >> perjalanan[i];
    }

    int jarakTotal = hitungJarak(perjalanan);
    cout << "Jarak total perjalanan: ";
    for (const auto& kota : perjalanan) {
        cout << kota << " ";
    }
    cout << "adalah " << jarakTotal << " km" << endl;

    return 0;
}
