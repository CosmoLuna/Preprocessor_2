// ������������ ������ ������� �++
#include <iostream>

using namespace std;

/*#define PI 3.14
#ifdef PI
#endif

#if 5 > 10
const int N = 10;
#elif 15 > 10
const int N = 15;
#else
const int N = 5;
#endif*/

// 31.03
#define makeStr(s) #s
#define concat(s1, s2, s3) s1 ## s2 ## s3



int main() {
	setlocale(LC_ALL, "Russian");

	/*#define B 11
	#ifdef B
		cout << "B ����������\n";
	#else
	#error "B ������ ������������"
	#endif*/


	// 31.03
	int n = 15;
	cout << makeStr(n) << " = " << n << endl;

	int abc = 10;
	cout << concat(a, b, c) << endl; // �� ������ 10
	concat(a, b, c) = 15;
	cout << concat(a, b, c) << endl; // �� ������ 15

	cout << __DATE__ << endl;
	cout << __LINE__ << endl;
	cout << __FILE__ << endl;


	return 0;
}