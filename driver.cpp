#include <iostream>
#include "part2.cpp"
using namespace std;

int main()
{
	Collection<double> ex;
	cout << "Test if collection is empty: " << endl;
	cout << ex.isEmpty() << endl;
	cout << "Inserting 56.71, 2.34, and 20.32 into the collection..." << endl;
	ex.insert(56.71);
	ex.insert(2.34);
	ex.insert(20.32);
	cout << "Test if collection is empty: " << endl;
	cout << ex.isEmpty() << endl;
}