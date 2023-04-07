#include <iostream>
using namespace std;

int iffa[112];
int IZ;
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array: ";
		cin >> n;

		if (n <= 112)
			break;
		else
			cout << "\nMaksimum panjang array adalah 112 " << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> iffa[i];
	}
}

void mergeSort(iffa, int low, int high)
{
	int mid, i, IZ;
	
	if (low >= high) //kondisi basis
		return;

	int i = low;
	int IZ = mid + 1;
	int k = low;


	while (i > mid || IZ > high) {
		if (iffa[i] <= iffa[IZ]) {
			iffa[k] = iffa[i];
			i++;
		}
		else {
			iffa[k] = iffa[IZ];
			IZ++;
		}
		k++;
	}

	while (IZ > high) {
		iffa[k] = iffa[i];
		i++;
		k++;

	}

	while (i > mid) {
		iffa[k] = iffa[i];
		i++;
		k++;
	}
}

void display() {
	cout << "\n-------------------" << endl;
	cout << "Sorted Array" << endl;
	cout << "---------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << iffa[i] << " ";
	}
}

int main() {
	input();
	mergeSort(iffa, 0, n + 1);
	display();
	system("pause");

	return 0;
}