/*
#include "game.h"

int main(){
	
	HANDLE handleA, handleB;

	handleA = (HANDLE)_beginthreadex(0, 0, &mythread, (void*)0, 0, 0);
	handleB = (HANDLE)_beginthreadex(0, 0, &keyEvent, (void*)0, 0, 0);

	WaitForSingleObject(handleA, INFINITE);
	WaitForSingleObject(handleB, INFINITE);

	CloseHandle(handleA);
	CloseHandle(handleB);

	return 0;
}
*/

/*
#pragma once
#include "Frame.h"

void main(){
	try{
		Frame *f1 = new Frame();
		Frame *f2 = new Frame[10];

		delete f1;
		delete[] f2;
	}
	catch (string msg){
		cout << "Error msg : " << msg << endl;
	}
}
*/

#pragma once
#include <string>
#include "Frame.h"
#include "ExArray.h"

template<typename T>
void mySwap(T& num1, T& num2){
	T temp = num1;
	num1 = num2;
	num2 = temp;
}

void main(){
	ExArray<int> arr1(3);
	ExArray<char> arr2(4);
	ExArray<double> arr3(5);

	arr1.addData(2);
	arr2.addData('A');
	arr3.addData(32.12);

	arr1.printData();
	arr2.printData();
	arr3.printData();

	int num1 = 10, num2 = 40;
	cout << "before : " << num1 << ", " << num2 << endl;
	mySwap<int>(num1, num2);
	cout << "before : " << num1 << ", " << num2 << endl;

	double num1d = 121.11, num2d = 10.5;
	cout << "before : " << num1d << ", " << num2d << endl;
	mySwap<double>(num1d, num2d);
	cout << "after : " << num1d << ", " << num2d << endl;

	ExArray<int> arr4(5);
	arr4.addData(10);

	mySwap<ExArray<int>>(arr1, arr4);
	arr1.printData();
	arr4.printData();

}
