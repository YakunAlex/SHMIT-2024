#include <iostream>
#include <set>
#include <map>
#include <unordered_set>
using namespace std;

int main() {
	set<int> s;
	s.insert(5);
	s.insert(5);
	s.insert(7);
	s.insert(4);
	s.insert(8);
	
	if (s.find(5) != s.end()) {
		cout << "5 is here" << endl;
	}
	if (s.find(4) != s.end()) {
		cout << "4 is here" << endl;
	}
	
	if (s.count(5) == 1) {
		cout << "5 is here" << endl;
	}
	cout << s.size() << endl;
	
	// x имеет тип int
	auto x = 5;
	
	// it - итератор
	// s.begin() возвращает итератор на самый маленький элемент сета
	// s.end() возвращает итератор на фиктивный элемент после последнего, аналог nullprt
	// it++ переходит к итератору на следубщий элемент
	
	for (auto it = s.begin(); it != s.end(); it++) {
	// for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	
	// минимальный элемент сета
	cout << *s.begin() << endl;
	// максимальный элемент сета
	cout << *(--s.end()) << endl;
	cout << *s.rbegin() << endl;
	cout << "Hi" << endl;
	
	cout << endl;
	cout << endl;
	
	// string - ключ, int - значение
	map<string, int> m;
	m["Vasya"] = 5;
	m["Petya"] = 5;
	m["Vasya"] = 4;
	cout << m.size() << endl;
	cout << m["Vasya"] << endl;
	
	map<int, int> m2;
	m2[1000000] = 5;
	cout << m2.size() << endl;
	
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	cout << endl;
	
	unordered_multiset<int> ums;
	ums.insert(4);
	ums.insert(3);
	ums.insert(4);
	cout << ums.size() << " " << ums.count(4) << endl;
	
}
