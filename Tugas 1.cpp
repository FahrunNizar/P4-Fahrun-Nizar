#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, nim;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang : 
	cout<<"                                        SOAL QUIS TENTANG COVID 19\n";
	cout<<"                                            TAHUN 2020-2021\n";
	cout<<"                                               KELOMPOK 11\n";
	cout<<"                             =============================================\n";
	cout<<"bismillahirrohamanirrohim\n";
	cout<<"petunjuk umum:\n";
	cout<<"1.bacalah basmalah kemudian isi username dan pasword pada soal quis tersebut\n";
	cout<<"2.jujur dan hindari keja sama dalam menjawab soal tersebut\n";
	cout<<"3.laporkan kepada penanggung jawab soal apabila ada soal yang salah\n";
	cout<<"4.periksa pekerjaan ada sebelum dikumpulkan\n";
	cout<<"5.bacaah hamdaah setelah mengerjakan soal quis tersebut\n";
	cout<<"Silahkan Login!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"Masukkan Nim  : ";cin>>nim;cout<<"\t\t\n";
			if (user == "Fahrun_Nizar" && nim == "F1B019051")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan Nim anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
    ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"__________________________________________________________________________\n";
	cout<<"1. Nama lain dari virus corona adalah?\n";
	string pilgan1[50]={"a. covid-19","b. covid-20","c. covid-21","d. covid-22"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";        
    cout<<"2. Hewan yang membawa virus corona adalah?\n";
    string pilgan2[50]={"a. kucing","b. kalilawar","c. kelinci","d. belalang"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";        
	cout<<"3. Awal mula munculnya coavid-19 pada tahun 2020 barawal dari negara?\n";
	string pilgan3[50]={"a. Indonesia","b. arab","c. china","d. jepang"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";				
	cout<<"4. Untuk mencegah covid-19,saat seseorang sampai dirumah setealah berpergian maka dia perlu?\n";
	string pilgan4[50]={"a. langsung tidur","b. langsung makan","c. salaman dengan keluarga","d. mencuci tangan dengan hand sani tizer"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";       
    cout<<"5. cara untukmengatasai kecemasan menghadapi covid-19 adalah?\n";
    string pilgan5[50]={"a. menyebarkan berita hoax","b. panik","c. kumpul dengan teman","d. tetap tenang,jangan panik dan mengenaligejala covid-19"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"6. Masa inkubasi covid-19 selama?\n";
	string pilgan6[50]={"a. 17 hari","b. 30 hari","c. 14 hari","d. 20 hari"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}     
	cout<<"\n";
	cout<<"7. tujuan sosial distancing pada masa covid-19,sebgaimana yang diintruksikan oleh pemerintah kepda masyarakat adalah?\n";
	string pilgan7[50]={"a. untuk bermusuhan","b. untuk mengatasi penyebaran covid-19","c. untuk LDR","d. untuk mengurangi tindakan kejahatan"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"8. gejala awal seseorang terkena covid-19 adalah?\n";
	string pilgan8[50]={"a. napas pendek,demam,batuk","b. muncul bintik bintik merah pada tubuh","c. luka dibagian kaki","d. luka dibagian tangan"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"9. jika seseorang pulang dari zona merah covid-19 ke daerah zona hijau,maka yang harus dilakukan adalah?\n";
	string pilgan9[50]={"a. tetap tinggal dirumah","b. melapor kepada RT/RW,kelurahan lalu mengarantina diri selama 14 hari","c. bekerja","d. kumpul"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"10. perhatikan aktivitas dibawah ini:\n";
	cout<<" 1. mencuci tangan dengan hand sanitizer\n";
	cout<<" 2. diam dirumah saja\n";
	cout<<" 3. memakai masker saat berpergian\n";
	cout<<" 4. nongkrong dengan teman\n";
	cout<<" upaya untuk menjaga diri agar terhindar dari covid-19 adalah\n";
	string pilgan10[50]={"a. 2,3,4","b. 1,4","c. 1,2,3","d. 2,4"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[Y/N]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='n' || pilihan=='N')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												       

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"Perolehan Nilai :"<<endl;
            		nilai = benar*10;
            		cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
            		cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
            		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai : 
			cout<<"==========================="<<endl;
			cout<<"alhamdulillah selesai,Terimakasi\n";
			cout<<"==========================="<<endl;
	
}

