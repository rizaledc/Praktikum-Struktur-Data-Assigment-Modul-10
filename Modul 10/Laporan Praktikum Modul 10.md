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

####  Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif.

**Kode Program:**

```C++
#include <iostream>

// Fungsi untuk menghitung faktorial menggunakan rekursi langsung
long long faktorial(int n) {
    if 
        (n == 0 || n== 1) 
        return 1;
    else // basis rekursi
        return n * faktorial(n - 1); // rekursi
}

int main() {
    int angka;
    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> angka;

    // Memastikan bahwa angka adalah positif
    if (angka < 0) {
        std::cout << "Faktorial tidak didefinisikan untuk bilangan negatif." << std::endl;
    } else {
        long long hasil = faktorial(angka);
        std::cout << "Hasil Faktorial dari " << angka << " adalah: " << hasil << std::endl;
    }

    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
```

Library iostream digunakan untuk menjalankan operasi input dan output pada program. Memungkinkan penggunaan fungsi std::cout dan std::cin.

#### Bagian 2

```C++
   long long faktorial(int n) {
       if (n == 0 || n == 1) 
           return 1;
       else
           return n * faktorial(n - 1);
   }
```

- Fungsi faktorial menerima satu parameter n (bilangan bulat).
- Fungsi ini menggunakan rekursi untuk menghitung faktorial.
- Basis rekursinya adalah jika n sama dengan 0 atau 1, maka faktorialnya adalah 1.
- Jika tidak, fungsi akan memanggil dirinya sendiri dengan argumen n - 1 dan mengalikan hasilnya dengan n.
  
#### Bagian 3

```C++
   int main() {
       int angka;
       std::cout << "Masukkan bilangan bulat positif: ";
       std::cin >> angka;

       if (angka < 0) {
           std::cout << "Faktorial tidak didefinisikan untuk bilangan negatif." << std::endl;
       } else {
           long long hasil = faktorial(angka);
           std::cout << "Hasil Faktorial dari " << angka << " adalah: " << hasil << std::endl;
       }

       return 0;
   }
```

Fungsi di atas merupakan fungsi main yang berupa fungsi utama di dalam program yang disebut dengan fungsi main. Fungsi main yang pertama di eksekusi dan memengaruhi tampilan output.

- Pengguna diminta untuk memasukkan bilangan bulat positif.
- Jika bilangan yang dimasukkan negatif, program akan memberikan pesan bahwa faktorial tidak didefinisikan untuk bilangan negatif.
- Jika bilangan positif, fungsi faktorial dipanggil dengan bilangan tersebut sebagai argumen, dan hasilnya ditampilkan.
- Fungsi main mengembalikan 0, menandakan bahwa program berakhir tanpa error.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/CodeUn1.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/OutUn1.png" alt="Alt Text">
</p>

#### Penjelasan

Output kode di atas sudah di atur juga dalam fungsi main dimana alurnya sebagai berikut: Pengguna diminta memasukkan bilangan bulat positif --> Jika pengguna memasukkan bilangan negatif maka akan keluar pesan tidak dapat didefinisikan --> Jika bilangan yang dimasukkan benar maka akan di eksekusi kodenya --> Hasil di print sebagai output. Jika memasukkan angka 7 maka faktorialnya adalah 5040.

### 2. Unguided 2

####  Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 di atas!

**Kode Program:**

```C++
#include <iostream>

// Deklarasi kedua fungsi terlebih dahulu
long long faktorialGenap(int n);
long long faktorialGanjil(int n);

// Fungsi untuk menghitung faktorial bilangan genap
long long faktorialGenap(int n) {
    if (n == 0) 
        return 1; // basis rekursi
    else
        return n * faktorialGanjil(n - 1); // memanggil fungsi faktorialGanjil
}

// Fungsi untuk menghitung faktorial bilangan ganjil
long long faktorialGanjil(int n) {
    if (n == 1) 
        return 1; // basis rekursi
    else
        return n * faktorialGenap(n - 1); // memanggil fungsi faktorialGenap
}

int main() {
    int angka;
    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> angka;

    // Memastikan bahwa angka adalah positif
    if (angka < 0) {
        std::cout << "Faktorial tidak didefinisikan untuk bilangan negatif." << std::endl;
    } else {
        long long hasil;
        if (angka % 2 == 0) {
            hasil = faktorialGenap(angka);
        } else {
            hasil = faktorialGanjil(angka);
        }
        std::cout << "Hasil Faktorial dari " << angka << " adalah: " << hasil << std::endl;
    }

    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
```

