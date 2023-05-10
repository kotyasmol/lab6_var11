#pragma once
class Iterator
{
private:
	friend class Plenty;
	int* elem;
public:

	Iterator();

	// ïåðåãðóçêà îïåðàöèè +n - ïåðåõîä âïðàâî ê ýëåìåíòó ñ íîìåðîì n
	void operator+(int n);

	void operator++();
	void operator--();
	int& operator *() const;
	bool operator!=(const Iterator& it);
};