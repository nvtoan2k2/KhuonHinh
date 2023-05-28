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
bool operator<(phanSo ps1, phanSo ps2) {
	return ps1.tu * ps2.mau < ps1.mau* ps2.tu;
}
template<typename T>
struct mang {
	int n;
	T a[100];
	T& operator[](int i) {
		return a[i];
	}
	void operator=(mang<T> m) {
		n = m.n;
		for (int i = 0; i < m.n; i++)
			a[i] = m[i];
	}
	mang() {
		n = 0;
	}
};
template<typename T>
T Min(mang<T> m) {
	T kq;
	kq = m[0];
	for (int i = 0; i < m.n; i++) {
		if ( m[i]< kq) {
			kq = m[i];
		}
	}
	return kq;
}
int main() {
	char x;
	mang<int> a;
	mang<float> b;
	mang<phanSo> c;
	while (cin >> x)
	{
		if (x == 'a') {
			cin >> a[a.n++];
		}
		if (x == 'b') {
			cin >> b[b.n++];
		}
		if (x == 'c') {
			cin >> c[c.n++];
		}
	}
	if (a.n == 0) {
		cout << "khong co \n";
	}
	else
	{
		cout << Min(a)<<endl;
	}
	if (b.n == 0) {
		cout << "khong co\n";
	}
	else
	{
		cout << Min(b)<<endl;
	}
	if (c.n == 0) {
		cout << "khong co\n";
	}
	else
	{
		cout << Min(c)<<endl;
	}
	return 0;
}