Library iostream digunakan untuk menjalankan operasi input dan output pada program. Memungkinkan penggunaan fungsi std::cout dan std::cin.

#### Bagian 2

```C++
long long faktorialGenap(int n);
long long faktorialGanjil(int n);
```

Dua fungsi ini dideklarasikan terlebih dahulu sebelum definisinya. Fungsi faktorialGenap digunakan untuk menghitung faktorial bilangan genap, dan faktorialGanjil untuk bilangan ganjil.

#### Bagian 3

```C++
long long faktorialGenap(int n) {
    if (n == 0) 
        return 1; // basis rekursi
    else
        return n * faktorialGanjil(n - 1); // memanggil fungsi faktorialGanjil
}
```

Fungsi ini menghitung faktorial bilangan genap secara rekursif. Jika n adalah 0, fungsi mengembalikan 1 sebagai basis rekursi. Jika tidak, fungsi mengalikan n dengan hasil dari faktorialGanjil(n - 1), sehingga terjadi pemanggilan rekursif antara fungsi faktorialGenap dan faktorialGanjil.

#### Bagian 4

```C++
long long faktorialGanjil(int n) {
    if (n == 1) 
        return 1; // basis rekursi
    else
        return n * faktorialGenap(n - 1); // memanggil fungsi faktorialGenap
}
```

Mirip dengan faktorialGenap, fungsi ini menghitung faktorial bilangan ganjil. Jika n adalah 1, fungsi mengembalikan 1 sebagai basis rekursi. Jika tidak, fungsi mengalikan n dengan hasil dari faktorialGenap(n - 1), menciptakan rekursi antara kedua fungsi faktorial.

#### Bagian 5

```C++
int main() {
    int angka;
    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> angka;

    if (angka < 0) {
        std::cout << "Faktorial tidak didefinisikan untuk bilangan negatif." << std::endl;
    } else {
        long long hasil;
        if (angka % 2 == 0) {
            hasil = faktorialGenap(angka);
        } else {
            hasil = faktorialGanjil(angka);
        }
        std::cout << "Hasil Faktorial dari " << angka << " adalah: " << hasil << std::endl;
    }

    return 0;
}
```

Fungsi di atas merupakan fungsi main yang berupa fungsi utama di dalam program yang disebut dengan fungsi main. Fungsi main yang pertama di eksekusi dan memengaruhi tampilan output.

- Program meminta pengguna memasukkan bilangan bulat positif.
- Jika bilangan negatif, program akan memberikan pesan bahwa faktorial tidak didefinisikan untuk bilangan negatif.
- Jika positif, program akan menentukan apakah bilangan tersebut genap atau ganjil dan memanggil fungsi faktorial yang sesuai.
- Hasilnya kemudian dicetak ke konsol.

Secara keseluruhan, program ini memperlihatkan penggunaan rekursi dan pemisahan fungsi berdasarkan kondisi (genap atau ganjil) untuk menghitung faktorial.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/CodeUn2.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/OutUn2.png" alt="Alt Text">
</p>

#### Penjelasan

Pada output di atas akan sama dengan seperti faktorial di unguided 1. Tapi yang membedakannya pada kode. Jika pengguna memasukkan nilai negatif maka output yang keluar adalah tidak dapat didefinisikan. Untuk bilangan bulat positif dibagi menjadi dua kode seperti positif genap dan ganjil. Jika memasukkan nilai faktorial 5 maka hasilnya adalah 120.

### 3. Unguided 3

####  Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai.

**Kode Program:**

