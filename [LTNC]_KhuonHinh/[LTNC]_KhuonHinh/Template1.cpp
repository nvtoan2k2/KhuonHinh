#include<iostream>
using namespace std;

template<typename T>
T timMax(T a, T b, T c) {
	T max;
	max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	return max;
}
template<typename T>
void nhap3So() {
	T a, b, c;
	cin >> a >> b >> c;
	cout << timMax<T>(a, b, c)<<endl;
}
struct phanSo {
	int tu, mau;
};
istream& operator>>(istream& is, phanSo& p) {
	is >> p.tu >> p.mau;
	return is;
}
ostream& operator<<(ostream& os, phanSo p) {
	os << p.tu << "/" << p.mau;
	return os;
}
bool operator<(phanSo ps1, phanSo ps2) {
	return ps1.tu * ps2.mau < ps1.mau* ps2.tu;
}
int main() {
	char x;
	cin >> x;
	switch (x)
	{
	case 'a': 
		nhap3So<int>(); break;
	case 'b':
		nhap3So<float>(); break;
	case 'c':
		nhap3So<phanSo>(); break;
	}
	

	return 0;
}