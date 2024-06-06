# <h1 align="center">Laporan Praktikum Modul Graph dan Tree</h1>

<p align="center">Rizal Wahyu Pratama</p>
<p align="center">2311110029</p>
<p align="center">S1SD-04-B</p>

## Tujuan Praktikum

 a. Mahasiswa diharapkan mampu memahami graph dan tree
 
 b. Mahasiswa diharapkan mampu mengimplementasikan graph dan tree pada
 pemrograman
 
## Dasar Teori

### A. Graph

Graf adalah salah satu materi dalam matematika diskrit, graf digunakan untuk memberikan visualisasi atau gambaran antar objek yang disimbolkan dengan titik dan dihubungkan dengan garis [1]. Graph terdiri dari sekumpulan node  yang  dihubungkan dengan sekumpulan arc. Notasi untuk mendeskripsikan suatu graph adalah ( , ), dimana  adalah sekumpulan node (vertex) dan  adalah sekumpulan dari arc (edge) dengan nilai-nilai yang berasosiasi pada setiap node [2]. Berikut ilustrasinya:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/ContohGrap.png" alt="Alt Text">
</p> 
<p align="center">
 Gambar 1. Ilustrasi Graf
</p> 

Aplikasi Graf dalam Kehidupan Sehari-Hari:
1. Jaringan transportasi: Graf digunakan untuk merepresentasikan rute perjalanan.
2. Google Maps: Graf membantu menemukan rute terpendek.
3. State-transition diagram: Graf mewakili state dan transisinya.
4. Pemecahan teka-teki: Graf digunakan untuk memecahkan teka-teki dengan hanya satu solusi, seperti labirin.
5. Jaringan komunikasi, listrik, dan sosial: Graf sering digunakan dalam studi tentang jaringan ini.
6. Pemodelan jaringan transportasi: Graf membantu memodelkan dan mengoptimalkan rute transportasi.
7. Pengoptimalan rute pengiriman: Graf digunakan untuk mencari rute pengiriman yang optimal

### B. Jenis-Jenis Graf

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/Jenis%20Graph.png" alt="Alt Text">
</p> 
<p align="center">
 Gambar 2. Gambar Jenis-Jenis Graf
</p> 

Dari gambar di atas, kita mengetahui ada 3 jenis graf diantaranya:

- Directed Graf yang sering disebut dengan graf berarah dimana urutan setiap simpulnya memiliki arti dan arah sesuai dengan arah panah yang diberikan.
- Undirected Graf yang sering disebut dengan graf tidak berarah dimana setiap simpulnya tidak memperhatikan arahnya dan tidak ada panah melainkan hanya garis yang menghubungkan kedua simpul.
- Weight Graf yang merupakan graf berisi nilai disetiap arah dan jalannya.
     
### C. Representasi Graf dengan Matriks

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/Representasi%20Graph%20Matrix.png" alt="Alt Text">
</p> 
<p align="center">
 Gambar 3. Representasi Graf Matriks
</p> 

### D. Representasi Graf dengan Linked List

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/Rep%20Graph%20dengan%20Linked.png" alt="Alt Text">
</p> 
<p align="center">
 Gambar 4. Representasi Graf dengan Linked List
</p> 

Simpul vertex dan simpul edge merupakan dua hal yang berbeda. Dimana simpul vertex mewakili simpul dalam graf dalam bentuk linked list. Simpul vertex mewakili simpul dalam graf, sementara simpul edge mewakili hubungan antara simpul satu dengan simpul lainnya. Berikut representasinya dituangkan dalam linked list:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/Rep%20Graph%20link.png" alt="Alt Text">
</p> 
<p align="center">
 Gambar 5. Graf dalam Linked List
</p> 

### E. Tree (Pohon)

Struktur data tree adalah tipe struktur data yang digunakan untuk menyimpan dan mengorganisir data secara hierarkis. Dalam tree, data disusun dalam bentuk pohon dengan simpul-simpul yang terhubung melalui tepi (edge). Berikut adalah beberapa konsep penting dan istilah terkait tree:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/Terminologi%20StrukDat%20Tree.png" alt="Alt Text">
</p> 
<p align="center">
 Gambar 6. Terminologi Tipe Data Tree
