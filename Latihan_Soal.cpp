#include<iostream>
using namespace std;

int faktorial(int N) {
    int fak = 1;
    for(int i = N; i>= 1; i--) {
        fak = fak*i;
    }
    return fak;
}

int penambahan(int A, int B) {
    return A+B;
}

float rata(float A, float B, float C){
    return (A+B+C)/3;
}

int main () {
    string username, password;
    string correctUsername = "user";
    string correctPassword = "password";

    cout<<"Ketikkan Username anda: ";
    cin>>username;
    cout<<"Ketikkan password anda: ";
    cin>>password;

    if(username == correctUsername && password == correctPassword) {
        cout<<"Selamat datang, "<<username<<"!"<<endl;

        int pilihan;
        cout<<"Pilih menu: ";
        cout<<"Faktorial";
        cout<<"Penambahan";
        cout<<"Rata rata";
        cout<<"Masukkan pilihan: ";
        cin>>pilihan;

        if(pilihan == 1) {
            int nilai;
            cout<<"Masukkan nilai: ";
            cin>>nilai;
            cout<<"Faktorial dari "<<nilai<<" adalah "<<faktorial(nilai)<<endl;
        }   else if (pilihan == 2) {
            int a, b;
            cout<<"Masukkan nilai pertama: ";
            cin>>a;
            cout<<"Masukkan nilai kedua: ";
            cin>>b;
            cout<<"Hasil penambahan dari"<<a<<" + "<<b<<" adalah "<<penambahan(a, b)<<endl;
        }   else if(pilihan == 3) {
            float x, y, z;
            cout<<"Masukkan nilai pertama: ";
            cin>>x;
            cout<<"Masukkan nilai kedua: ";
            cin>>y;
            cout<<"Masukkan nilai ketiga: ";
            cin>>z;
            cout<<"Rata rata dari ("<<x<<", "<<y<<", "<<z<<")adalah"<<rata(x, y, z)<<endl;
        }   else {
            cout<<"Pilihan tidak valid!"<<endl;
        }

        cout<<"Terima kasih telah menggunakan aplikasi"<<endl;
    }else{
        cout<<"Username atau password salah"<<endl;
        return 0;
    }

    return 0;
}