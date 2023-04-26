//DataTypes
#include<iostream>
using namespace std;

#define delimiter "\n---------------\n"

//#define LOGICAL_TYPES

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined LOGICAL_TYPES 
	cout << "DataTypes" << endl;
	cout << true << endl;
	cout << false << endl;
#endif
	cout << sizeof(int) << endl;
	cout << INT_MIN << "..." << INT_MAX << endl;
	cout << 0 << "..." << UINT_MAX << endl;
}