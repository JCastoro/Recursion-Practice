

#include <iostream>
using namespace std;

int minInArray1(int arr[], int arrSize);
int minInArray2(int arr[], int low, int high);

int main()
{
	int arr[10] = { 9, -2, 14, 12, 3, 6, 2, 1, -9, 15 };
	int res1, res2, res3, res4;
	res1 = minInArray1(arr, 10);
	res2 = minInArray2(arr, 0, 9);
	cout << res1 << " " << res2 << endl; //should both be -9
	res3 = minInArray2(arr, 2, 5);
	res4 = minInArray1(arr + 2, 4); //arr+2 is equivalent to &(arr[2])
	cout << res3 << " " << res4 << endl; //should both be 3
	return 0;
}

/*

Recursion hypothesis: when calling minInArray1 on a smaller arrSize it will return the smallest value in the array.
*/
int minInArray1(int arr[], int arrSize) {
	int minValue = arr[0];
	if (arrSize == 1) {
		return minValue;
	}
	else {
		minValue= minInArray1(arr, arrSize - 1);
		if (arr[arrSize - 1] < minValue) {
			minValue = arr[arrSize - 1];
		}
		return minValue;
	}

}

/*

Recursion hypothesis: Recursion hypothesis: when calling minInArray2 on a larger low index it will return the smallest value in the array.
*/
int minInArray2(int arr[], int low, int high) {

	int minValue = arr[0];
	if (low==high) {
		return minValue;
	}
	else {
		minValue = minInArray2(arr, low+1, high);
		if (arr[low] < minValue) {
			minValue = arr[low];
		}
		return minValue;
	}
}

