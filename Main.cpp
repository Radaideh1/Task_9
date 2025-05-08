#include "Header.h"
// Abdullah Radaideh 
int main() {

	int sum = 0;
	double ave = 0;
	const int sizeArray = 5;
	int array[sizeArray];
	fillArray(array, sizeArray);
	printArray(array, sizeArray);
	cout << searchArray(array, sizeArray, 100) << endl;
	reverseArray(array, sizeArray);
	SumAvg(array, sizeArray, sum, ave);

	return 0;
