#define MAX 100
#include<iostream>
using namespace std;
int main() {

	int a[MAX],b[MAX], i, j, n, c = 0, p = 0;

	cout << "enter the limit:";
	cin >> n;
	cout << "enter strings" << endl;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	for (i = 0; i < n; i++) {
		if (a[i] == 0) 
			c++;
		
		else
			c = 0;
		if (c == 5) {
			p++;
			n = n + 1;
			for (j = n - 1; j > i; j--)
				a[j] = a[j - 1];
			a[i + 1] = 1;
		}
	}
	cout << "After bit stuffing the string is" << endl;
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	n = n - p;
	for (i = 0; i < n; i++)
		cout << b[i] << " ";
	cout << endl;

}