</p> 

Berikut ini adalah contoh struktur data binary tree:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/StrukDat%20Binary%20Tree.png" alt="Alt Text">
</p> 
<p align="center">
 Gambar 7. Binary Tree
</p> 

Dalam binary tree dapat menggunakan dua jenis pointer, seperti double linked list.

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/Simpul%20dua%20Pointer.png" alt="Alt Text">
</p> 
<p align="center">
 Gambar 8. Simpul Dua Pointer
</p> 

Dalam struktur data tree, terdapat beberapa operasi yang memungkinkan manipulasi dan navigasi pada struktur pohon. Berikut adalah beberapa operasi yang dapat terjadi pada tree:

1. **Create (Membentuk Tree Baru)**:
   - Operasi ini digunakan untuk membuat tree baru yang awalnya kosong.
   - Tree dapat dibentuk dengan menambahkan simpul-simpul ke dalamnya.

2. **Clear (Menghapus Isi Tree)**:
   - Operasi ini menghapus semua simpul dari tree yang sudah ada.
   - Setelah operasi ini, tree menjadi kosong.

3. **Empty (Memeriksa Keadaan Kosong)**:
   - Fungsi ini memeriksa apakah tree masih kosong atau tidak.
   - Jika tree tidak memiliki simpul, maka dikatakan kosong.

4. **Insert (Menyisipkan Simpul)**:
   - Operasi ini memasukkan sebuah simpul ke dalam tree.
   - Terdapat tiga pilihan saat menyisipkan simpul:
     - Sebagai **Root**: Menjadikan simpul sebagai akar tree.
     - Sebagai **Left Child**: Menyisipkan simpul sebagai anak kiri dari simpul tertentu.
     - Sebagai **Right Child**: Menyisipkan simpul sebagai anak kanan dari simpul tertentu.

5. **Traverse**:
   - Melintasi tree berarti mengunjungi setiap simpul dalam urutan tertentu.
   - Terdapat tiga metode traversal umum:
     - **PreOrder**: Mengunjungi simpul root terlebih dahulu, kemudian anak kiri, dan akhirnya anak kanan.
     - **InOrder**: Mengunjungi anak kiri, kemudian root, dan akhirnya anak kanan.
     - **PostOrder**: Mengunjungi anak kiri, kemudian anak kanan, dan akhirnya root.

### 1. Guided 1

```C++
#include<iostream> // Mengimpor library iostream untuk input-output
#include<iomanip> // Mengimpor library iomanip untuk format output
using namespace std; // Menggunakan namespace std untuk memudahkan penggunaan fungsi dari library

string simpul[7] = {"ciamis", "Bandung","Bekasi","Tasikmalaya","cianjur","Purwokerto", "Yogyakarta"}; // Array simpul yang berisi nama-nama kota

int busur [7][7] = { // Matriks busur yang merepresentasikan jarak antar kota
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 9, 15, 0},
    {0, 5, 0, 9, 5, 0, 0},
    {0, 0, 0, 2, 4, 0, 8},
    {3, 0, 0, 1, 0, 0, 0},
    {0, 0, 7, 0, 0, 9, 4},
    {0, 0, 0, 0, 8, 0, 0}
};

void tampilGraph(){ // Fungsi untuk menampilkan graf
    for(int i = 0; i < 7; i++){ // Iterasi untuk setiap simpul
        cout<<simpul[i]<<" : "<<endl; // Menampilkan nama kota
        for(int j = 0; j < 7; j++){ // Iterasi untuk setiap busur
            if(busur[i][j] != 0 ) // Jika terdapat jarak antar kota
            cout<<"-->"<<simpul[j]<<" ("<<busur[i][j]<<")"<<endl; // Menampilkan koneksi antar kota beserta jaraknya
        }
        cout<<endl; // Baris kosong untuk pemisah
    }
}

int main(){ // Fungsi utama
    tampilGraph(); // Memanggil fungsi tampilGraph untuk menampilkan graf
    return 0; // Mengembalikan nilai 0 sebagai penanda program berjalan dengan sukses
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include<iostream> // Mengimpor library iostream untuk input-output
#include<iomanip> // Mengimpor library iomanip untuk format output
using namespace std; // Menggunakan namespace std untuk memudahkan penggunaan fungsi dari library
```
- #include<iostream>: Mengimpor library standar input-output di C++ yang digunakan untuk operasi input dan output.
- #include<iomanip>: Mengimport library iomanip untuk mengatur format output.
- using namespace std;: Memungkinkan kita menggunakan elemen-elemen dalam namespace std (standard) tanpa perlu menuliskan std:: sebelum setiap fungsi atau objek yang berasal dari library standar.

