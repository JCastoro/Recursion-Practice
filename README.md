# Recursion-Practice
Multiple recursion based problems

## **Question	1:**
Give a recursive implement to the following functions:
a. void printTriangle(int n)
This function is given a positive integer n, and prints a textual image of a right triangle
(aligned to the left) made of n lines with asterisks.
For example, printTriangle(4), should print:

\*  
\**  
\***  
\****  


b. void printOpositeTriangles(int n)
This function is given a positive integer n, and prints a textual image of a two opposite right
triangles (aligned to the left) with asterisks, each containing n lines.
For example, printOpositeTriangles(4), should print:
\****  
\***  
\**  
\*  
\*  
\**  
\***  
\****  

c. void printRuler(int n)
This function is given a positive integer n, and prints a vertical ruler of 2! − 1 lines. Each line
contains ‘-‘ marks as follows:

* The line in the middle 1/2of the ruler contains n ‘-‘ marks
* The lines at the middle of each half (1/4 and 3/4) of the ruler contain (n-1) marks
* The lines at the 1/8, 3/8, 5/8 and 7/8 of the riler contains (n-2) marks
* and so on


For example, printRuler(4), should print (only the blue marks):


\-      1/16= 1/16  
\- -    2/16= 1/8  
\-      3/16= 3/16  
\- - -     4/16= 1/4  
\-         5/16= 5/16  
\- -       6/16= 3/8  
\-      7/16= 7/16    
\- - - - 8/16= 1/2  
\-       9/16= 9/16  
\- -    10/16= 5/8  
\-      11/16= 11/16  
\- - -  12/16= 3/4  
\-      13/16= 13/16  
\- -    14/16= 7/8  
\-      15/16= 15/16  
\-   
Hints:
1. Take	for	n=4:	when	finding	print_ruler(4),	try	to	think	first	what	
print_ruler(3) does,	and	how	you	can	use	it	to	print	a ruler	of	size 4.
Then,	generally		identify	what print_ruler(n-1) is	supposed to	print,	and	use	that	
in	order	to	define	how	to	print	the	ruler	of	size	n.
2. You	may	want	to	have	more	than	one	recursive	call
3. It	looks	much	scarier	than	it	actually	is


**Question	2:**	
Give a recursive implement to the following functions:
a. int sumOfSquares(int arr[], int arrSize)
This function is given arr, an array of integers, and its logical size, arrSize. When called,
it returns the sum of the squares of each of the values in arr.
For example, if arr is an array containing [2, -1, 3, 10], calling sumOfSquares(arr, 4)
will return 114 (since, 22 + (-1)2 + 32 + 102 = 114).
b. bool isSorted(int arr[], int arrSize)
This function is given arr, an array of integers, and its logical size, arrSize. When called,
it should return true if the elements in arr are sorted in an ascending order, or false if
they are not.


**Question 3:**
Write two recursive versions of the function minInArray. The function will be given a
sequence of elements and should return the minimum value in that sequence. The two versions
differ from one another in the technique we use to pass the sequence to the function.
In version 1 – The prototype of the function should be:
int minInArray1(int arr[], int arrSize)
Here, the function is given arr, an array of integers, and its logical size, arrSize.
The function should find the minimum value out of all the elements in positions:
0, 1, 2, …, arrSize-1.
In version 2 – The prototype of the function should be:
int minInArray2(int arr[], int low, int high)
Here, the function is given arr, an array of integers, and two additional indices: low and high
(low ≤ high), which indicate the range of indices that need to be considered.

The function should find the minimum value out of all the elements in positions:
low, low+1, …, high.


