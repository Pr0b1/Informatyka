

#include <iostream>
using namespace std;

int main()
{
	int n; int lp = 0; int p = 2; int d = 1;
	cout << "Ile liczb pierwszych chcesz wygenerować?: " << endl;
	cin >> n; cout << endl;
	while (lp < n) {
		if (p % d == 0) {
			d++;
		}
		if (p % d != 0) {
			cout << p << endl;
			lp++;  d = 1;
		}
		p++;
	}

}


