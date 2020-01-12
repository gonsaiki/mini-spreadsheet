#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int cari (int arr[10][10], int cari){
	char huruf;
	int angka;
	int angka2;
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j++){
			if (arr[i][j]==cari){
				angka = i+1;
				angka2 = j;
				if (angka2==0){
					huruf = 'A';
				}if (angka2==1){
					huruf = 'B';
				}if (angka2==2){
					huruf = 'C';
				}if (angka2==3){
					huruf = 'D';
				}if (angka2==4){
					huruf = 'E';
				}if (angka2==5){
					huruf = 'F';
				}if (angka2==6){
					huruf = 'G';
				}if (angka2==7){
					huruf = 'H';
				}if (angka2==8){
					huruf = 'I';
				}if (angka2==9){
					huruf = 'J';
				}
				cout << huruf <<angka << " ";
			}
		}
	}
}		
	


int main (){
	
	int sheet[10][10] = {0};
	awal:
	cout << "MINI SPREADSHEET" << endl << endl;
	cout << "Pilihan menu" << endl;
	cout << "1. View Sheet" << endl;
	cout << "2. Print Sheet" << endl;
	cout << "3. Functions" << endl;
	
	int pilih;
	cout << endl;
	cout << "Masukan pilihan : ";cin>>pilih;
	cout << endl;
	
	if (pilih == 1){
	cout << "     ";
	for (char i='A'; i<'K'; i++){
			cout << setw(7) << i;
	}cout << endl;
	for (int i=0; i<10; i++){
		cout << setw(5) << i+1;
		for (int j=0; j<10; j++){
			cout << setw (7) << sheet[i][j];
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	goto awal;
	}else if (pilih == 2) {
		cout << "Sukses!, silahkan cek notepad rusak.txt";
		ofstream aditya;
		aditya.open("rusak.txt");
			aditya << "     ";		
			for (char i='A'; i<'K'; i++){
				aditya << setw(7) << i;
			}aditya << endl;
		for (int i=0; i<10; i++){
				aditya << setw(5) << i+1;
			for (int j=0; j<10; j++){
					aditya << setw(7) << sheet[i][j];
				}
		aditya << endl;
	}
	aditya.close();	
	cout << endl;
	system("pause");
	system("cls");
	goto awal;
	}else if (pilih == 3){
		cout << "1. set (pengisian nilai) " << endl;
		cout << "2. del (menghapus nilai)" << endl;
		cout << "3. sum (penjumlahan cell) " << endl;
		cout << "4. search (pencarian data)" << endl;
		cout << "5. sort (mengurutkan data)" << endl;
		cout << "6. mean (menghitung rata-rata)" << endl;
		cout << "7. min (menghitung nilai terkecil)" << endl;
		cout << "8. max (menghitung nilai terbesar)" << endl;	
		cout << endl;
		cout << "*Catatan untuk fungsi search : ";
			cout << "Jika tidak menampilkan cell, berarti data tidak ditemukan"<<endl;	
		string adit;
		int h;
		int j;
		cout << endl;
		cout << "Masukan perintah : ";
		cin>>adit;
		int panjang = adit.length();
		char simpan[panjang];
		for (int i=0; i<panjang; i++){
			simpan[i] = adit[i];
		}		
		for (int i=0; i<panjang; i++){
			if (adit[i]==','){
				h = i;	
			}	
		}
		for (int i=0; i<panjang; i++){
			if (adit[i]=='('){
				j = i;	
			}	
		}
		string search1;
		int nilai1;
		for (int i=j+1; i<panjang-1; i++){
				search1 = search1+adit[i];
			}
			nilai1 = atoi(search1.c_str());
		string anyar;
		int nilai;
		int baris,kolom;
		for (int i=h+1; i<panjang-1; i++){
				anyar = anyar+adit[i];
			}
			nilai = atoi(anyar.c_str());
		string ambilll;
		string ambill;
		int ambil;
		int ambil2;
		for (int i=h+2; i<panjang-1; i++){
			ambilll= ambilll + adit[i];
		}
		ambil = atoi(ambilll.c_str());
		for (int i=j+2; i<h; i++){
			ambill = ambill +adit[i];
		}	
		ambil2 = atoi(ambill.c_str());
		if (adit[0]=='s'&&adit[1]=='e'&&adit[2]=='t'&&adit[3]=='('&& simpan[panjang-1] == ')'){	
			if (adit[4] =='A'){
				kolom = 0;
			}else if (adit[4] =='B'){
				kolom = 1;
			}else if (adit[4] =='C'){
				kolom = 2;
			}else if (adit[4] =='D'){
				kolom = 3;
			}else if (adit[4] =='E'){
				kolom = 4;
			}else if (adit[4] =='F'){
				kolom = 5;
			}else if (adit[4]=='G'){
				kolom = 6;
			}else if (adit[4] =='H'){
				kolom = 7;
			}else if (adit[4] =='I'){
				kolom = 8;
			}else if (adit[4] =='J'){
				kolom = 9;
			}else{
				cout << "Perintah tidak sesuai" << endl;
				system("pause");
				system("cls");
				goto awal;
			}if (adit[5]=='1'&&adit[6]==','){
				baris = 0;
			}else if (adit[5]=='2'&&adit[6]==','){
				baris = 1;
			}else if (adit[5]=='3'&&adit[6]==','){
				baris = 2;
			}else if (adit[5]=='4'&&adit[6]==','){
				baris = 3;
			}else if (adit[5]=='5'&&adit[6]==','){
				baris = 4;
			}else if (adit[5]=='6'&&adit[6]==','){
				baris = 5;
			}else if (adit[5]=='7'&&adit[6]==','){
				baris = 6;
			}else if (adit[5]=='8'&&adit[6]==','){
				baris = 7;
			}else if (adit[5]=='9'&&adit[6]==','){
				baris = 8;
			}else if (adit[5]=='1' && adit[6]=='0' && adit[7]==','){
				baris = 9;
			}else{
				cout << "Perintah tidak sesuai" << endl;
				system("pause");
				system("cls");
				goto awal;
			}
			sheet[baris][kolom] = nilai;
			system("pause");
			system("cls");
			goto awal;
		}else if (adit[0]=='d'&&adit[1]=='e'&&adit[2]=='l'&&adit[3]=='(' && simpan[panjang-1]== ')'){
			if (adit[4] =='A'){
				kolom = 0;
			}else if (adit[4] =='B'){
				kolom = 1;
			}else if (adit[4] =='C'){
				kolom = 2;
			}else if (adit[4] =='D'){
				kolom = 3;
			}else if (adit[4] =='E'){
				kolom = 4;
			}else if (adit[4] =='F'){
				kolom = 5;
			}else if (adit[4]=='G'){
				kolom = 6;
			}else if (adit[4] =='H'){
				kolom = 7;
			}else if (adit[4] =='I'){
				kolom = 8;
			}else if (adit[4] =='J'){
				kolom = 9;
			}else{
				cout << "Perintah tidak sesuai" << endl;
				system("pause");
				system("cls");
				goto awal;
			}if (adit[5]=='1'&&adit[6]==')'){
				baris = 0;
			}else if (adit[5]=='2'){
				baris = 1;
			}else if (adit[5]=='3'){
				baris = 2;
			}else if (adit[5]=='4'){
				baris = 3;
			}else if (adit[5]=='5'){
				baris = 4;
			}else if (adit[5]=='6'){
				baris = 5;
			}else if (adit[5]=='7'){
				baris = 6;
			}else if (adit[5]=='8'){
				baris = 7;
			}else if (adit[5]=='9'){
				baris = 8;
			}else if (adit[5]=='1' && adit[6]=='0'){
				baris = 9;
			}else{
				cout << "Perintah tidak sesuai" << endl;
				system("pause");
				system("cls");
				goto awal;
			}
			sheet[baris][kolom] = 0;
			system("pause");
			system("cls");
			goto awal;
		}else if (adit[0]=='s'&&adit[1]=='e'&&adit[2]=='a'&&adit[3]=='r'&&adit[4]=='c'&&adit[5]=='h'&&adit[6]=='('&&simpan[panjang-1]==')'){
			cari(sheet,nilai1);
			cout << endl;
			system("pause");
			system("cls");
			goto awal;
		}else if (adit[0]=='s'&&adit[1]=='o'&&adit[2]=='r'&&adit[3]=='t'&&adit[4]=='('&&simpan[panjang-1]==')'){
			int col,row;
			if (adit[5] =='1'&&adit[6]==','){
				col = 0;
				for (int i=0; i<10; i++){
				cout << sheet[col][i] << " ";
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]>sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]<sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='2'){
				col = 1;
				for (int i=0; i<10; i++){
				cout << sheet[col][i] << " ";
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]>sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]<sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='3'){
				col = 2;
				for (int i=0; i<10; i++){
				cout << sheet[col][i] << " ";
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]>sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]<sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='4'){
				col = 3;
				for (int i=0; i<10; i++){
				cout << sheet[col][i] << " ";
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]>sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]<sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='5'){
				col = 4;
				for (int i=0; i<10; i++){
				cout << sheet[col][i] << " ";
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]>sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]<sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='6'){
				col = 5;
				for (int i=0; i<10; i++){
				cout << sheet[col][i] << " ";
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]>sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]<sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='7'){
				col = 6;
				for (int i=0; i<10; i++){
				cout << sheet[col][i] << " ";
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]>sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]<sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='8'){
				col = 7;
				for (int i=0; i<10; i++){
				cout << sheet[col][i] << " ";
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]>sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]<sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='9'){
				col = 8;
				for (int i=0; i<10; i++){
				cout << sheet[col][i] << " ";
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]>sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]<sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='1'&&adit[6]=='0'&&adit[7]==','){
				col = 9;
				for (int i=0; i<10; i++){
				cout << sheet[col][i] << " ";
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]>sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}else if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[col][i]<sheet[col][j]){
             			tmp = sheet[col][i];
            			sheet[col][i] = sheet[col][j];
            			sheet[col][j] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[col][i]<<" ";
   				}
			}else if (nilai !=0 && nilai!=1){
				cout << endl;
				cout << "error,perintah salah";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='A'&&adit[6]==','){
				row = 0;
				for (int i=0; i<10; i++){
				cout << sheet[i][row] << endl;
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]>sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]<sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='B'){
				row = 1;
				for (int i=0; i<10; i++){
				cout << sheet[i][row] << endl;
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]>sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]<sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='C'){
				row = 2;
				for (int i=0; i<10; i++){
				cout << sheet[i][row] << endl;
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]>sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]<sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='D'){
				row = 3;
				for (int i=0; i<10; i++){
				cout << sheet[i][row] << endl;
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]>sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]<sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='E'){
				row = 4;
				for (int i=0; i<10; i++){
				cout << sheet[i][row] << endl;
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]>sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]<sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='F'){
				row = 5;
				for (int i=0; i<10; i++){
				cout << sheet[i][row] << endl;
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]>sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]<sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='G'){
				row = 6;
				for (int i=0; i<10; i++){
				cout << sheet[i][row] << endl;
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]>sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]<sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='H'){
				row = 7;
				for (int i=0; i<10; i++){
				cout << sheet[i][row] << endl;
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]>sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]<sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='I'){
				row = 8;
				for (int i=0; i<10; i++){
				cout << sheet[i][row] << endl;
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]>sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]<sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5] =='J'){
				row = 9;
				for (int i=0; i<10; i++){
				cout << sheet[i][row] << endl;
			}
			if (nilai == 1){
			int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]>sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai == 0){
				int tmp;
			for(int i=0; i<9; i++){
       			for(int j=i+1; j<10; j++){
          			if(sheet[i][row]<sheet[j][row]){
             			tmp = sheet[i][row];
            			sheet[i][row] = sheet[j][row];
            			sheet[j][row] = tmp;
         			}
      			}
   			}
   			cout <<endl;
   			cout<<"Data setelah diurutkan : "<<endl;
   				for(int i=0; i<10; i++){
       				cout<<sheet[i][row]<<endl;
   				}
			}if (nilai !=0 && nilai!=1){
				cout << "error";
			}
   			cout << endl;
			system("pause");
			system("cls");
			goto awal;
			}else {
				cout << "masukan perintah dengan sesuai " << endl;
				system("pause");
				system("cls");
				goto awal;
			}
		}else if (adit[0]=='m'&&adit[1]=='a'&&adit[2]=='x'&&adit[3]=='('&&simpan[panjang-1]==')'){
			int col,row;
			if (adit[4] =='1'&&adit[5]==')'){
				col = 0;
				int max = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] > max){
					max = sheet[col][i];
				}
			}
			cout << max << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='2'){
				col = 1;
				int max = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] > max){
					max = sheet[col][i];
				}
			}
			cout << max<< endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='3'){
				col = 2;
				int max = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] > max){
					max = sheet[col][i];
				}
			}
			cout << max<< endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='4'){
				col = 3;
				int max = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] > max){
					max = sheet[col][i];
				}
			}
			cout << max<< endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='5'){
				col = 4;
				int max = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] > max){
					max = sheet[col][i];
				}
			}
			cout << max<< endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='6'){
				col = 5;
				int max = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] > max){
					max = sheet[col][i];
				}
			}
			cout << max<< endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='7'){
				col = 6;
				int max = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] > max){
					max = sheet[col][i];
				}
			}
			cout << max<< endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='8'){
				col = 7;
				int max = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] > max){
					max = sheet[col][i];
				}
			}
			cout << max<< endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='9'){
				col = 8;
				int max = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] > max){
					max = sheet[col][i];
				}
			}
			cout << max<< endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='1'&&adit[5]=='0'&&adit[6]==')'){
				col = 9;
				int max = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] > max){
					max = sheet[col][i];
				}
			}
			cout << max << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='A'&&adit[5]==')'){
				col = 0;
				int max = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] > max){
						max = sheet[i][col];
					}
			}
			cout << max << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='B'){
				col = 1;
				int max = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] > max){
						max = sheet[i][col];
					}
			}
			cout << max << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='C'){
				col = 2;
				int max = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] > max){
						max = sheet[i][col];
					}
			}
			cout << max << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='D'){
				col = 3;
				int max = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] > max){
						max = sheet[i][col];
					}
			}
			cout << max << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='E'){
				col = 4;
				int max = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] > max){
						max = sheet[i][col];
					}
			}
			cout << max << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='F'){
				col = 5;
				int max = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] > max){
						max = sheet[i][col];
					}
			}
			cout << max << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='G'){
				col = 6;
				int max = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] > max){
						max = sheet[i][col];
					}
			}
			cout << max << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='H'){
				col = 7;
				int max = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] > max){
						max = sheet[i][col];
					}
			}
			cout << max << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='I'){
				col = 8;
				int max = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] > max){
						max = sheet[i][col];
					}
			}
			cout << max << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='J'){
				col = 9;
				int max = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] > max){
						max = sheet[i][col];
					}
			}
			cout << max << endl;
			system("pause");
			system("cls");
			goto awal;
			}else{
				cout << "perintah tidak sesuai" << endl;
				system("pause");
				system("cls");
				goto awal;
			}
		}else if (adit[0]=='m'&&adit[1]=='i'&&adit[2]=='n'&&adit[3]=='('&&simpan[panjang-1]==')'){
			int col,row;
			if (adit[4] =='1'&&adit[5]==')'){
				col = 0;
				int min = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] < min){
					min = sheet[col][i];
				}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='2'){
				col = 1;
				int min = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] < min){
					min = sheet[col][i];
				}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='3'){
				col = 2;
				int min = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] < min){
					min = sheet[col][i];
				}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='4'){
				col = 3;
				int min = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] < min){
					min = sheet[col][i];
				}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='5'){
				col = 4;
				int min = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] < min){
					min = sheet[col][i];
				}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='6'){
				col = 5;
				int min = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] < min){
					min = sheet[col][i];
				}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='7'){
				col = 6;
				int min = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] < min){
					min = sheet[col][i];
				}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='8'){
				col = 7;
				int min = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] < min){
					min = sheet[col][i];
				}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='9'){
				col = 8;
				int min = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] < min){
					min = sheet[col][i];
				}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='1'&&adit[5]=='0'&&adit[6]==')'){
				col = 9;
				int min = sheet[col][0];
				for (int i=0; i<10; i++){
				if (sheet[col][i] < min){
					min = sheet[col][i];
				}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='A'&&adit[5]==')'){
				col = 0;
				int min = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] < min){
						min = sheet[i][col];
					}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='B'){
				col = 1;
				int min = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] < min){
						min = sheet[i][col];
					}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='C'){
				col = 2;
				int min = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] < min){
						min = sheet[i][col];
					}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='D'){
				col = 3;
				int min = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] < min){
						min = sheet[i][col];
					}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='E'){
				col = 4;
				int min = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] < min){
						min = sheet[i][col];
					}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='F'){
				col = 5;
				int min = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] < min){
						min = sheet[i][col];
					}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='G'){
				col = 6;
				int min = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] < min){
						min = sheet[i][col];
					}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='H'){
				col = 7;
				int min = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] < min){
						min = sheet[i][col];
					}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='I'){
				col = 8;
				int min = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] < min){
						min = sheet[i][col];
					}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[4]=='J'){
				col = 9;
				int min = sheet[0][col];
				for (int i=0; i<10; i++){
					if (sheet[i][col] < min){
						min = sheet[i][col];
					}
			}
			cout << min << endl;
			system("pause");
			system("cls");
			goto awal;
			}else{
				cout << "perintah tidak sesuai" << endl;
				system("pause");
				system("cls");
				goto awal;
			}
		}else if (adit[0]=='m'&&adit[1]=='e'&&adit[2]=='a'&&adit[3]=='n'&&adit[4]=='('&&simpan[panjang-1]==')'){
			int col;
			float jumlah;
			float mean;
			if (adit[5] =='1'&&adit[6]==')'){
				col = 0;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[col][i];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='2'){
				col = 1;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[col][i];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='3'){
				col = 2;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[col][i];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='4'){
				col = 3;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[col][i];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='5'){
				col = 4;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[col][i];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='6'){
				col = 5;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[col][i];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='7'){
				col = 6;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[col][i];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='8'){
				col = 7;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[col][i];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='9'){
				col = 8;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[col][i];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='1'&&adit[6]=='0'){
				col = 9;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[col][i];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='A'){
				col = 0;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[i][col];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='B'){
				col = 1;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[i][col];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='C'){
				col = 2;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[i][col];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='D'){
				col = 3;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[i][col];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='E'){
				col = 4;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[i][col];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='F'){
				col = 5;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[i][col];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='G'){
				col = 6;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[i][col];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='H'){
				col = 7;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[i][col];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='I'){
				col = 8;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[i][col];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else if (adit[5]=='J'){
				col = 9;
				for (int i=0; i<10; i++){
				jumlah = jumlah + sheet[i][col];
			}
			mean = jumlah/10;
			cout << mean << endl;
			system("pause");
			system("cls");
			goto awal;
			}else {
				cout << "perintah tidak sesuai" << endl;
				system("pause");
				system("cls");
				goto awal;
			}
		}else if (adit[0]=='s'&&adit[1]=='u'&&adit[2]=='m'&&adit[3]=='('&&simpan[panjang-1]==')'){
			int jumlah=0;
			int col;
			if (adit[4]==adit[h+1]){
				if (adit[4]=='A'){
					col = 0;
					for (int i=ambil2-1; i<ambil; i++){
						jumlah = jumlah + sheet[i][col];
						cout << sheet[i][col] << endl;
					}cout << "jumlahnya : " << jumlah << endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (adit[4]=='B'){
					col = 1;
					for (int i=ambil2-1; i<ambil; i++){
						jumlah = jumlah + sheet[i][col];
						cout << sheet[i][col] << endl;
					}cout << "jumlahnya : " << jumlah<< endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (adit[4]=='C'){
					col = 2;
					for (int i=ambil2-1; i<ambil; i++){
						jumlah = jumlah + sheet[i][col];
						cout << sheet[i][col] << endl;
					}cout << "jumlahnya : " << jumlah<< endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (adit[4]=='D'){
					col = 3;
					for (int i=ambil2-1; i<ambil; i++){
						jumlah = jumlah + sheet[i][col];
						cout << sheet[i][col] << endl;
					}cout << "jumlahnya : " << jumlah<< endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (adit[4]=='E'){
					col = 4;
					for (int i=ambil2-1; i<ambil; i++){
						jumlah = jumlah + sheet[i][col];
						cout << sheet[i][col] << endl;
					}cout << "jumlahnya : " << jumlah<< endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (adit[4]=='F'){
					col = 5;
					for (int i=ambil2-1; i<ambil; i++){
						jumlah = jumlah + sheet[i][col];
						cout << sheet[i][col] << endl;
					}cout << "jumlahnya : " << jumlah<< endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (adit[4]=='G'){
					col = 6;
					for (int i=ambil2-1; i<ambil; i++){
						jumlah = jumlah + sheet[i][col];
						cout << sheet[i][col] << endl;
					}cout << "jumlahnya : " << jumlah<< endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (adit[4]=='H'){
					col = 7;
					for (int i=ambil2-1; i<ambil; i++){
						jumlah = jumlah + sheet[i][col];
						cout << sheet[i][col] << endl;
					}cout << "jumlahnya : " << jumlah<< endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (adit[4]=='I'){
					col = 8;
					for (int i=ambil2-1; i<ambil; i++){
						jumlah = jumlah + sheet[i][col];
						cout << sheet[i][col] << endl;
					}cout << "jumlahnya : " << jumlah<< endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (adit[4]=='J'){
					col = 9;
					for (int i=ambil2-1; i<ambil; i++){
						jumlah = jumlah + sheet[i][col];
						cout << sheet[i][col] << endl;
					}cout << "jumlahnya : " << jumlah<< endl;
					system("pause");
					system("cls");
					goto awal;
				}else {
					cout << "Perintah tidak tepat" << endl;
					system("pause");
					system("cls");
					goto awal;
				}
			}else if (ambil==ambil2){
				int batas1,batas2;
				if (adit[4]=='A'){
					batas1 = 0;
				}else if (adit[4]=='B'){
					batas1 = 1;
				}else if (adit[4]=='C'){
					batas1 = 2;
				}else if (adit[4]=='D'){
					batas1 = 3;
				}else if (adit[4]=='E'){
					batas1 = 4;
				}else if (adit[4]=='F'){
					batas1 = 5;
				}else if (adit[4]=='G'){
					batas1 = 6;
				}else if (adit[4]=='H'){
					batas1 = 7;
				}else if (adit[4]=='I'){
					batas1 = 8;
				}else if (adit[4]=='J'){
					batas1 = 9;
				}
				
				if (adit[h+1]=='A'){
					batas2=0;
				}else if (adit[h+1]=='B'){
					batas2=1;
				}else if (adit[h+1]=='C'){
					batas2=2;
				}else if (adit[h+1]=='D'){
					batas2=3;
				}else if (adit[h+1]=='E'){
					batas2=4;
				}else if (adit[h+1]=='F'){
					batas2=5;
				}else if (adit[h+1]=='G'){
					batas2=6;
				}else if (adit[h+1]=='H'){
					batas2=7;
				}else if (adit[h+1]=='I'){
					batas2=8;
				}else if (adit[h+1]=='J'){
					batas2=9;
				}else {
					cout << "error : perintah tidak sesuai"<< endl;
					system("pause");
					system("cls");
					goto awal;
				}
				if (ambil && ambil2 == 1){
					col = 0;
					for (char i=batas1; i<=batas2; i++){
						cout << sheet[col][i] << " ";
						jumlah = jumlah + sheet[col][i];
					}cout << endl;
					cout << "jumlahnya : " << jumlah << endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (ambil==2){
					col = 1;
					for (char i=batas1; i<=batas2; i++){
						cout << sheet[col][i] << " ";
						jumlah = jumlah + sheet[col][i];
					}cout << endl;
					cout << "jumlahnya : " << jumlah << endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (ambil==3){
					col = 2;
					for (char i=batas1; i<=batas2; i++){
						cout << sheet[col][i] << " ";
						jumlah = jumlah + sheet[col][i];
					}cout << endl;
					cout << "jumlahnya : " << jumlah << endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (ambil==4){
					col = 3;
					for (char i=batas1; i<=batas2; i++){
						cout << sheet[col][i] << " ";
						jumlah = jumlah + sheet[col][i];
					}cout << endl;
					cout << "jumlahnya : " << jumlah << endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (ambil==5){
					col = 4;
					for (char i=batas1; i<=batas2; i++){
						cout << sheet[col][i] << " ";
						jumlah = jumlah + sheet[col][i];
					}cout << endl;
					cout << "jumlahnya : " << jumlah << endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (ambil==6){
					col = 5;
					for (char i=batas1; i<=batas2; i++){
						cout << sheet[col][i] << " ";
						jumlah = jumlah + sheet[col][i];
					}cout << endl;
					cout << "jumlahnya : " << jumlah << endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (ambil==7){
					col = 6;
					for (char i=batas1; i<=batas2; i++){
						cout << sheet[col][i] << " ";
						jumlah = jumlah + sheet[col][i];
					}cout << endl;
					cout << "jumlahnya : " << jumlah << endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (ambil==8){
					col = 7;
					for (char i=batas1; i<=batas2; i++){
						cout << sheet[col][i] << " ";
						jumlah = jumlah + sheet[col][i];
					}cout << endl;
					cout << "jumlahnya : " << jumlah << endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (ambil==9){
					col = 8;
					for (char i=batas1; i<=batas2; i++){
						cout << sheet[col][i] << " ";
						jumlah = jumlah + sheet[col][i];
					}cout << endl;
					cout << "jumlahnya : " << jumlah << endl;
					system("pause");
					system("cls");
					goto awal;
				}else if (ambil==10){
					col = 9;
					for (char i=batas1; i<=batas2; i++){
						cout << sheet[col][i] << " ";
						jumlah = jumlah + sheet[col][i];
					}cout << endl;
					cout << "jumlahnya : " << jumlah << endl;
					system("pause");
					system("cls");
					goto awal;
				}else {
					cout << "error : perintah tidak sesuai" << endl;
					system("pause");
					system("cls");
					goto awal;
				}
			}else {
				cout << "Perintah tidak tepat" << endl;
				system("pause");
				system("cls");
				goto awal;
			}
		}else {
			cout << "masukan perintah yang sesuai & pastikan lengkap" << endl;
			system("pause");
			system("cls");
			goto awal;
		}
	}else {
		cout << "Menu tidak tersedia " << endl;
		system("pause");
		system("cls");
		goto awal;
	}
	
	return 0;
}
