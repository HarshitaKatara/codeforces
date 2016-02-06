#include <iostream>

using namespace std;

long long theatreSquare1A(long long n, long long m, long long a){
	long long x,y;
	if (n % a == 0){
		x = n/a;
	} else {
		x = n/a + 1;
	}

	if (m % a == 0){
		y = m/a;
	} else {
		y = m/a + 1;
	}

	return x*y;
}

int main(){
	long long n,m,a;
	cin >> n >> m >> a;
	cout << theatreSquare1A(n,m,a) << endl; 

	return 0;
}