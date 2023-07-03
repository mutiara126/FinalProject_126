#include <iostream>
using namespace std;

class Matakuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0; 
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	int setP() {
		return 0;
	}
	int setA() {
		return 0;
	}
	int setE() {
		return 0;
	}
	int setUA() {
		return 0;
};

class pemrograman : public MataKuliah {
public:
	void input() {
		cout << "Masukkan Presensi: ";
		int setP;
		cin >> setP;
		cout << "Masukkan Activity: ";
		int setA;
		cin >> setA;
		cout << "Masukkan Exercise: ";
		int setE;
		cin >> setA;
		cout << "Masukkan TugasAkhir: ";
		int setUA;
		cin >> setUA;
	}
	float hitungNilaiAkhir() {
		return 0;
	}
	float cekKelulusan() {
		return 0;
	}
	int main() {
		MataKuliah;
		pemrograman;


		//hitungNilaiAkhir
		cout << "NilaiAkhir Dibuat" << endl;
		hitungNilaiAkhir.input();
		Matakuliah = &hitungNilaiAkhir;

		//cekKelulusan
		cout << "Kelulusan dibuat" << endl;
		cekKelulusan.input();
		Matakuliah = &cekKelulusan;

		return 0;

};



	
