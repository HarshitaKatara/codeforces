#include <bits/stdc++.h>

using namespace std;

int main(){

	//numero de estudiantes del contest
	int n;
	cin >> n;

	int ratings[n];
	int positions[n]; //todos las posiciones con valor 0

	//inicializo los ratings de los i-ésimos estudiantes
	for(int i=0; i < n; i++){
		cin >> ratings[i];
	}

	for(int i=0; i < n; i++){
		positions[i] = 1;
		for(int j=0; j < n; j++){
			if(ratings[j]>ratings[i]){
					positions[i] = positions[i] + 1;
				}
			}
		}

	for(int k = 0; k < n; k++){
		cout << positions[k] << " ";
	}

	return 0;
}