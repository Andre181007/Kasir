#include <iostream>
using namespace std;
void NAMA(){

cout<<"=======================\n";
cout<<"|   BILL PEMBAYARAN   |\n";
cout<<"|     RESTO RPL2      |\n";
cout<<"=======================\n"<<endl;
}
void Harga(){
cout<<"=========================================\n";
cout<<"| Menu  Nama Produk         Harga       |\n";
cout<<"|_______________________________________|\n";
cout<<"|  a:   Bakso Tanpa Tepung  Rp.15000    |\n";
cout<<"|  b:   Jemblem             Rp.5000     |\n";
cout<<"|  c:   Klepon Warna Warni  Rp.10000    |\n";
cout<<"|  d:   Es Dawet cincau     Rp.6000     |\n";
cout<<"|  e:   Pudak               Rp.7000     |\n";
cout<<"|  f:   Es Teh              Rp.3000     |\n";
cout<<"=========================================\n"<<endl;
}
int main(){

NAMA();
Harga();

int a = 15000;
int b = 5000;
int c = 10000;
int d = 6000;
int e = 7000;
int f = 3000;

char menu;
int jumlah;
int total[1000];
char selesai;
int uang;
int kembalian;
int akhir;
int i = 1;

do{	
    cout<< "Pilih menu yang ada : ";
	cin>> menu;
	cout<< "jumlah pesanan : ";
	cin >> jumlah;
	
	//jika menu adalah 'a'
	if(menu=='a'){
		total[i]= a*jumlah;}
	//jika menu adalah 'b'
	else if(menu=='b'){
		total[i]= b*jumlah;}
	//jika menu adalah 'c'
	else if(menu=='c'){
		total[i]= c*jumlah;}
	//jika menu adalah 'd'
	else if(menu=='d'){
		total[i]= d*jumlah;}
	//jika menu adalah 'e'
	else if(menu=='e'){
		total[i]= e*jumlah;}
	//jika menu adalah 'f'
	else if(menu=='f'){
		total[i]= f*jumlah;}
	//jika menu selain dari menu
	else{total[i]=0;
	
	}
	cout<<"Total Harga: Rp." <<total[i] <<endl<<endl ;
	
	
cout<< "Apakah ingin pesan lagi? iya(y)/tidak(t) : ";
cin>>selesai;
cout<<endl<<endl;
//Total akhir
akhir+=total[i];
i++;

}

while(selesai =='y');

cout<<"-------------------------------------------------------\n";
cout<< "Total Harga Adalah Rp. " <<akhir<<endl;
    cout<<"Membayar dengan sejumlah : Rp.";
	cin>> uang;
	kembalian=uang-akhir;
	cout<<"Uang kembalian : Rp."<<kembalian <<endl<<endl;
cout<<"-------------------------------------------------------\n";	
	
cout<<"==========================\n";
cout<<"Terima Kasih Sudah Membeli\n";
cout<<"==========================";
}
