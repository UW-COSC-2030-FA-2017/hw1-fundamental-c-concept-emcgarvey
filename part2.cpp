#include "part2.h"
#include <iostream>
#include<utility>
#include<cstdlib>
using namespace std;
template<class T>
Collection::Collection()
{
	for (int i = 0, i < size; i++)
	{
		collection[i] = NULL;
	}
}
template<class T>
bool Collection<T>::isEmpty() const
{
	for (int i = 0; i < size; i++)
	{
		if (collection[i] != NULL)
		{
			return false;
		}
	}
	return true;
}
template<class T>
void Collection<T>::makeEmpty()
{
	for (int i = 0; i < size; i++)
	{
		collection[i] = NULL;
	}
}
template<class T>
void Collection<T>::insert(T x)
{
	for (int i = 0; i < size; i++)
	{
		if (collection[i] == NULL)
		{
			collection[i] = x;
		}
	}
}
template<class T>
void Collection<T>::remove(T x)
{
	for (int i = 0; i < size; i++)
	{
		if (collection[i] == x)
		{
			collection[i] = NULL;
		}
	}
}
template<class T>
void Collection<T>::removeRandom()
{
	int r = rand() % size;
	collection[r] = NULL;
}
template<class T>
bool Collection<T>::notContained(T x) const
{
	for (int i = 0; i < size; i++)
	{
		if (collection[i] == x)
		{
			return true;
		}
	}
	return false;
}