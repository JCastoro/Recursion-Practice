
#include <iostream>
using namespace std;



//Testing if this pulls in
int testInt;

void printTriangle(int n);
void printOpositeTriangles(int n);
void printRuler(int n);

int main()
{
	cout << "---------A--------"<<endl;
	printTriangle(10);
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "---------B--------" << endl;
	printOpositeTriangles(4);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "---------C--------" << endl;
	printRuler(5);

}




/*

Recursion hypothesis: when calling printTriangle on a smaller n, it will print a triangle counting up to n stars in the max row
*/
void printTriangle(int n) {
	if (n == 1) {
		cout << "*";
	}


	else {
		printTriangle(n - 1);
		cout << endl;
		for (int i = 0; i < n; i++) {
			cout << "*";
		}
	}

}



/*

Recursion hypothesis: when calling printOpositeTriangle on a smaller n, it will print an opposite triangle with n stars as the base to both sides
*/
void printOpositeTriangles(int n) {
	if (n == 1) {
		cout << "*" << endl << "*";
	}
	else {
		for (int i = 0; i < n; i++) {
			cout << "*";
		}
		cout << endl;

		printOpositeTriangles(n - 1);
		cout << endl;
		for (int i = 0; i < n; i++) {
			cout << "*";
		}
	}

	


}

/*

Recursion hypothesis: when calling printRuler on a smaller number n, it will print a ruler ith the middle line size n
*/
void printRuler(int n) {
	if (n == 1) {
		cout << "-";
	}
	else {
		printRuler(n - 1);
		cout << endl;
		for (int i = 0; i < n; i++) {
			cout << "-";
		}  
		cout << endl;
		printRuler(n - 1);
	}
}

