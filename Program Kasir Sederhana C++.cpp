#include<iostream>
using namespace std;

int main(){
    int harga, jml_barang, total, pilihan;
    string item;
    cout<<"Item Tersedia : "<<endl;
    cout<<"1. Kulkas \t: Rp. 4.000.000"<<endl;
    cout<<"2. TV \t: Rp. 3.000.000"<<endl;
    cout<<"3. Ac \t: Rp. 2.000.000"<<endl;
    cout<<"4. Mesin Cuci \t: Rp. 6.000.000"<<endl;
    cout<<"5. Laptop Macbook \t: Rp. 15.000.000"<<endl;
    cout<<"6. Rice Coocker\t: Rp. 500.000"<<endl;
    cout<<"7. Selesai"<<endl;
    cout<<"Isikan Kode : ";
    cin>>pilihan;
    do{
        cout<<"Isikan Kode : ";
        cin>>pilihan;
        switch(pilihan){ 
        case 1 :
            item = "Kulkas";
            harga = 4000000;
            cout<<"Jumlah item : ";
            cin>>jml_barang;
            total += harga * jml_barang;
            cout<<jml_barang<<" "<<item;
            cout<<" = Rp. "<<harga*jml_barang<<endl;
            break;
        case 2 :
            item = "TV";
            harga = 3000000;
            cout<<"Jumlah item : ";
            cin>>jml_barang;
            total += harga * jml_barang;
            cout<<jml_barang<<" "<<item;
            cout<<" = Rp. "<<harga*jml_barang<<endl;
            break;
        case 3 :
            item = "Ac";
            harga = 2000000;
            cout<<"Jumlah item : ";
            cin>>jml_barang;
            total += harga * jml_barang;
            cout<<jml_barang<<" "<<item;
            cout<<" = Rp. "<<harga*jml_barang<<endl;
            break;
        case 4 :
            item = "Mesin Cuci";
            harga = 6000000;
            cout<<"Jumlah item : ";
            cin>>jml_barang;
            total += harga * jml_barang;
            cout<<jml_barang<<" "<<item;
            cout<<" = Rp. "<<harga*jml_barang<<endl;
            break;
        case 5 :
            item = "Laptop Macbook";
            harga = 15000000;
            cout<<"Jumlah item : ";
            cin>>jml_barang;
            total += harga * jml_barang;
            cout<<jml_barang<<" "<<item;
            cout<<" = Rp. "<<harga*jml_barang<<endl;
            break;
        case 6 :
            item = "Rice Coocker";
            harga = 500000;
            cout<<"Jumlah item : ";
            cin>>jml_barang;
            total += harga * jml_barang;
            cout<<jml_barang<<" "<<item;
            cout<<" = Rp. "<<harga*jml_barang<<endl;
            break;
        case 7 :
            cout<<"Total Belanja : Rp. "<<total<<endl;
            pilihan = 7;
            break;
        default :
            cout<<"Pilihan Salah"<<endl;
            break;
        }
    } while(pilihan != 7);
    cout<<"Terimakasih"<<endl;
}