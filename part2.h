#ifndef _PART2_h_
#define _PART2_h_
#include <stdio.h>
template<class T>
class Collection
{
private:
	int size;
	collection = new T[256];
public:
	Collection();
	bool isEmpty() const;
	void makeEmpty();
	void insert(T x);
	void remove(T x);
	void removeRandom();
	bool notContained(T x) const;
};
#endif