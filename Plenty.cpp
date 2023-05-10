#include "Plenty.h"
#include "Iterator.h"
#include <ctime>
#include <iostream>
using namespace std;

// êîíñòðóêòîð
Plenty::Plenty(int size)
{
	this->size = size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100 + 1;
	}
	beg.elem = &array[0];
	end.elem = &array[size];
}
// äåñòðóêòîð
Plenty::~Plenty() {}


// îïåðàöèÿ ïðîâåðêè íà íåðàâåíñòâî
bool Plenty::operator!=(const Plenty& rhs) {
	bool f = false;
	int i = 0;
	while (!f) {
		if (array[i] != rhs.array[i]) f = true;
		i++;
	}
	return f;
}
// îïåðàöèÿ äîñòóïà ïî èíäåêñó
int& Plenty::operator [](int index)
{
	if (index >= 0 && index < size)
	{
		return array[index];
	}
	else
	{
		cout << endl << "Error" << endl;
	}
}
bool Plenty::operator<(int num) const
{
	for (int i = 0; i < size; i++) {
		if (array[i] == num) {
			return true;
		}
	}
	return false;
}
Iterator Plenty::first() { return beg; }
Iterator Plenty::last() { return end; }

