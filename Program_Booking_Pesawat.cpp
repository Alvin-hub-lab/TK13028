#include<iostream>
#include<vector>
using namespace std;

void tampilkanDenah(const vector<vector<char>>& kursi) {
    cout << "   A  B  C  D  E  F\n";
    for (int i = 0; i < kursi.size(); i++) {
        cout << "Baris " << i + 1 << " ";
        for (int j = 0; j < kursi[i].size(); j++) {
            cout << kursi[i][j] << "  ";
        }
        cout << endl;
    }
}

bool pesanKursi(vector<vector<char>>& kursi, int baris, char kolom, string kelas) {
    int indeksKolom = kolom - 'A'; 
    int kelasUtamaAkhir = 2, kelasBisnisAkhir = 5;
    
    // Validasi input kelas
    if ((kelas == "utama" && baris > kelasUtamaAkhir) || 
        (kelas == "bisnis" && (baris < 3 || baris > kelasBisnisAkhir)) || 
        (kelas == "ekonomi" && baris <= kelasBisnisAkhir)) {
        cout << "Penumpang tidak dapat memilih kursi di kelas yang tidak sesuai!\n";
        return false;
    }

    if (kursi[baris - 1][indeksKolom] == '*') {
        kursi[baris - 1][indeksKolom] = 'X'; // Pesan kursi
        cout << "Kursi berhasil dipesan!\n";
        return true;
    } else {
        cout << "Kursi sudah dipesan, silakan pilih kursi lain!\n";
        return false;
    }
}

int main() {
    vector<vector<char>> kursi = {
        {'X', 'X', '*', '*', '*', '*'},
        {'*', '*', '*', 'X', 'X', '*'},
        {'*', '*', 'X', 'X', '*', '*'},
        {'*', '*', 'X', 'X', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', 'X', 'X', 'X'},
        {'*', '*', 'X', '*', '*', '*'},
        {'*', '*', 'X', '*', '*', '*'},
        {'X', 'X', '*', '*', '*', 'X'},
        {'*', '*', '*', '*', 'X', 'X'},
        {'*', '*', 'X', 'X', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', 'X', 'X'},
        {'*', '*', '*', '*', 'X', '*'},
        {'X', 'X', 'X', '*', 'X', '*'}
    };

    tampilkanDenah(kursi); // Tampilkan denah awal
    
    int baris;
    char kolom;
    string kelas;
    
    while (true) {
        cout << "\nPilih kelas (utama/bisnis/ekonomi): ";
        cin >> kelas;
        cout << "Masukkan baris (1-15): ";
        cin >> baris;
        cout << "Masukkan kolom (A-F): ";
        cin >> kolom;
    
    if (pesanKursi(kursi, baris, kolom, kelas)) {
            tampilkanDenah(kursi); // Tampilkan denah setelah pemesanan
        }

        // Cek apakah pengguna ingin keluar dari program
        char lanjut;
        cout << "\nApakah Anda ingin memesan kursi lagi? (y/n): ";
        cin >> lanjut;
        if (lanjut == 'n' || lanjut == 'N') {
            break;
        }
    }
    
    return 0;
}