#### Bagian 2

```C++
string simpul[7] = {"ciamis", "Bandung","Bekasi","Tasikmalaya","cianjur","Purwokerto", "Yogyakarta"}; // Array simpul yang berisi nama-nama kota
```

Mendeklarasikan array string simpul[7] yang berisi nama nama kota di Indonesia.

#### Bagian 3

```C++
int busur [7][7] = { // Matriks busur yang merepresentasikan jarak antar kota
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 9, 15, 0},
    {0, 5, 0, 9, 5, 0, 0},
    {0, 0, 0, 2, 4, 0, 8},
    {3, 0, 0, 1, 0, 0, 0},
    {0, 0, 7, 0, 0, 9, 4},
    {0, 0, 0, 0, 8, 0, 0}
};
```

int busur[7][7]: Matriks berukuran 7x7 yang merepresentasikan jarak antar kota. Nilai 0 menunjukkan tidak ada koneksi langsung antar kota.

#### Bagian 4

```C++
void tampilGraph(){ // Fungsi untuk menampilkan graf
    for(int i = 0; i < 7; i++){ // Iterasi untuk setiap simpul
        cout<<simpul[i]<<" : "<<endl; // Menampilkan nama kota
        for(int j = 0; j < 7; j++){ // Iterasi untuk setiap busur
            if(busur[i][j] != 0 ) // Jika terdapat jarak antar kota
            cout<<"-->"<<simpul[j]<<" ("<<busur[i][j]<<")"<<endl; // Menampilkan koneksi antar kota beserta jaraknya
        }
        cout<<endl; // Baris kosong untuk pemisah
    }
}
```

void tampilGraph(): Fungsi untuk menampilkan graf yang berisi koneksi antar kota beserta jaraknya.
- for(int i = 0; i < 7; i++): Iterasi untuk setiap simpul (kota).
- cout<<simpul[i]<<" : "<<endl;: Menampilkan nama kota.
- for(int j = 0; j < 7; j++): Iterasi untuk setiap busur (koneksi antar kota).
- if(busur[i][j] != 0): Memeriksa apakah ada koneksi antar kota.
- cout<<"-->"<<simpul[j]<<" ("<<busur[i][j]<<")"<<endl;: Menampilkan koneksi antar kota beserta jaraknya.

#### Bagian 5

```C++
int main(){ // Fungsi utama
    tampilGraph(); // Memanggil fungsi tampilGraph untuk menampilkan graf
    return 0; // Mengembalikan nilai 0 sebagai penanda program berjalan dengan sukses
}
```

Fungsi main atau fungsi utama ini merupakan fungsi yang pertama kali akan dieksekusi dalam program. Pada main terdapat berbagai fungsi yang telah dibuat sebelumnya sehingga pada main hanya tinggal mengatur saja posisi fungsi yang telah di buat.

- tampilGraph();: Memanggil fungsi tampilGraph untuk menampilkan graf.
- return 0;: Mengembalikan nilai 0 sebagai tanda bahwa program berjalan dengan sukses.

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/Guided1.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/OutputGuided1.png" alt="Alt Text">
</p>

#### Penjelasan

Output dari program diatas akan menampilkan output Jarak dari kota-kota yang ada berdasarkan nilai yang telah di deklarasikan dalam matriks.

### 2. Guided 2

