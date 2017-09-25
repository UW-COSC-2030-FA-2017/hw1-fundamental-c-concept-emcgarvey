#include "part2.h"
#include <iostream>
#include<utility>
#include<cstdlib>
#include <stdio.h>
using namespace std;
template<class T>
bool Collection<T>::isEmpty() const
{
	for (int i = 0; i < 256; i++)
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
	for (int i = 0; i < 256; i++)
	{
		collection[i] = NULL;
	}
	size = 0;
}
template<class T>
void Collection<T>::insert(T x)
{
	for (int i = 0; i < 256; i++)
	{
		if (collection[i] == NULL)
		{
			collection[i] = x;
			size++;
			return;
		}
	}
}
template<class T>
void Collection<T>::remove(T x)
{
	for (int i = 0; i < 256; i++)
	{
		if (collection[i] == x)
		{
			collection[i] = NULL;
			size--;
			return;
		}
	}
}
template<class T>
void Collection<T>::removeRandom()
{
	for (int i = 0; i < 256; i++)
	{
		if (collection[i] != NULL)
		{
			int r = rand() % 2;
			if (r = 1)
			{
				collection[i] = NULL;
				return;
			}
		}
	}
}
template<class T>
bool Collection<T>::notContained(T x) const
{
	for (int i = 0; i < 256; i++)
	{
		if (collection[i] == x)
		{
			return true;
		}
	}
	return false;
}