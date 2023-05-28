#include<iostream>
using namespace std;

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
phanSo operator +(phanSo ps1, phanSo ps2) {
	phanSo kq;
	kq.tu = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
	kq.mau = ps1.mau * ps2.mau;
	return rutGon(kq);
}
template<typename T>
struct mang {
	int n;
	T a[100];
	T& operator[](int i) {
		return a[i];
	}
	void operator=(mang m) {
		n = m.n;
		for (int i = 0; i < m.n; i++)
			a[i] = m[i];
	}
	mang() {
		n = 0;
	}
};
template<typename T>
T tinhTong(mang<T> m) {
	T tong;
	tong = m[0];
	for (int i = 1; i < m.n; i++) {
		tong = tong + m[i];
	}
	return tong;
}
int main() {
	char x;
	mang<int> a;
	mang<phanSo> b;
	while (cin >> x) {
		if (x == 'a') {
			cin >> a[a.n++];
		}
		if (x == 'b') {
			cin >> b[b.n++];
		}
	}
	if (a.n == 0) {
		cout << "khong co\n";
	}
	else {
		cout << tinhTong(a) << endl;
	}
	if (b.n == 0) {
		cout << "khong co\n";
	}
	else {
		cout << tinhTong(b) << endl;
	}
	return 0;
}