
#include <iostream>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
 #include "Task4.h"

int main() {
	using namespace Lesson5;
	
	void (*Task1)(int size, ...);
	Task1 = SwitchValue;

	void (*Task2)(int arr[8]);
	Task2 = ArrFiller;		

	bool (*Task3)(int arr[], int size);
	Task3 = CheckBalance;		

	void (*Task4)(int arr[], int size, int n);
	Task4 = MoveArr;	
	
	int arr[8];
	

	Task1(4, 1, 1, 0, 0);
	Task2(arr);
	Task3(arr, 8);
	Task4(arr, 8, -4);
	
}