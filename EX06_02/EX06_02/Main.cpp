//////////////
//
//CS172--Assignment #6
//EX06_02
//Exercise 13.2: Count_Characters
//
//////////////


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin;
	string fileName;
	cout << "Please enter a file name: ";
	cin >> fileName;

	fin.open(fileName);
	if (fin.fail())
	{
		cout << "File does not exist" << endl;
		return 0;
	}


	int characterCount = 0;
	while (!fin.eof())
	{
		fin.get();
		characterCount++;
	}
	characterCount--;
	fin.close();
	cout << "Number of character in the file: " << characterCount << endl;
	return 0;
}