#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
using namespace std;
  int flight;
  int penumpang;
  int total;
  char kelas[20];
  char deptr[20];
  char arrv[20];
  char deptr_dt[20];
  int hotel;
  int kamar;
  int total2;
  char destinasi[20];
  char cekin[20];
  char durasi[20];
  int totaltamu;
  int rooms;
  int rental;
  int car;
  int total3;
  char kotawilayah[20];
  char tanggal[20];
  char waktu[20];
  char drs[20];
  int airport;
  int transfer;
  int total4;
  char at [10];
  char tujuan [10];
  char tgl[10];
  char wkt[10];
  char promo[10];
  char username[20];
  char password;
  int i=1,bayar,akhir,diskon,uang;
  char user[20];
  char pass[20];
  int kursi;

void Flight() {
  cout<<" jika ada yang ingin menambahkan kursi maka 1 kursi di hitung 100000"<<endl;
  cout<<" Masukkan asal berangkat:";
  cin>>deptr;
  cout<<" Masukkan Wilayah Tujuan:";
  cin>>arrv;
  cout<<"\n Masukkan tanggal keberangkatan:";
  cin>>deptr_dt;
  cout<<" Menu Flight Traveloka : \n" <<endl;
  cout<<" 1. Lombok - bali       = Rp. 200.000/seat"<<endl;
  cout<<" 2. Lombok - jakarta    = Rp. 250.000/seat"<<endl;
  cout<<" 3. Lombok - Denpasar   = Rp. 260.000/seat"<<endl<<endl;
  cout<<" Masukkan pilihan         : ";
  cin>>flight;
  cout<<"\n Masukkan kelas penerbangan:";
  cin>>kelas;

  if(flight==1){
  	cout<<" Masukkan jumlah kursi tambahan: ";
  	cin>>kursi;
  	cout<<" Masukkan jumlah penumpang: ";
  	cin>>penumpang;
  	total=penumpang*200000 + kursi*100000;
  	printf("\n Total tagihan = Rp. %d", total);
  	 if ((total>=100000) && (total<500000)){
        diskon=total*0.10;
        akhir=total-diskon;
        cout<<endl<<" selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((total>=500000) && (total<1000000)){
        diskon=total*0.2;
        akhir=total-diskon;
        cout<<endl<<" selamat anda mendapatkan diskon 20%"<<endl;
    } else if (total>=1000000){
        diskon=total*0.3;
        akhir=total-diskon;
        cout<<endl<<" selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=total;
    }
    cout<<endl<<" jadi total pembayarannya =Rp. "<<akhir<<endl;;
    cout<<" Masukkan jumlah uang :Rp. ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<" Kembalian anda :Rp. "<<kembalian;
  }

  else if(flight==2){
  	cout<<" Masukkan jumlah kursi tambahan: ";
  	cin>>kursi;
  	cout<<" Masukkan jumlah penumpang: ";
  	cin>>penumpang;
  	total=penumpang*250000 + kursi*100000;
  	printf("\n Total tagihan = Rp. %d", total);
  	 if ((total>=100000) && (total<500000)){
        diskon=total*0.10;
        akhir=total-diskon;
        cout<<endl<<" selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((total>=500000) && (total<1000000)){
        diskon=total*0.2;
        akhir=total-diskon;
        cout<<endl<<" selamat anda mendapatkan diskon 20%"<<endl;
    } else if (total>=1000000){
        diskon=total*0.3;
        akhir=total-diskon;
        cout<<endl<<" selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=total;
    }
    cout<<endl<<" jadi total pembayarannya =Rp. "<<akhir<<endl;;
    cout<<" Masukkan jumlah uang :Rp. ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<" Kembalian anda :Rp. "<<kembalian;
  }

  else if(flight==3){
  	cout<<" Masukkan jumlah kursi tambahan: ";
  	cin>>kursi;
  	cout<<" Masukkan jumlah penumpang: ";
  	cin>>penumpang;
  	total=penumpang*260000 + kursi*100000;
  	printf("\n Total tagihan = Rp. %d", total);
  	 if ((total>=100000) && (total<500000)){
        diskon=total*0.10;
        akhir=total-diskon;
        cout<<endl<<" selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((total>=500000) && (total<1000000)){
        diskon=total*0.2;
        akhir=total-diskon;
        cout<<endl<<" selamat anda mendapatkan diskon 20%"<<endl;
    } else if (total>=1000000){
        diskon=total*0.3;
        akhir=total-diskon;
        cout<<endl<<" selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=total;
    }
    cout<<endl<<" jadi total pembayarannya =Rp. "<<akhir<<endl;;
    cout<<" Masukkan jumlah uang :Rp.  ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<" Kembalian anda :Rp. "<<kembalian;
  }

  else {
  	cout<<" Pilihan menu tidak tersedia ";
  }

}


