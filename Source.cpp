// ѕерсональный шаблон проекта C++
#include <iostream>

using namespace std;

// принимает параметр S - который может €вл€тьс€ чем угодно
// вне зависимости что передаЄм - оно превращаетс€ в строку.
#define mkstr(s1, s2) #s1 << " " << #s2
// склеивает значени€ (буквы)
#define concat(s1, s2, s3) s1 ## s2 ## s3

int main() {
	setlocale(LC_ALL, "Russian");
	
	int n = 15;
	cout << mkstr(«адача, 1) << " = " << n << endl;

	int abc = 10;
	cout << concat(a, b, c) << endl; // соедин€ютс€ 3 буквы, a, b, c - abc. ƒанный код выгл€дит как вывод значени€ переменной abc.
	concat(a, b, c) = 15;
	cout << concat(a, b, c) << endl;

	cout << __DATE__ << endl;
	cout << __LINE__ << endl;
	cout << __FILE__ << endl;

	return 0;
}