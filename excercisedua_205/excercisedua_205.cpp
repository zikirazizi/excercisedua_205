#include <iostream>
#include <string>
#include <vector>
using namespace std;

class pengarang;
class penerbit {
public:
	string nama;
	vector<pengarang*> daftar_pengarang
		penerbit(string pNama) :nama(pNama) {
		cout << "penerbit  \"" << nama << "\" tidak ada\n";
		{
			~penerbit() {
				cout << "penerbit \"" << nama << "\"tidak ada\n";
			}
	
};

	class pengarang {
	public:
		string nama;
		vector<penerbit*> daftar_penerbit
			penerbit(string pNama) :nama(pNama) {
			cout << "pengarang \"" << nama << "\"tidak ada\n";
		}
		~pengarang() {
			cout << "pengarang \"" << nama << "\"tidak ada\n;
		}

	};

	class buku {
		string nama;

	};

	






	
