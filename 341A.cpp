/* P341A by Gabriel Scotillo - 31/01/16 */
#include <bits/stdc++.h>

using namespace std;

int main(){

   int n;
   cin >> n;

   long long numeros[n];

   for(int i=0; i < n; i++){
		cin >> numeros[i];
	}

   int cOdds = 0;
   long long lowestOdd = 0;
   long long sum = 0;

   for(int i = 0; i < n; i++){
      sum = sum + numeros[i];
      if (!(numeros[i] % 2 == 0)){
         cOdds++;
         if (lowestOdd != 0){
            if (numeros[i] < lowestOdd){
               lowestOdd = numeros[i];
            }
         } else {
            lowestOdd = numeros[i];
         }
      }
   }

   if (cOdds % 2 == 0){
      cout << sum << endl;
   } else{
      cout << sum - lowestOdd << endl;
   }

   return 0;
}
