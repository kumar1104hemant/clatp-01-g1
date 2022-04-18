1.include <stdio.h>
2.
3.int printArray(int array[], int n)
4.{
5.    for (int i = 0; i < n - 1; i++)
6.   {
7.       printf("%d ", array[i]);
8.   }
9.    printf("\n\n");
10.}
11.
12.int main(){
13.  int arr[] = {7,98,79,-2,8,98,7,-7,4,54,87,8,45,9};
14.
15.
16.int n = ((sizeof arr) /( sizeof arr[0]));
17.
18.
19.printf("before sorting: \n");
20.  printArray(arr, n);
21.
22.for (int i = 1; i < n-1; i++)
23.   {
24.       while (arr[i] < arr[i-1] && i-1 >= 0)
25.        {
26.           int temp = arr[i-1];
27.            arr[i-1] = arr[i];
28.            arr[i] = temp;
29.            i--;
30.        }
31.       
32.    }
33.    printf("After sorting: \n");
34.   printArray(arr, n);
35.}
