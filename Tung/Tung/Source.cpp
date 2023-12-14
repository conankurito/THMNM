#include"Header.h"

void nhapSo() {
	for (int i = 1; i <= 5; i++) {
		cout << "Chay for ngoai lan " << i << " -> ";
		for (int j = 1; j <= 5; j++)
			cout << "Chay for trong lan " << j << " -> ";
		cout << "\n\n\n";
	}
}