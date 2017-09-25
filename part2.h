#ifndef _PART2_h_
#define _PART2_h_
#include <stdio.h>
template<class T>
class Collection
{
private:
	int size = 0;
	T * collection;
public:
	Collection() {collection = new T[256];
	for (int i = 0; i < 256; i++)
	{
		collection[i] = NULL;
	}
	}
	bool isEmpty() const;
	void makeEmpty();
	void insert(T x);
	void remove(T x);
	void removeRandom();
	bool notContained(T x) const;
};
#endif