```C++
#include<iostream>
#include<iomanip> // Menambahkan library iomanip untuk format output
using namespace std;

struct pohon {
    pohon * kanan;
    char data;
    pohon * kiri;
};

//Deklarasi variabel global
pohon * simpul;
pohon * root;
pohon * saatIni;
pohon * helperA;
pohon * helperB;
pohon * alamat[256];

// Fungsi Inisiasi
void inisialisasi(){
    root = NULL;
    saatIni = NULL;
    helperA = NULL;
    helperB = NULL;
}

// Fungsi membuat simpul baru
void simpulBaru(char dataMasukkan){
    simpul = new pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

//Fungsi membuat simpul akar
void simpulAkar(){
    if (root == NULL) {
        char dataAnda;
        cout << "Masukkan data akar: ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Simpul akar berhasil dibuat...\n";
    } else {
        cout << "Simpul akar sudah ada...\n";
    }
}

//Fungsi menambah simpul
void tambahSimpul() {
    if (root != NULL) {
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 25) {
            cout << "Masukkan data kiri : ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan : ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
    }
}

//Fungsi membaca pohon
void bacaPohon(){
    if (root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL){
            saatIni = alamat[i];
            if (saatIni->data < 10) {
                cout << " " << saatIni->data << " "; // Menambahkan spasi untuk memformat output agar rapi
            } else {
                cout << saatIni->data << " ";
            }
            pencacah++;
            if (pencacah == n){
                cout << endl;
                n = n * 2;
                pencacah = 0;
            }
            i++;
        }
    }
}

int main(){
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();
    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include<iostream>
#include<iomanip> // Menambahkan library iomanip untuk format output
using namespace std;
```

- #include<iostream> Mengimpor library untuk input dan output.
- #include<iomanip> Mengimpor library untuk manipulasi format output.
- using namespace std Menggunakan namespace standar C++ untuk menghindari penggunaan std:: sebelum fungsi-fungsi standar.

#### Bagian 2

```C++
struct pohon {
    pohon * kanan;
    char data;
    pohon * kiri;
};

//Deklarasi variabel global
pohon * simpul;
pohon * root;
pohon * saatIni;
pohon * helperA;
pohon * helperB;
pohon * alamat[256];
```

- struct pohon: Mendefinisikan struktur pohon biner dengan tiga anggota: pointer ke kiri (kiri), data (data), dan pointer ke kanan (kanan)
- Deklarasi variabel global yang akan digunakan

#### Bagian 3

```C++
void inisialisasi(){
    root = NULL;
    saatIni = NULL;
    helperA = NULL;
    helperB = NULL;
}
```

Membuat fungsi inisialisasi(): Menginisialisasi semua pointer global menjadi NULL

#### Bagian 4

```C++
void simpulBaru(char dataMasukkan){
    simpul = new pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}
```

Membuat simpul baru dengan data yang diberikan dan menginisialisasi pointer kiri dan kanan menjadi NULL.

#### Bagian 5

```C++
void simpulAkar(){
    if (root == NULL) {
        char dataAnda;
        cout << "Masukkan data akar: ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Simpul akar berhasil dibuat...\n";
    } else {
        cout << "Simpul akar sudah ada...\n";
    }
}
```

Meminta pengguna untuk memasukkan data untuk simpul akar jika belum ada simpul akar. Jika sudah ada, menampilkan pesan bahwa simpul akar sudah ada.

#### Bagian 6

```C++
void tambahSimpul() {
    if (root != NULL) {
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 25) {
            cout << "Masukkan data kiri : ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan : ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
    }
}
```

Menambahkan simpul-simpul baru ke pohon biner. Menggunakan loop untuk meminta pengguna memasukkan data untuk simpul kiri dan kanan dari setiap simpul yang ada. Berhenti jika pengguna memasukkan '0' atau jika jumlah simpul mencapai batas tertentu (25).

#### Bagian 7

