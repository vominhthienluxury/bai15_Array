// bai15_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string cars[10] = { "Volvo","BMW","Ford","Mazda","Tesla","RollRoye","Lambogini","Vinfast","Ferrari","Mitsumisi"};
	for (int i = 0;i < 10;i++) {
		cout << cars[i] << "\n";
		cars[1] = "Toyota";
	}
	return 0;
}

