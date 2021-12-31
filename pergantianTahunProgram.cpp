#include <iostream>
#include <windows.h>
using namespace std;

//Program Dibuat oleh Roy Rafles Matorang Pasaribu
//pada 31 Desember 2021

//fungsi prosedur waktu
void waktu(){
	
	//deklarasi variabel
	int i;
	cout<<"Running Program ini 1 menit sebelum Pergantian Tahun"<<endl;
	for(int i=3; i>=0 ; i--){
		cout << "waktu : ";
		cout << i;
		Sleep(2000);   //jeda 2 detik
		system("cls");	//menghapus layar
	}
}
//minimal terdapat 1 fungsi 
int main(){
	//memanggil prosedur fungsi waktu
	waktu();
	cout<<"Selamat Tahun Baru 2022 Semoga Tahun ini menjadi tahun yang lebih baik dari tahun 2021"<<endl;
	cout<<"\t\t\t\t\tTuhan Memberkati";
	
	//karena menggunakan fungsi main()
	return 0;
}
