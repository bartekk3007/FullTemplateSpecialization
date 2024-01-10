#include <iostream>

using namespace std;

template<class T>
void writeType(T arg)
{
	cout << typeid(arg).name();
}

template<>
void writeType<char>(char arg)
{
	cout << "Ten typ to char\n";
}

int main()
{
	char a = 'a';
	int liczba = 0;

	writeType(a);
	writeType(liczba);

	return 0;
}