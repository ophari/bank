//muhamad yusuf
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class Bank {
	private:
		string nama;
		int nomor_rekening = 0;
		char jenis[10];
		int amount = 0;
		int total = 0;
		
	public:
		
		//Fungsi untuk mengisi data nasabah
		void setValue() {
			cout<<"==== Input Data Nasabah ================="<<endl;
			cout<<"Set Nama : ";
			cin>>nama;
			cout<<"Enter Account Number : ";
			cin>>nomor_rekening;
			cout<<"Account Type (Debit/Kredit) : ";
			cin>>jenis;
			cout<<"Enter Balance : ";
			cin>>total;
			cout<<"========================================="<<endl<<endl;
		}
		
		//Fungsi untuk menampilkan data nasabah
		void showData() {
			cout<<"==== Data Nasabah ======================="<<endl;
			cout<<"Nama "<<nama<<endl;
			cout<<"Account Number "<<nomor_rekening<<endl;
			cout<<"Account Type "<<jenis<<endl;
			cout<<"Balance "<<total<<endl;
			cout<<"========================================="<<endl<<endl;
		}
	
		//Fungsi untuk mengisi saldo tabungan
		void deposit() {
			cout<<"==== Isikan Jumlah Deposit =============="<<endl;
			cout<<"Enter Ammount to Deposit\n";
			cin>>amount;
			cout<<"========================================="<<endl;
		}
	
		//Fungsi untuk menampilkan jumlah saldo tabungan
		void showBalance() {
			cout<<"==== Tampilan Saldo ====================="<<endl;
			total += amount;
			cout<<"\nTotal Balance is: "<<total<<endl;
			cout<<"========================================="<<endl<<endl;
		}
		
		//Fungsi untuk menarik saldo tabungan
		void withdraw() {
			cout<<"==== Tarik Saldo ========================"<<endl;
			int jumlah_penarikan, saldo_akhir;
			cout<<"Enter amount to withdraw\n";
			cin>>jumlah_penarikan;
			saldo_akhir = total - jumlah_penarikan;
			cout<<"Jumlah saldo akhir adalah "<<saldo_akhir<<endl;
			cout<<"========================================="<<endl<<endl;
		}
};

//Jalankan program
int main() {
	Bank b; //Buat variabel dari clas bank;
	
	int choice;
	
	//Buat perulangan menggunakan while()
	while(1) {
		cout<<"========== Wellcome ===============\n";
		cout<<"Enter your choice\n";
		cout<<"\t1. Enter Name Account "<<"Number, Account Type\n";
		cout<<"\t2. Balance\n";
		cout<<"\t3. Deposit\n";
		cout<<"\t4. Show Total\n";
		cout<<"\t5. Withdraw\n";
		cout<<"\t6. Cancel\n";
		
		cout<<"Pilih 1 untuk mengisi data nasabah"<<endl;
		cout<<"Pilih : ";
		cin>>choice; //input pilihan
		cout<<endl;
		
		//Buat kondisi pemilihan
		switch(choice) {
			case 1:
				b.setValue(); //panggil variabel b dan gunakan fungsi dari clas bank
				break;
				
			case 2:
				b.showData();
				break;
				
			case 3:
			   b.deposit();
			   break;
			
			case 4:
				b.showBalance();
				break;
				
			case 5:
				b.withdraw();
				break;
				
			case 6:
				cout<<"Terima kasih Sudah Menggunakan ATM Bareng - Bareng";
				exit(1);
				break;
		
			default:
				cout<<"Invalid Choice\n";
		}
	}	
}


