/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : SelectionSort.cpp
 *
 *      Author     : X h y
 *
 *      Version    : 3.0
 *
 *      Date       : 06-30-2021
 *
 *      Description: The road to learn sort algorithms
 ********************************************************************************
 */

#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void selection_sort(int arr[], int num)
{
	// What is selection?   ==> select the maximum or minimum
	// 1. Find the index of max value of the array from each round
	// 2. Swap the current element and the maximum element
	// 3. Repeat
	for (int i=0; i<num-1; i++) {
		int max_index = i;
		
		for (int j=i+1; j<num; j++) {
			if (arr[max_index] < arr[j]) {
				max_index = j;
			}				
		}

		if (max_index != i)	
			swap(arr[i], arr[max_index]);
	}
}
int main() {
	int num = 10;

	int arr[10] = {0, 9, 8, 7, 6, 5, 1, 2, 3, 4};

	for (int i=0; i<10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	selection_sort(arr, num);

	for (int i=0; i<10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}