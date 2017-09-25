#include <iostream>
#include "part2.cpp"
using namespace std;

int main()
{
	Collection<double> ex;
	cout << "Test if collection is empty: " << endl;
	cout << ex.isEmpty() << endl;
	cout << "Inserting 56.71, 2.34, 9.12 and 20.32 into the collection..." << endl;
	ex.insert(56.71);
	ex.insert(2.34);
	ex.insert(20.32);
	ex.insert(9.12);
	cout << "Test if collection is empty: " << endl;
	cout << ex.isEmpty() << endl;
	cout << "Test if collection contains 56.71" << endl;
	cout << ex.notContained(56.71) << endl;
	cout << "Remove 2.34 from the collection" << endl;
	ex.remove(2.34);
	cout << "Remove a random number from the collection: " << endl;
	ex.removeRandom();
	cout << "Test if collection contains 56.71" << endl;
	cout << ex.notContained(56.71) << endl;
	cout << "Test if collection contains 2.34" << endl;
	cout << ex.notContained(2.34) << endl;
	cout << "Test if collection contains 20.32" << endl;
	cout << ex.notContained(20.32) << endl;
	cout << "Test if collection contains 9.12" << endl;
	cout << ex.notContained(9.12) << endl;
	cout << "Test if collection is empty: " << endl;
	cout << ex.isEmpty() << endl;
}