#include<iostream>
#include<string>
using namespace std;

string inputKalimat() {
    string kalimat;
    int spaceCount = 0;

    do{
        spaceCount = 0;
        cout<<" Masukkan sebuah kalimat ";
        getline(cin, kalimat);

        for(char c : kalimat){
            if (c == ' ') {
                spaceCount++;
            }
        }

        if(spaceCount < 3) {
            cout<<"Kalimat harus lebih dari 3 kata! ";
        }

    } while(spaceCount < 3);

    return kalimat;
}

char inputChar(){
    char huruf;

    cout<<" Masukkan huruf yang ingin dicari ";
    cin>>huruf;

    return huruf;
}

int menghitungChar(const string& kalimat, char huruf){
    int sum = 0;

    for(char c : kalimat){
        if(c == huruf){
            sum++;
        }
    }
    return sum;
}

int main() {
    string kalimat = inputKalimat();
    char huruf = inputChar();
    int jumlah = menghitungChar(kalimat, huruf);
    cout<<"Karakter "<<huruf<<" muncul sebanyak "<<jumlah<<" kali dalam kalimat "<<endl;
    return 0;
}