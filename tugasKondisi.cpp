#include <iostream> 
#include <cstdlib> 	
using namespace std; 

#define GREEN         "\x1b[92m" 
#define MAGENTA       "\x1b[95m"


int main(){
	int jumlahKemeja, jumlahTopi, jumlahCelana, totalKemeja, totalTopi, totalCelana, totalKeseluruhan;
	double totalDiskon;
	const double diskonKecil = 0.1;
	const double diskonBesar = 0.2;

	cout << GREEN <<"\t\t\t\t============= STUDI KASUS PERKONDISIAN =============\n" << endl;
	cout << GREEN <<"\t\t\t\tDini pergi ke supermarket guna untuk membeli pakaian. Dini membeli :\n";
	cout << GREEN <<"\t\t\t\t\t 1.Kemeja seharga 90000/pcs\n";
	cout << GREEN <<"\t\t\t\t\t 2.Topi seharga 35000/pcs\n";
	cout << GREEN <<"\t\t\t\t\t 3.Celana jeans seharga 100000/pcs\n";
	cout << GREEN <<"\t\t\t\tDini membeli pakaian sesuai keinginan nya sendiri.\n\n";
	cout << GREEN <<"\t\t\t\tDan jika Dini Berbelanja :\n";
	cout << GREEN <<"\t\t\t\t\t 1.Lebih dari 250000 => diskon 10% \n";
	cout << GREEN <<"\t\t\t\t\t 2.Lebih dari 400000 => diskon 20%\n";
	cout << GREEN <<"\t\t\t\t\t 3.kurang atau sama dengan 250000 => tidak mendapatkan diskon\n\n";
	cout << GREEN <<"\t\t\t\t============= STUDI KASUS PERKONDISIAN ============="<< endl;
	system("pause");

	system("cls");
	cout << GREEN <<"\t\t\t\t============= Jumlah belanjaan Dini =============\n" << endl;
	cout << MAGENTA << "\t\t\t\tDini Membeli Kemeja Sebanyak (pcs): " << GREEN;
	cin >> jumlahKemeja;
	cout << MAGENTA <<"\t\t\t\tDini Membeli Topi Sebanyak (pcs): " << GREEN;
	cin >> jumlahTopi;
	cout << MAGENTA <<"\t\t\t\tDini Membeli Celana Jeans Sebanyak (pcs): " << GREEN;
	cin >> jumlahCelana;
	cout << GREEN <<"\n\t\t\t\t============= Jumlah belanjaan Dini =============" << endl;
	system("pause");

	totalKemeja = jumlahKemeja*90000;
	totalTopi = jumlahTopi*35000;
	totalCelana = totalCelana*100000;
	totalKeseluruhan = totalKemeja + totalTopi + totalCelana;

	system("cls");
	if(totalKeseluruhan > 400000){
		totalDiskon = totalKeseluruhan - (totalKeseluruhan*diskonBesar);
		cout << GREEN <<"\t\t\t\t=================== JUMLAH BELANJAAN ===================" << endl;
		cout << MAGENTA <<"\t\t\t\t Jumlah Kemeja yang dibeli : " << jumlahKemeja << " pcs\n" << endl;
		cout << MAGENTA <<"\t\t\t\t Jumlah Topi yang dibeli : " << jumlahTopi << " pcs\n" << endl;
		cout << MAGENTA <<"\t\t\t\t Jumlah Celana Jeans yang dibeli : " << jumlahCelana << " pcs\n" << endl;
		cout << GREEN <<"\t\t\t\t=================== JUMLAH BELANJAAN ===================\n\n\n" << endl;

		cout << GREEN <<"\t\t\t\t=================== TOTAL BELANJAAN ===================\n" << endl;
		cout << MAGENTA <<"\t\t\t\t kamu mendapatkan diskon sebesar 20% "<< endl;
		cout << MAGENTA <<"\t\t\t\t Total Harga sebelum diskon : Rp." << totalKeseluruhan << " Ribu\n" << endl;
		cout << MAGENTA <<"\t\t\t\t Total Harga yang harus di bayar setelah diskon : Rp." << totalDiskon << " Ribu\n" << endl;
		cout << GREEN <<"\t\t\t\t=================== TOTAL BELANJAAN ===================" << endl;
		system("pause");

	}else if(totalKeseluruhan > 250000){
		totalDiskon = totalKeseluruhan - (totalKeseluruhan*diskonKecil);
		
		cout << GREEN <<"\t\t\t\t=================== JUMLAH BELANJAAN ===================" << endl;
		cout << MAGENTA <<"\t\t\t\t Jumlah Kemeja yang dibeli : " << jumlahKemeja << " pcs\n" << endl;
		cout << MAGENTA <<"\t\t\t\t Jumlah Topi yang dibeli : " << jumlahTopi << " pcs\n" << endl;
		cout << MAGENTA <<"\t\t\t\t Jumlah Celana Jeans yang dibeli : " << jumlahCelana << " pcs\n" << endl;
		cout << GREEN <<"\t\t\t\t=================== JUMLAH BELANJAAN ===================\n\n\n" << endl;

		cout << GREEN <<"\t\t\t\t=================== TOTAL BELANJAAN ===================\n" << endl;
		cout << MAGENTA <<"\t\t\t\t kamu mendapatkan diskon sebesar 10% "<< endl;
		cout << MAGENTA <<"\t\t\t\t Total Harga sebelum diskon : Rp." << totalKeseluruhan << " Ribu\n" << endl;
		cout << MAGENTA <<"\t\t\t\t Total Harga yang harus di bayar setelah diskon : Rp." << totalDiskon << " Ribu\n" << endl;
		cout << GREEN <<"\t\t\t\t=================== TOTAL BELANJAAN ===================" << endl;
		system("pause");
	}else{
		cout << GREEN <<"\t\t\t\t=================== JUMLAH BELANJAAN ===================" << endl;
		cout << MAGENTA <<"\t\t\t\t Jumlah Kemeja yang dibeli : " << jumlahKemeja << " pcs\n" << endl;
		cout << MAGENTA <<"\t\t\t\t Jumlah Topi yang dibeli : " << jumlahTopi << " pcs\n" << endl;
		cout << MAGENTA <<"\t\t\t\t Jumlah Celana Jeans yang dibeli : " << jumlahCelana << " pcs\n" << endl;
		cout << GREEN <<"\t\t\t\t=================== JUMLAH BELANJAAN ===================\n\n\n" << endl;

		cout << GREEN <<"\t\t\t\t=================== TOTAL BELANJAAN ===================\n" << endl;
		cout << MAGENTA <<"\t\t\t\t Total Harga yang harus di bayar : Rp." << totalKeseluruhan << " Ribu\n" << endl;
		cout << GREEN <<"\t\t\t\t=================== TOTAL BELANJAAN ===================" << endl;
		system("pause");
	}
}