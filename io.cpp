#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double harga, diskon, hargaAkhir;

    cout << "Harga diatas 500000, mendapatkan diskon 20% + 30%" << endl;
    cout << "Masukkan harga barang: ";
    cin >> harga;

    if (harga < 500000) {
        diskon = harga * 0.2;
        hargaAkhir = harga - diskon;
        cout << "Diskon: 20%" << endl;
    } else {
        diskon = (harga * 0.2) + (harga * 0.3);
        hargaAkhir = harga - diskon;
        cout << "Diskon: 20% + 30%" << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Jumlah diskon: Rp " << diskon << endl;
    cout << "Harga setelah diskon: Rp " << hargaAkhir << endl;

    return 0;
}