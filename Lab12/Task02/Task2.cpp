
// Task2.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

template<class T>
T amax(T arr[], int size) {
    T MAX = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > MAX) {
			MAX = arr[i];
		}
	}
	return MAX;
}

template <>
string amax<string>(string arr[], int size) {
    string MAX = "";
	for (int i = 0; i < size; i++)
	{
		if (arr[i].size() > MAX.size() ){
			MAX = arr[i];
		}
	}
	return MAX;
}



int main()
{
	int arr1[5] = { 1,3,2,4,6 };


	float arr2[5] = { 1.5,3.7,2.9,3.9,3.5 };

	string arr3[5] = { "abbc","bce","cc","d","e"};
	
	cout << "Int array: "<<amax<int>(arr1, 5) << endl;

	cout << endl;

	cout << "Float array: "<<amax<float>(arr2,5) << endl;

	cout << endl;

	cout << "String array: " << amax<string>(arr3, 5) << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