```C++
void bacaPohon(){
    if (root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL){
            saatIni = alamat[i];
            if (saatIni->data < 10) {
                cout << " " << saatIni->data << " "; // Menambahkan spasi untuk memformat output agar rapi
            } else {
                cout << saatIni->data << " ";
            }
            pencacah++;
            if (pencacah == n){
                cout << endl;
                n = n * 2;
                pencacah = 0;
            }
            i++;
        }
    }
}
```

Menampilkan data dari setiap simpul dalam pohon biner. Mencetak setiap simpul dalam level yang sama dalam satu baris dan melanjutkan ke baris baru setelah setiap level.

#### Bagian 8

```C++
int main(){
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();
    return 0;
}
```

Fungsi utama yang menginisialisasi pohon, membuat simpul akar, menambah simpul-simpul, dan kemudian membaca dan menampilkan pohon biner.

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/Guided2.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/OutputGuided2.png" alt="Alt Text">
</p>

#### Penjelasan

Pada output di atas, pengguna memasukkan beberapa nilai dimana angka 9 sebagai simpul akar dan lainnya sebagai anak kanan dan kiri. Memasukkan nilai 0 di akhir untuk menghentikan kode.

## Unguided

### 1. Unguided 1

####  Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.

**Kode Program:**

```C++
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
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
```

- Library iostream digunakan untuk menjalankan operasi input dan output pada program.
- iomanip untuk manipulasi output
- vector untuk menggunakan vektor
- string untuk menggunakan string
- unordered_map untuk menggunakan hashmap.
- namespace std digunakan agar tidak perlu mendeklarasikan std lagi di setiap fungsi.

#### Bagian 2

```C++
vector<string> Rizal_2311110029; // mengganti nama 'simpul' menjadi 'Rizal_2311110029'
vector<vector<int>> busur;
unordered_map<string, int> kotaIndex;
```

Inisiasi variabel global sebagai berikut:
- Rizal_2311110029 adalah vektor untuk menyimpan nama-nama kota.
- busur adalah matriks 2D yang menyimpan jarak antar kota.
- kotaIndex adalah hashmap untuk memetakan nama kota ke indeks dalam vektor Rizal_2311110029.
  
#### Bagian 3

```C++
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
```

- Mengisi vektor Rizal_2311110029 dengan nama-nama kota dan memetakan setiap kota ke indeks dalam vektor.
- Menggunakan cin.ignore() untuk mengabaikan karakter newline yang mungkin tertinggal dari input sebelumnya.
- getline(cin, namaKota) untuk membaca input kota dari pengguna.
- kotaIndex[namaKota] = i untuk menyimpan indeks kota dalam hashmap.
- Menyesuaikan ukuran matriks busur sesuai dengan jumlah kota.

#### Bagian 4

```C++
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
```

- Mengisi matriks busur dengan jarak antar kota yang diinputkan pengguna.
- Mengisi busur[i][j] dengan jarak dari kota i ke kota j berdasarkan input pengguna.
- Hanya mengisi jika i != j untuk menghindari pengisian jarak dari kota ke dirinya sendiri.

#### Bagian 5

```C++
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
```

- Menampilkan matriks busur dalam format tabel.
- Menggunakan setw untuk mengatur lebar kolom agar output lebih rapi.
- Menampilkan nama kota di baris pertama dan kolom pertama, diikuti dengan jarak antar kota.

#### Bagian 6

```C++
int hitungJarak(const vector<string>& perjalanan) {
    int totalJarak = 0;
    for (size_t i = 0; i < perjalanan.size() - 1; i++) {
        int asal = kotaIndex[perjalanan[i]];
        int tujuan = kotaIndex[perjalanan[i + 1]];
        totalJarak += busur[asal][tujuan];
    }
    return totalJarak;
}
```

- Menghitung total jarak perjalanan berdasarkan rute kota yang dipilih.
- Mengambil indeks kota asal dan tujuan dari kotaIndex.
- Menjumlahkan jarak dari setiap pasangan kota berturut-turut dalam perjalanan.

#### Bagian

```C++
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
```

