
#include <iostream>
using namespace std;
int main()
{
    int n; int f1 = 1; int f; int f0 = 0;
    cout << "Ile liczb z ciągu oddtworzyć?: " << endl;
    cin >> n; cout << endl;
    for (int i = 0; i <= n; i++) {
       
        //cout << f0 << "+" << f1 << "=" << f0+f1 << endl;
        if (i > 1) {
            f = f1 + f0;
            f0 = f1;
            f1 = f;
        }

        else {
            f = i;
        }
        cout << f << endl;
    }
}

