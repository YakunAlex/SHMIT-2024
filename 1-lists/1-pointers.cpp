#include <iostream>
using namespace std;

void swapp(int* p, int* q) {
	int c = *p;
	*p = *q;
	*q = c;
}

void swappp(int& x, int& y) {
	
}

int main() {
	int x = 3;
	int y = 4;
		
	// * ðÿäîì ñ òèïîì - ýòî óêàçàòåëü êàê òèï äàííûõ
	// & äåëàåò èç ïåðåìåííîé óêàçàòåëü íà íå¸
	int* p = &x;
	int* q = &y;
	// * â âûðàæåíèè äåëàåò èç ïåðåìåííîé óêàçàòåëü
	cout << p << " " << q << endl;
	
	*p = 7;
	cout << x << endl;	
	
	swapp(&x, &y);
	cout << x << " " << y << endl;
	
	// & ìîæíî áðàòü òîëüêî îò ïåðåì.
	// int* u = &(x + 1);

	int** a = &p;
	int n = 100;
	for (int i = 0; i < n; ++i) {
		// new int ñîçäàåò íîâûé èíò è âîçâðàùàåò íà íåãî óêàçàòåëü
		p = new int(i);
		cout << *p << endl;
		// óäàëÿåò äàííûå ïî óêàçàòåëþ p
		delete p;
		cout << *p << endl;
	}
	
}