Fungsi main merupakan fungsi yang pertama kali di eksekusi dalam program. 
- Meminta jumlah kota (jumlahSimpul) dari pengguna.
- Memanggil fungsi isiRizal_2311110029 untuk mengisi nama kota dan inisialisasi busur.
-Memanggil isiBusur untuk mengisi jarak antar kota.
- Menampilkan matriks busur menggunakan tampilGraph.
- Meminta jumlah kota dalam perjalanan (jumlahPerjalanan).
- Membaca nama-nama kota dalam perjalanan.
- Menghitung total jarak perjalanan menggunakan hitungJarak dan menampilkan hasilnya.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/Unguided1.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/OutUnguided1.png" alt="Alt Text">
</p>

#### Penjelasan

Output kode di atas sudah di atur juga dalam fungsi main dimana alurnya sebagai berikut: Pengguna diminta memasukkan jumlah kota --> Pengguna memasukkan nama-nama kota --> Pengguna memasukkan jarak antar kota --> Data yang di masukkan tampil --> Pengguna memasukkan banyak kota perjalanan --> Tampil jumlah perjalanan.

### 2. Unguided 2

####   Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan tampilkan pada pre-order, inorder, dan post order!

**Kode Program:**

```C++
#include<iostream>
#include<iomanip> // Menambahkan library iomanip untuk format output
using namespace std;

struct pohon {
    pohon * kanan;
    char data;
    pohon * kiri;
};

// Deklarasi variabel global
pohon * simpul;
pohon * root;
pohon * saatIni;
pohon * helperA;
pohon * helperB;
pohon * alamat[256];

// Fungsi Inisiasi
void inisialisasi(){
    root = NULL;
    saatIni = NULL;
    helperA = NULL;
    helperB = NULL;
}

// Fungsi membuat simpul baru
void simpulBaru(char dataMasukkan){
    simpul = new pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

// Fungsi membuat simpul akar
void simpulAkar(){
    if (root == NULL) {
        char dataAnda;
        cout << "Masukkan data akar: ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Simpul akar berhasil dibuat...\n";
    } else {
        cout << "Simpul akar sudah ada...\n";
    }
}

// Fungsi menambah simpul
void Rizal_2311110029() { // Mengganti nama fungsi tambahSimpul menjadi Rizal_2311110029
    if (root != NULL) {
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 25) {
            cout << "Masukkan data kiri : ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan : ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
    }
}

// Fungsi membaca pohon
void bacaPohon(){
    if (root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL){
            saatIni = alamat[i];
            if (saatIni->data < 10) {
                cout << " " << saatIni->data << " "; // Menambahkan spasi untuk memformat output agar rapi
            } else {
                cout << saatIni->data << " ";
            }
            pencacah++;
            if (pencacah == n){
                cout << endl;
                n = n * 2;
                pencacah = 0;
            }
            i++;
        }
    }
}

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << endl << "Menu:\n";
    cout << "1. Tampilkan Pre-order\n";
    cout << "2. Tampilkan In-order\n";
    cout << "3. Tampilkan Post-order\n";
    cout << "4. Keluar dari program\n"; // Menambahkan opsi keluar dari program
    cout << "Pilih menu (1-4): ";
}

// Fungsi Pre-order
void preOrder(pohon* node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->kiri);
        preOrder(node->kanan);
    }
}

// Fungsi In-order
void inOrder(pohon* node) {
    if (node != NULL) {
        inOrder(node->kiri);
        cout << node->data << " ";
        inOrder(node->kanan);
    }
}

// Fungsi Post-order
void postOrder(pohon* node) {
    if (node != NULL) {
        postOrder(node->kiri);
        postOrder(node->kanan);
        cout << node->data << " ";
    }
}

int main(){
    inisialisasi();
    simpulAkar();
    Rizal_2311110029(); 
    bacaPohon();

    int pilihan = 0;
    while (pilihan != 4) {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Pre-order traversal: ";
                preOrder(root);
                break;
            case 2:
                cout << "In-order traversal: ";
                inOrder(root);
                break;
            case 3:
                cout << "Post-order traversal: ";
                postOrder(root);
                break;
            case 4:
                cout << "Keluar dari program. Terima kasih!";
                break;
            default:
                cout << "Pilihan tidak valid.";
        }
    }

    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <iomanip> // Menambahkan library iomanip untuk format output
using namespace std;
```

