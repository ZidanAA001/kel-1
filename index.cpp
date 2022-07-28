#include <iostream>

using namespace std;

int main(){
	
	string nama;
	int jabatan;
	string pendidikan;
	int jamkerja;
	
	int gajibulan;
	int tunjanganjabatan;
	int tunjanganpendidikan;
	int lembur;
	
	char u;
	q:
	
	cout << "PROGRAM HITUNG GAJI KARYAWAN " << endl;
	
	cout << "Nama Karyawan : ";
	cin >> nama;
	
	cout << "Golongan Jabatan : ";
	cin >> jabatan;
	
	cout << "Pendidikan : ";
	cin >> pendidikan;
	
	cout << "Jumlah jam kerja : ";
	cin >> jamkerja;
	
	cout << endl;
	
	cout << "Nama Karyawan : " << nama << endl;
	
	cout << "	Tunjangan Jabatan Rp ";
	
	switch(jabatan) {
		case 1 :
			if(jabatan == 1){
				tunjanganjabatan = 2000000 * 5/100;
				cout << tunjanganjabatan << endl;
			}
		break;
		case 2 : 
			if(jabatan == 2){
				tunjanganjabatan = 2000000 * 10/100;
				cout << tunjanganjabatan << endl;
			}
		break;
		case 3 :
			if(jabatan == 3){
				tunjanganjabatan = 2000000 * 15/100;
				cout << tunjanganjabatan << endl;
			}
		break;
	}
	
	cout << "	Tunjangan Pendidikan Rp ";
	
	if(pendidikan == "SMA"){
		tunjanganpendidikan = 2000000 * 2.5/100;
		cout << tunjanganpendidikan << endl;
	}
	if(pendidikan == "D3"){
		tunjanganpendidikan = 2000000 * 5/100;
		cout << tunjanganpendidikan << endl;
	}
	if(pendidikan == "S1"){
		tunjanganpendidikan = 2000000 * 10/100;
		cout << tunjanganpendidikan << endl;
	}
	
	cout << "	Honor lembur Rp ";
	
	if(jamkerja >8){
		cout << (jamkerja-8) * 3000 << endl;
	} else {
		cout << 0 << endl;
	}
	
	gajibulan = 2000000;
	lembur = (jamkerja-8) * 3000;
	
	cout << "Total Gaji Rp " << gajibulan + tunjanganjabatan + tunjanganpendidikan + lembur << endl;
	
	cout << "Apakah Anda ingin menginput ulang? (Y/T)?";
	cin >> u;
	if(u== 'Y' || u=='y'){
		system("cls");
		goto q;
	} else {
		exit(0);
	}
	
	return 0;
}