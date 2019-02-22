#include <iostream>
#include <iomanip>
using namespace std;
const int maxC = 10, maxR = 10;

int main() {
	int a[maxR][maxC], b[maxR][maxC], c[maxR][maxC], rA, rB, cA, cB;
	cout << "Nhap dong va cot mang a:";
	cin >> rA >> cA;
	cout << "Nhap dong va cot mang b:";
	cin >> rB >> cB;

	cout << "Nhap mang a: ";
	for (int i = 0; i < rA; i++) {
		cout << "\nnhap " << cA << " so nguyen vao dong thu " << i+1 << ": ";
		for (int j = 0; j < cA; j++) {
			cin >> a[i][j];
		}
	}
	cout << "Nhap mang b: ";
	for (int i = 0; i < rB; i++) {
		cout << "\nnhap " << cB << " so nguyen vao dong thu " << i+1 << ": ";
		for (int j = 0; j < cB; j++) {
			cin >> b[i][j];
		}
	}
	/*cout << "Tong cua hai mang a vs b la:";
	for (int i = 0; i < rA; i++) {
		for (int j = 0; j < cA; j++) {
			cout<<setw(4)<<b[i][j]+a[i][j];
		}
		cout << endl;
	}*/
	cout << "Tich cua hai mang a vs b la:";
	c[0][0] = 0;
	for (int i = 0; i < rA; i++) {
		for (int j = 0; j < cB; j++) {
			for (int k = 0; k < rA; k++)
				c[i][j] += a[i][k] * b[k][i];
			cout << setw(6) << c[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}