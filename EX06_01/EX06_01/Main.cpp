//////////////
//
//CS172--Assignment #6
//EX06_01
//Exercise 13.1: Create_a_Text_File
//
//////////////

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
	ofstream fout;
	fout.open ("Exercise13_1.txt", ios::app);

	if (fout.fail())
	{
		cout << "can't open file" << endl;
		return 0;
	}

	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		int x = rand() % 100 + 1;
		fout << x << " " << endl;
	}
		
	fout.close();
}