- iostream untuk input/output stream.
- iomanip untuk manipulasi format output.
- namespace std digunakan agar tidak mendeklarasikan std lagi di setiap fungsi.

#### Bagian 2

```C++
struct pohon {
    pohon *kanan;
    char data;
    pohon *kiri;
};
```

Mendefinisikan struktur data pohon untuk node dalam pohon biner, yang memiliki pointer ke node kiri dan kanan serta data dalam bentuk karakter.

#### Bagian 3

```C++
// Deklarasi variabel global
pohon *simpul;
pohon *root;
pohon *saatIni;
pohon *helperA;
pohon *helperB;
pohon *alamat[256];
```

Deklarasi variabel global:
- simpul: pointer ke node yang sedang dibuat atau diakses.
- root: pointer ke root dari pohon.
- saatIni: pointer ke node yang sedang diakses.
- helperA, helperB: variabel bantu.
- alamat[256]: array untuk menyimpan alamat node

#### Bagian 4

```C++
// Fungsi Inisiasi
void inisialisasi() {
    root = NULL;
    saatIni = NULL;
    helperA = NULL;
    helperB = NULL;
}
```

Variabel global diinisiasi ke NULL.

#### Bagian 5

```C++
// Fungsi membuat simpul baru
void simpulBaru(char dataMasukkan) {
    simpul = new pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}
```

Membuat node baru dengan data yang diberikan dan menginisialisasi pointer kiri dan kanan ke NULL.

#### Bagian 6

```C++
// Fungsi membuat simpul akar
void simpulAkar() {
    if (root == NULL) {
        char dataAnda;
        cout << "Masukkan data akar: ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Simpul akar berhasil dibuat...\n";
    } else {
        cout << "Simpul akar sudah ada...\n";
    }
}
```

Membuat simpul akar jika belum ada root, dan menginisialisasi root dengan node yang baru dibuat.

#### Bagian 7

```C++
// Fungsi menambah simpul
void Rizal_2311110029() { // Mengganti nama fungsi tambahSimpul menjadi Rizal_2311110029
    if (root != NULL) {
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 25) {
            cout << "Masukkan data kiri : ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan : ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
    }
}
```

- Fungsi Rizal_2311110029: Menambahkan simpul baru ke pohon biner.
- Meminta pengguna untuk memasukkan data untuk simpul kiri dan kanan dari node yang ada.
- Menambahkan simpul baru ke posisi kiri atau kanan jika data bukan '0'.
- Menggunakan array alamat untuk menyimpan referensi ke node yang ditambahkan untuk melanjutkan penambahan simpul.

#### Bagian 8

```C++
// Fungsi membaca pohon
void bacaPohon() {
    if (root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL) {
            saatIni = alamat[i];
            if (saatIni->data < 10) {
                cout << " " << saatIni->data << " "; // Menambahkan spasi untuk memformat output agar rapi
            } else {
                cout << saatIni->data << " ";
            }
            pencacah++;
            if (pencacah == n) {
                cout << endl;
                n = n * 2;
                pencacah = 0;
            }
            i++;
        }
    }
}
```

- Fungsi bacaPohon: Menampilkan data dari pohon dalam urutan level-order.
- Menggunakan array alamat untuk menyimpan referensi node pada level tertentu dan menampilkannya secara berurutan.
- Menambahkan spasi untuk data yang kurang dari 10 untuk format yang rapi.

#### Bagian 9

```C++
// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << endl << "Menu:\n";
    cout << "1. Tampilkan Pre-order\n";
    cout << "2. Tampilkan In-order\n";
    cout << "3. Tampilkan Post-order\n";
    cout << "4. Keluar dari program\n"; // Menambahkan opsi keluar dari program
    cout << "Pilih menu (1-4): ";
}
```

Menampilkan menu pilihan traversal pohon dan keluar dari program.

#### Bagian 10