```C++
#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
#include <algorithm>
#include <optional>

using namespace std;

struct Mahasiswa {
    string NIM;
    int nilai;
};

class HashTable {
private:
    unordered_map<int, list<Mahasiswa>> table;
    int size; // Adding size to keep track of the number of buckets

    int hashFunction(string NIM) {
        int sum = 0;
        for (char ch : NIM) {
            sum += ch;
        }
        return sum % size; // Using size instead of bucket_count
    }

public:
    HashTable(int size) : size(size) {
        table.rehash(size);
    }

    void tambahData(Mahasiswa mhs) {
        int index = hashFunction(mhs.NIM);
        table[index].push_back(mhs);
    }

    void hapusData(string NIM) {
        int index = hashFunction(NIM);
        auto& chain = table[index];
        chain.remove_if([NIM](const Mahasiswa& mhs) { return mhs.NIM == NIM; });
    }

    optional<Mahasiswa> cariDataNIM(string NIM) {
        int index = hashFunction(NIM);
        for (auto& mhs : table[index]) {
            if (mhs.NIM == NIM) {
                return mhs;
            }
        }
        return nullopt;
    }

    vector<Mahasiswa> cariDataNilai(int minNilai, int maxNilai) {
        vector<Mahasiswa> hasil;
        for (auto& chain : table) {
            for (auto& mhs : chain.second) {
                if (mhs.nilai >= minNilai && mhs.nilai <= maxNilai) {
                    hasil.push_back(mhs);
                }
            }
        }
        return hasil;
    }

    void tampilkanMenu() {
        cout << "1. Tambah Data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Cari Data Berdasarkan NIM\n";
        cout << "4. Cari Data Berdasarkan Nilai\n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan: ";
    }

    void tampilkanSubMenuNilai() {
        cout << "Pilih Rentang Nilai:\n";
        cout << "1. Nilai kurang dari 80\n";
        cout << "2. Nilai 80-90\n";
        cout << "3. Nilai 90-100\n";
        cout << "Masukkan pilihan: ";
    }
};

int main() {
    HashTable ht(10);
    int pilihan;

    do {
        ht.tampilkanMenu();
        cin >> pilihan;
        switch (pilihan) {
            case 1: {
                Mahasiswa mhsBaru;
                cout << "Masukkan NIM: ";
                cin >> mhsBaru.NIM;
                cout << "Masukkan Nilai: ";
                cin >> mhsBaru.nilai;
                ht.tambahData(mhsBaru);
                break;
            }
            case 2: {
                string NIMHapus;
                cout << "Masukkan NIM yang akan dihapus: ";
                cin >> NIMHapus;
                ht.hapusData(NIMHapus);
                break;
            }
            case 3: {
                string NIMCari;
                cout << "Masukkan NIM yang dicari: ";
                cin >> NIMCari;
                auto found = ht.cariDataNIM(NIMCari);
                if (found) {
                    cout << "NIM: " << found->NIM << ", Nilai: " << found->nilai << endl;
                } else {
                    cout << "Data tidak ditemukan." << endl;
                }
                break;
            }
            case 4: {
                int subPilihan;
                ht.tampilkanSubMenuNilai();
                cin >> subPilihan;
                vector<Mahasiswa> foundNilai;

                switch (subPilihan) {
                    case 1:
                        foundNilai = ht.cariDataNilai(0, 79);
                        break;
                    case 2:
                        foundNilai = ht.cariDataNilai(80, 90);
                        break;
                    case 3:
                        foundNilai = ht.cariDataNilai(91, 100);
                        break;
                    default:
                        cout << "Pilihan tidak valid." << endl;
                        continue; // Go back to the main menu
                }

                if (!foundNilai.empty()) {
                    for (auto& mhs : foundNilai) {
                        cout << "NIM: " << mhs.NIM << ", Nilai: " << mhs.nilai << endl;
                    }
                } else {
                    cout << "Tidak ada nilai pada rentang ini." << endl;
                }
                break;
            }
            case 5:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 5);

    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
#include <algorithm>
#include <optional>

using namespace std;
```

