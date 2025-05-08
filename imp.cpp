#include "Header.h"


void fillArray(int list[], const int listSize) {

	for (int i = 0; i < listSize; i++) {
		cin >> list[i];
	}

}

void printArray(const int list[], const int listSize) {

	for (int i = 0; i < listSize; i++) {
		cout << list[i] << " ";

	}
	cout << endl;
}

int searchArray(const int list[], const int listSize, int number) {

	for (int i = 0; i < listSize; i++) {
		if (list[i] == number)
			return i;
	}
	return -1;
}

void reverseArray(int list[], const int listSize) {
	for (int i = listSize - 1; i >= 0; i--)
		cout << list[i] << " ";

}

void SumAvg(const int list[], const int listSize, int& sum, double& avg) {

	float sumAvg = 0;
	for (int i = 0; i < listSize; i++) {
		sumAvg += list[i];
	}
	avg = sumAvg / listSize;

}