```C++
// Fungsi Pre-order
void preOrder(pohon* node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->kiri);
        preOrder(node->kanan);
    }
}

// Fungsi In-order
void inOrder(pohon* node) {
    if (node != NULL) {
        inOrder(node->kiri);
        cout << node->data << " ";
        inOrder(node->kanan);
    }
}

// Fungsi Post-order
void postOrder(pohon* node) {
    if (node != NULL) {
        postOrder(node->kiri);
        postOrder(node->kanan);
        cout << node->data << " ";
    }
}
```

Membuat Fungsi Traversal:
- preOrder: Traversal pre-order (root, kiri, kanan).
- inOrder: Traversal in-order (kiri, root, kanan).
- postOrder: Traversal post-order (kiri, kanan, root).

#### Bagian

```C++
int main() {
    inisialisasi();
    simpulAkar();
    Rizal_2311110029();
    bacaPohon();

    int pilihan = 0;
    while (pilihan != 4) {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Pre-order traversal: ";
                preOrder(root);
                break;
            case 2:
                cout << "In-order traversal: ";
                inOrder(root);
                break;
            case 3:
                cout << "Post-order traversal: ";
                postOrder(root);
                break;
            case 4:
                cout << "Keluar dari program. Terima kasih!";
                break;
            default:
                cout << "Pilihan tidak valid.";
        }
        cout << endl; // Menambahkan baris baru setelah setiap output traversal
    }

    return 0;
}
```

Fungsi di atas merupakan fungsi main yang berupa fungsi utama di dalam program yang disebut dengan fungsi main. Fungsi main yang pertama di eksekusi dan memengaruhi tampilan output.

- Menginisialisasi variabel global dan membuat pohon.
- Meminta pengguna untuk memasukkan data untuk membuat simpul akar dan simpul tambahan.
- Menampilkan pohon dalam urutan level-order.
- Menampilkan menu untuk memilih jenis traversal pohon.
- Menjalankan loop yang terus meminta input pengguna sampai pengguna memilih untuk keluar (pilihan 4).
- Memanggil fungsi traversal yang sesuai berdasarkan pilihan pengguna dan menampilkan hasilnya.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/Unguided2.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-10/blob/main/Modul%2010/SS/OutUnguided2.png" alt="Alt Text">
</p>

#### Penjelasan

Pada output di atas pengguna diminta untuk memasukkan data akar (9) lalu pengguna akan memasukkan angka anak anak akar kanan dan kirinya --> Masukkan 0 jika sudah selesai menginputkan --> Tampilan --> Pengguna memilih menu yang ingin di akses --> Tampilan --> Menu 4 untuk keluar program.

## Kesimpulan

Graf adalah salah satu struktur data fundamental dalam dunia pemrograman yang digunakan untuk merepresentasikan hubungan atau koneksi antara objek. Dalam konteks C++, graf dapat diimplementasikan menggunakan berbagai pendekatan seperti matriks ketetanggaan, daftar ketetanggaan, atau dengan menggunakan kelas dan objek. Kita mengetahui ada 3 jenis graf diantaranya:

- Directed Graf yang sering disebut dengan graf berarah dimana urutan setiap simpulnya memiliki arti dan arah sesuai dengan arah panah yang diberikan.
- Undirected Graf yang sering disebut dengan graf tidak berarah dimana setiap simpulnya tidak memperhatikan arahnya dan tidak ada panah melainkan hanya garis yang menghubungkan kedua simpul.
- Weight Graf yang merupakan graf berisi nilai disetiap arah dan jalannya.

## Referensi

[1]	I. H. Pratama and A. H. Wijaya, “Teori graf dan implementasinya dalam menentukan rute efektif perjalanan wisata,” pp. 1–10, 2022.

[2]	Y. Purwananto, D. Purwitasari, and W. A. Wibowo, “implementasi dan Analisis Algoritma Pencarian Rute Terpendek di Kota Surabaya,” J. Penelit. dan …, vol. 10, no. 2, pp. 94–101, 2005, [Online]. Available: http://ppm.ittelkom.ac.id/jurtel/images/Volume10Desember2005/implementasi dan analisis algoritma pencarian rute terpendek.pdf