- #include <iostream> Digunakan untuk operasi input dan output. Dalam kode ini, iostream digunakan untuk mencetak menu ke konsol dan membaca input dari pengguna menggunakan cin dan cout.
- #include <unordered_map> Digunakan untuk menyimpan data dalam struktur tabel hash. Dalam kode ini, unordered_map digunakan untuk menyimpan dan mengelola data mahasiswa dengan kunci integer yang dihasilkan oleh fungsi hash dan nilai berupa list dari struktur Mahasiswa.
- #include <vector> Digunakan untuk menyimpan kumpulan data dalam bentuk array dinamis. Dalam kode ini, vector digunakan untuk menyimpan dan mengembalikan daftar mahasiswa yang memenuhi kriteria pencarian tertentu, seperti dalam fungsi cariDataNilai.
- #include <list> Digunakan untuk menyimpan data dalam struktur data list yang memungkinkan penyisipan dan penghapusan elemen dengan cepat. Dalam kode ini, list digunakan sebagai nilai dalam unordered_map untuk menyimpan mahasiswa yang memiliki nilai hash yang sama (collision handling).
- #include <algorithm> Digunakan untuk operasi algoritma umum seperti pencarian dan pengurutan. Dalam kode ini, algorithm digunakan untuk fungsi remove_if yang digunakan dalam metode hapusData untuk menghapus mahasiswa dari list berdasarkan NIM.
- #include <optional> Digunakan untuk mengembalikan nilai yang mungkin tidak ada. Dalam kode ini, optional digunakan untuk fungsi cariDataNIM yang mungkin tidak menemukan mahasiswa dengan NIM yang dicari, sehingga mengembalikan nullopt jika mahasiswa tidak ditemukan.
- using namespace std; digunakan agar tidak perlu mendeklarasikan std lagi disetiap fungsinya.

#### Bagian 2

```C++
struct Mahasiswa {
    string NIM;
    int nilai;
};
```

Struktur Mahasiswa menyimpan data mahasiswa yang terdiri dari NIM (Nomor Induk Mahasiswa) dan nilai.

#### Bagian 3

```C++
private:
    unordered_map<int, list<Mahasiswa>> table;
    int size;

public:
    HashTable(int size) : size(size) {
        table.rehash(size);
    }
```

- table: unordered_map yang menggunakan int sebagai kunci dan list dari Mahasiswa sebagai nilai.
- size: Jumlah bucket dalam hash table.
- Konstruktor: Menginisialisasi ukuran tabel hash dan mengatur ulang jumlah bucket.

#### Bagian 4

```C++
int hashFunction(string NIM) {
    int sum = 0;
    for (char ch : NIM) {
        sum += ch;
    }
    return sum % size;
}
```

Menghitung nilai hash dari NIM dengan menjumlahkan nilai ASCII dari setiap karakter, kemudian di modulo dengan size.

#### Bagian 5

```C++
void tambahData(Mahasiswa mhs);
void hapusData(string NIM);
optional<Mahasiswa> cariDataNIM(string NIM);
vector<Mahasiswa> cariDataNilai(int minNilai, int maxNilai);
```

- tambahData: Menambahkan data mahasiswa ke dalam tabel.
- hapusData: Menghapus data mahasiswa berdasarkan NIM.
- cariDataNIM: Mencari mahasiswa berdasarkan NIM.
- cariDataNilai: Mencari semua mahasiswa yang nilainya dalam rentang tertentu.

#### Bagian 6

