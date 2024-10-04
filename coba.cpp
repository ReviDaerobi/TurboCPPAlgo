#include <iostream.h>
#include <fstream.h>
#include <conio.h>

void main() {
    clrscr();  // Membersihkan layar

    // Deklarasi variabel
    float alas, tinggi, luas;

    // Membaca dari file input
    ifstream fileInput("01_input.txt");
    
    if (!fileInput) {
        cout << "File tidak ditemukan!" << endl;
        getch(); // Tunggu input sebelum keluar
        return;
    }

    fileInput >> alas >> tinggi;  // Membaca nilai alas dan tinggi dari file
    fileInput.close();  // Menutup file input

    // Menghitung luas segitiga
    luas = (alas * tinggi) / 2;

    // Menulis hasil ke file output
    ofstream fileOutput("01_output.txt");
    
    if (!fileOutput) {
        cout << "Gagal membuat file output!" << endl;
        getch();  // Tunggu input sebelum keluar
        return;
    }

    fileOutput << "Luas segitiga adalah: " << luas << endl;
    fileOutput.close();  // Menutup file output

    // Memberikan notifikasi keberhasilan
    cout << "Perhitungan selesai, cek file output." << endl;

    getch();  // Menunggu input agar layar tidak langsung tertutup
}
