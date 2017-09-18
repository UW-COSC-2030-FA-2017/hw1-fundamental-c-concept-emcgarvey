#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	string x;
	cout << "Our L value (Non-Temporary, modifiable object) is called 'x', please enter an R value (something to be stored at 'x'): ";
	cin >> x;
	cout << "'x' is our l value, and the R value stored at 'x' is equal to: " << x << endl;
}