```C++
int main() {
    HashTable ht(10);
    int pilihan;

    do {
        ht.tampilkanMenu();
        cin >> pilihan;
        switch (pilihan) {
            case 1: {
                Mahasiswa mhsBaru;
                cout << "Masukkan NIM: ";
                cin >> mhsBaru.NIM;
                cout << "Masukkan Nilai: ";
                cin >> mhsBaru.nilai;
                ht.tambahData(mhsBaru);
                break;
            }
            case 2: {
                string NIMHapus;
                cout << "Masukkan NIM yang akan dihapus: ";
                cin >> NIMHapus;
                ht.hapusData(NIMHapus);
                break;
            }
            case 3: {
                string NIMCari;
                cout << "Masukkan NIM yang dicari: ";
                cin >> NIMCari;
                auto found = ht.cariDataNIM(NIMCari);
                if (found) {
                    cout << "NIM: " << found->NIM << ", Nilai: " << found->nilai << endl;
                } else {
                    cout << "Data tidak ditemukan." << endl;
                }
                break;
            }
            case 4: {
                int subPilihan;
                ht.tampilkanSubMenuNilai();
                cin >> subPilihan;
                vector<Mahasiswa> foundNilai;

                switch (subPilihan) {
                    case 1:
                        foundNilai = ht.cariDataNilai(0, 79);
                        break;
                    case 2:
                        foundNilai = ht.cariDataNilai(80, 90);
                        break;
                    case 3:
                        foundNilai = ht.cariDataNilai(91, 100);
                        break;
                    default:
                        cout << "Pilihan tidak valid." << endl;
                        continue; // Go back to the main menu
                }

                if (!foundNilai.empty()) {
                    for (auto& mhs : foundNilai) {
                        cout << "NIM: " << mhs.NIM << ", Nilai: " << mhs.nilai << endl;
                    }
                } else {
                    cout << "Tidak ada nilai pada rentang ini." << endl;
                }
                break;
            }
            case 5:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 5);

    return 0;
}
```

Fungsi di atas merupakan fungsi main yang berupa fungsi utama di dalam program yang disebut dengan fungsi main. Fungsi main yang pertama di eksekusi dan memengaruhi tampilan output.

- Membuat objek HashTable dengan 10 bucket.
- Menampilkan menu dan memproses input pengguna untuk melakukan operasi seperti tambah, hapus, dan cari data.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/CodeUn3.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/OutUn3.1.png" alt="Alt Text">
</p>
<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/OutUn3.2.png" alt="Alt Text">
</p>

#### Penjelasan

Output kode di atas sudah di atur juga dalam fungsi main dimana alurnya sebagai berikut: Pengguna akan melihat 5 buah pilihan --> pengguna dapat memilih --> pilihan 1 untuk menambahkan data --> pilihan 2 untuk menghapus data --> pilihan 3 untuk mencari data dari NIM --> pilihan 4 dapat mencari data berdasarkan rentang nilai --> pilihan 5 menu keluar.

## Kesimpulan

Algoritma rekursif dan hash table adalah dua konsep penting dalam ilmu komputer yang digunakan untuk memecahkan masalah dengan cara yang efisien. Algoritma rekursif, yang melibatkan fungsi atau prosedur yang memanggil dirinya sendiri, menawarkan solusi elegan dan sederhana untuk masalah yang dapat dibagi menjadi sub-masalah yang lebih kecil, meskipun memerlukan penanganan yang cermat terhadap overhead dan potensi overflow. Di sisi lain, hash table menyediakan cara yang sangat efisien untuk penyimpanan dan pengambilan data dengan waktu akses rata-rata O(1), dengan berbagai metode penanganan tabrakan seperti open hashing (chaining) dan closed hashing (open addressing). Meskipun masing-masing metode memiliki kelebihan dan kekurangan, pemilihan yang tepat bergantung pada konteks penggunaan dan karakteristik data yang akan diproses.

## Referensi

[1]	I. H. Pratama and A. H. Wijaya, “Teori graf dan implementasinya dalam menentukan rute efektif perjalanan wisata,” pp. 1–10, 2022.

[2]	Y. Purwananto, D. Purwitasari, and W. A. Wibowo, “implementasi dan Analisis Algoritma Pencarian Rute Terpendek di Kota Surabaya,” J. Penelit. dan …, vol. 10, no. 2, pp. 94–101, 2005, [Online]. Available: http://ppm.ittelkom.ac.id/jurtel/images/Volume10Desember2005/implementasi dan analisis algoritma pencarian rute terpendek.pdf