void Hotel() {
  cout<<"masukkan destinasi yang di inginkan=";
  cin>>destinasi;
  cout<<"silahkan cek in=";
  cin>>cekin;
  cout<<"Menu Hotel Traveloka 1 malam dengan harga sebagai berikut: \n" <<endl;
  cout<<"Masukkan Hotel pilihan anda:"<<endl;
  cout<<" 1. lombok raya            = Rp. 350.000/malam"<<endl;
  cout<<" 2. Lombok Garden Hotel    = Rp. 350.000/malam"<<endl;
  cout<<" 3. aruna lombok           = Rp. 450.000/malam"<<endl<<endl;
  cout<<"Masukkan pilihan: ";
  cin>>hotel;
  cout<<"Durasi anda dihotel tersebut:";
  cin>>durasi;
  if(hotel==1)
  {
	cout<<"jumlah tamu lebih:";
      cin>>totaltamu;
	cout<<"Masukkan jumlah kamar yang dipesan: ";
  	cin>>kamar;
  	total=kamar*350000 + totaltamu*20000;
  	printf("\n Total tagihan = Rp. %d", total);
  	 if ((total>=100000) && (total<500000)){
        diskon=total*0.10;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((total>=500000) && (total<1000000)){
        diskon=total*0.2;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 20%"<<endl;
    } else if (total>=1000000){
        diskon=total*0.3;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=total;
    }
    cout<<endl<<"jadi total pembayarannya =Rp. "<<akhir<<endl;;
    cout<<"Masukkan jumlah uang Rp. : ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian anda :Rp.  "<<kembalian;
  }


  else if(hotel==2)
  {
    cout<<"jumlah tamu:";
    cin>>totaltamu;
    cout<<"Masukkan jumlah kamar yang dipesan: ";
  	cin>>kamar;
  	total=kamar*350000 + totaltamu*20000 ;
  	printf("\n Total tagihan = Rp. %d", total);
  	 if ((total>=100000) && (total<500000)){
        diskon=total*0.10;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((total>=500000) && (total<1000000)){
        diskon=total*0.2;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 20%"<<endl;
    } else if (total>=1000000){
        diskon=total*0.3;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=total;
    }
    cout<<endl<<"jadi total pembayarannya =Rp.  "<<akhir<<endl;;
    cout<<"Masukkan jumlah uang :Rp. ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian anda :Rp.  "<<kembalian;
  }

  else if(hotel==3)
  {
    cout<<"jumlah tamu:";
    cin>>totaltamu;
  	cout<<"Masukkan jumlah kamar yang dipesan: ";
  	cin>>kamar;
  	total=kamar*450000 + totaltamu*20000 ;
  	printf("\n Total tagihan = Rp. %d", total);
  	 if ((total>=100000) && (total<500000)){
        diskon=total*0.10;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((total>=500000) && (total<1000000)){
        diskon=total*0.2;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 20%"<<endl;
    } else if (total>=1000000){
        diskon=total*0.3;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=total;
    }
    cout<<endl<<"jadi total pembayarannya =Rp. "<<akhir<<endl;;
    cout<<"Masukkan jumlah uang :Rp. ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian anda :Rp. "<<kembalian;
  }

  else {
  	cout<<" Pilihan menu tidak tersedia ";
  }

}

void Carrental() {

  cout<<"masukkan kota atau wilayah anda: ";
  cin>>kotawilayah;
  cout<<"masukkan tanggal mulai rental: ";
  cin>>tanggal;
  cout<<"masukkan durasi: ";
  cin>>drs;
  cout<<"masukkan waktu pengambilan anda: ";
  cin>>waktu;
  cout<<"Menu Car Rental Traveloka ijang: \n" <<endl;
  cout<<" 1. Lombok Rent Cars Company  = Rp. 196.000/hari"<<endl;
  cout<<" 2. Lombok Car Rental         = Rp. 185.000/hari"<<endl;
  cout<<" 3. Surya Rent Car            = Rp. 150.000/hari"<<endl<<endl;
  cout<<"Masukkan pilihan                 : ";
  cin>>rental;

  if(rental==1){
  	cout<<"Masukkan jumlah mobil yang disewa: ";
  	cin>>car;
  	total=car*196000;
  	printf("\n Total tagihan = Rp. %d", total);
  	 if ((total>=100000) && (total<500000)){
        diskon=total*0.10;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((total>=500000) && (total<1000000)){
        diskon=total*0.2;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 20%"<<endl;
    } else if (total>=1000000){
        diskon=total*0.3;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=total;
    }
    cout<<endl<<"jadi total pembayarannya =Rp. "<<akhir<<endl;;
    cout<<"Masukkan jumlah uang :Rp. ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian anda :Rp. "<<kembalian;
  }

  else if(rental==2){
    cout<<"Masukkan jumlah mobil yang disewa: ";
  	cin>>car;
  	total=car*185000;
  	printf("\n Total tagihan = Rp. %d", total);
  	 if ((total>=100000) && (total<500000)){
        diskon=total*0.10;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((total>=500000) && (total<1000000)){
        diskon=total*0.2;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 20%"<<endl;
    } else if (total>=1000000){
        diskon=total*0.3;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=total;
    }
    cout<<endl<<"jadi total pembayarannya =Rp. "<<akhir<<endl;;
    cout<<"Masukkan jumlah uang :Rp. ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian anda :Rp. "<<kembalian;
  }

  else if(rental==3){
  	cout<<"Masukkan jumlah mobil yang disewa: ";
  	cin>>car;
  	total=car*150000;
  	printf("\n Total tagihan = Rp. %d", total);
  	 if ((total>=100000) && (total<500000)){
        diskon=total*0.10;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((total>=500000) && (total<1000000)){
        diskon=total*0.2;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 20%"<<endl;
    } else if (total>=1000000){
        diskon=total*0.3;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=total;
    }
    cout<<endl<<"jadi total pembayarannya =Rp. "<<akhir<<endl;;
    cout<<"Masukkan jumlah uang Rp.: ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian anda :Rp. "<<kembalian;
  }

  else {
  	cout<<" Pilihan menu tidak tersedia ";
  }

}
void Airport() {

  cout<<"masukkan anda darimana:";
  cin>>at;
  cout<<"masukkan tujuan anda:";
  cin>>tujuan;
  cout<<"masukkan tanggal pengambilan keberangkatn anda:";
  cin>>tgl;
  cout<<"masukkan waktu yanng anda ambil:";
  cin>>wkt;
  cout<<" Menu Airport Transfer Traveloka : \n" <<endl;
  cout<<" 1. Lombok Private Custom Tour  = Rp. 892.000/pax"<<endl;
  cout<<" 2. Zizo On Vacation            = Rp. 1.150.000/pax"<<endl;
  cout<<" 3. Explore Lombok              = Rp. 925.000/pax"<<endl<<endl;
  cout<<" Masukkan pilihan                : ";
  cin>>airport;

  if(airport==1){
  	cout<<" Masukkan jumlah orang dalam grup: ";
  	cin>>transfer;
  	total=transfer*892000;
  	printf("\n Total tagihan = Rp. %d", total);
  	 if ((total>=100000) && (total<500000)){
        diskon=total*0.10;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((total>=500000) && (total<1000000)){
        diskon=total*0.2;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 20%"<<endl;
    } else if (total>=1000000){
        diskon=total*0.3;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=total;
    }
    cout<<endl<<"jadi total pembayarannya =Rp. "<<akhir<<endl;;
    cout<<"Masukkan jumlah uang :Rp. ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian anda :Rp. "<<kembalian;
  }

  else if(airport==2){
    cout<<" Masukkan jumlah orang dalam grup: ";
  	cin>>transfer;
  	total=transfer*1150000;
  	printf("\n Total tagihan = Rp. %d", total);
  	 if ((total>=100000) && (total<500000)){
        diskon=total*0.10;
        akhir=total-diskon;
        cout<<endl<<" selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((total>=500000) && (total<1000000)){
        diskon=total*0.2;
        akhir=total-diskon;
        cout<<endl<<" selamat anda mendapatkan diskon 20%"<<endl;
    } else if (total>=1000000){
        diskon=total*0.3;
        akhir=total-diskon;
        cout<<endl<<" selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=total;
    }
    cout<<endl<<"jadi total pembayarannya =Rp. "<<akhir<<endl;;
    cout<<"Masukkan jumlah uang :Rp. ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian anda :Rp. "<<kembalian;
  }

  else if(airport==3){
  	cout<<" Masukkan jumlah orang dalam grup: ";
  	cin>>transfer;
  	total=transfer*925000;
  	printf("\n Total tagihan = Rp. %d", total);
  	 if ((total>=100000) && (total<500000)){
        diskon=total*0.10;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((total>=500000) && (total<1000000)){
        diskon=total*0.2;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 20%"<<endl;
    } else if (total>=1000000){
        diskon=total*0.3;
        akhir=total-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=total;
    }
    cout<<endl<<"jadi total pembayarannya =Rp. "<<akhir<<endl;;
    cout<<"Masukkan jumlah uang :Rp. ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian anda :Rp. "<<kembalian;
  }

  else {
  	cout<<" Pilihan menu tidak tersedia ";
  }
}


main (void){

 do{
  cout << "selamat datang Fahrun nizar di Traveloka.com"<<endl<<endl;
  cout << "______________kelompok 11___________________"<<endl<<endl;
  cout << "Username : ";
  cin >> user;
  cout << "Password : ";
  cin >> pass;

   if (strcmp(user,"FAHRUN_NIZAR") ==0 && strcmp(pass,"F1B019051") ==0){
   cout << "\n_________________________\n";
   cout << "  TERIMA KASIH  SUDAH LOGIN   " << endl;
   cout << "_________________________\n\n";
   cout<<" kemudian Tekan ENTER untuk melanjutkan! \n\n";
   getch();


 int z;
 char pil1;
 int g = 0;
 do{
system("cls");
 cout<<"  MENU TRAVELOKA.COM          		 "<<endl;
 cout<<"_____________________________________"<<endl<<endl;
 cout<<"  Pilih Menu Yang Tersedia:          "<<endl;
 cout<<"_____________________________________"<<endl;
 cout<<"                                     "<<endl;
 cout<<"           1. Flight           		 "<<endl;
 cout<<"           2. Hotel            		 "<<endl;
 cout<<"           3. Car Rental           	 "<<endl;
 cout<<"           4. Airport Transfer       "<<endl;
 cout<<"           5. Keluar                 "<<endl;
 cout<<"                                     "<<endl;
 cout<<endl;
 cout<<"Masukkan Pilihan Anda :";
 cin>>z;
 cout<<endl;
system("cls");

 switch(z)
 {
  case 1: //flights
    Flight();
  break;//ijang

  case 2: //hotels
   Hotel();
  break;//ijang

  case 3://car rental
    Carrental();
  break;//ijang

  case 4://air port
    Airport();
  break;//ijang

  case 5:
   cout<<" Anda Telah Keluar Dari Program ini    \n\n";
   cout<<"     _____ Terima Kasih_____\n        "<<endl;
 }


 cout<<endl<<"Lanjutkan Ke Menu Utama [Y/N] :";
 cin>>pil1;
 cout<<"\n_________________________________";
 cout<<"\n Terima Kasih Atas Kunjungannya\n";
 cout<<"\n  Traveloka.com x nizar \n";
 }
 while (pil1=='y' || pil1=='Y');
 return 0;
getch();
}

  else{
    cout<<"\n________________________________________\n";
    cout<<  "  Maaf USERNAME & PASSWORD Anda Salah!  " << endl;
    cout<<  "________________________________________\n\n";
   i = i +1;
  }
 }
 while (i <= 3);

 cout << "Anda Telah 3x Memasukan USERNAME & PASSWORD Yang Salah\n";
 cout << "Mohon Maaf Akun Anda Kami Blockir, Terima Kasih..";
 exit(0);//ijang traveloka
 
 getch();
}

