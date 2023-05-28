#include<iostream>
using namespace std;

struct phanSo {
	int tu, mau;
	phanSo() {
		tu = 0;
		mau = 1;
	}
};
istream& operator>>(istream& is, phanSo& p) {
	is >> p.tu >> p.mau;
	return is;
}
ostream& operator<<(ostream& os, phanSo p) {
	os << p.tu << "/" << p.mau;
	return os;
}
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
phanSo rutGon(phanSo p) {
	int x = gcd(p.tu, p.mau);
	p.tu /= x;
	p.mau /= x;
	return p;
}
phanSo operator+(phanSo ps1, phanSo ps2) {
	phanSo kq;
	kq.tu = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
	kq.mau = ps1.mau * ps2.mau;
	return rutGon(kq);
}
template<class T>
T mang() {
	T tong;
	cin >> tong;
	T y;
	while (cin >> y) {
		tong  = tong + y;
	}
	return tong;
}
int main() {
	char x;
	
	cin >> x;
	switch (x)
	{
	case'a': cout << mang<int>(); break;
	case'b': cout << mang<phanSo>(); break;
	}
	return 0;
}