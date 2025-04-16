#include <iostream>
using namespace std;

int main() {
    string nama, nim, tempatTinggal, hobi;
    int usia;

    cout << "===== INPUT BIODATA =====" << endl;
    cout << "Nama           : ";
    getline(cin, nama);

    cout << "NIM            : ";
    getline(cin, nim);

    cout << "Tempat Tinggal : ";
    getline(cin, tempatTinggal);

    cout << "Usia           : ";
    cin >> usia;
    cin.ignore(); // 

    cout << "Hobi           : ";  
    getline(cin, hobi);

    cout << "\n===== BIODATA KAMU =====" << endl;
    cout << "Nama           : " << nama << endl;
    cout << "NIM            : " << nim << endl;
    cout << "Tempat Tinggal : " << tempatTinggal << endl;
    cout << "Usia           : " << usia << " tahun" << endl;
    cout << "Hobi           : " << hobi << endl;

    return 0;
}


