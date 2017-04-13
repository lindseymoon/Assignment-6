//////////////
//
//CS172--Assignment #6
//EX06_03
//Exercise 13.5: Baby_Names
//
//////////////

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin;
	
	int year;
	char gender;
	int rank,  bpop, gpop;
	string name, bname, gname, fileName;
	cout << "Enter the year: ";
	cin >> year;
	switch (year)
	{
	case 2010: fileName = "Babynameranking2010.txt";
		break;
	case 2011: fileName = "Babynameranking2011.txt";
		break;
	case 2012: fileName = "Babynameranking2012.txt";
		break;
	case 2013: fileName = "Babynameranking2013.txt";
		break;
	case 2014: fileName = "Babynameranking2014.txt";
		break;
	default:
		cout << "Not a valid year. " << endl;
	}
	fin.open(fileName);
	if (fin.fail())
	{
		cout << fileName << "file not exist. \n Exit program";
		return 0;
	}
	if (!fin.eof())
	{
		while (!fin.eof())
		{
			fin >> rank >> bname >> bpop >> gname >> gpop;
			if (gender == 'M' || gender == 'm')
			{
				if (name == bname)
				{
					cout << name << "is ranked #" << rank << "in year" << year;
					return 0;
				}
			}
			else if (gender == 'F' || gender == 'f')
			{
				if (name == gname)
				{
					cout << name << "is ranked #" << rank << "in year" << year;
					return 0;
				}
			}
		}
	}

	/*input.close();
	ifstream fin;
	fin.open(fileName);
	if (fin.fail())
	{
		cout << "File does not exist" << endl;
	}
	
	cout << "Enter the gender (M or F): ";
	cin >> gender;
	cout << "Enter the name: ";
	cin >> name;

	cout << name << "is ranked #" << rank << "in year " << year;

	//fin.close;
	return 0;
	*/
}