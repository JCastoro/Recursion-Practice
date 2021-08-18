
#include <iostream>
using namespace std;

int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);

int main()
{
	cout << "_______A_______"<<endl;
	int arr[] = { 2,-1,3,10 };
	int arrSize = 4;
	cout << sumOfSquares(arr, arrSize);
	cout << endl;
	cout << endl;

	cout <<endl<< "_______B_______" << endl;
	int arr1[] = { 2,3,5,3 };
	int arr2[] = { 2,3,3,6 };
	
	int arrSizeB = 4;
	bool isArraySorted = false;

	isArraySorted = isSorted(arr1, arrSizeB);
	if (isArraySorted) {
		cout << "Array is in ascending order";
	}
	else {
		cout << "Array is NOT in ascending order";
	}
	cout << endl;

}

/*

Recursion hypothesis: when calling sumOfSquares on a smaller array it will output the sum of the squares of each index in the smaller array
*/
int sumOfSquares(int arr[], int arrSize) {
	int sum = 0;
	if (arrSize == 1) {

		return arr[0] * arr[0];
	}
	else {
		sum = sumOfSquares(arr, arrSize - 1);
		sum += (arr[arrSize - 1] * arr[arrSize - 1]);
		return sum;
	}
}

/*

Recursion hypothesis: when calling isSorted on a smaller size array it will output true if that array is sorted in ascending order.
*/

bool isSorted(int arr[], int arrSize){
	
	if (arrSize == 1) {
		return true;
	}
	else {
		if (isSorted(arr, arrSize - 1)) {
			if (arr[arrSize - 2] <= arr[arrSize - 1]) {
				return true;
			}
			else {
				return false;
			}
		}

	}

}
