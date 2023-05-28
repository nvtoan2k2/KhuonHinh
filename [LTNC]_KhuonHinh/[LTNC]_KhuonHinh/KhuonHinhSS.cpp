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
bool operator==(phanSo ps1, phanSo ps2) {
	return ps1.tu * ps2.mau == ps1.mau * ps2.tu;
}
template<typename T>
void soSanh(T a, T b) {
	if (a == b) {
		cout << "true";
	}
	else
	{
		cout << "false";
	}
}
template<typename T>
void nhap() {
	T a,b;
	cin >> a >> b;
	soSanh(a, b);
}
int main() {
	char x;
	cin >> x;
	switch (x)
	{
	case'a':  nhap<int>(); break;
	case'b':  nhap<float>(); break;
	case'c':  nhap<phanSo>(); break;
	}
	return 0;
}