#include <iostream>
using namespace std;


int main() {
	
	int n; cin >> n;
	string x[n];
	string aux;
	
	for(int i = 0; i<n; i++){
cin >> aux;
 if (aux.length() > 10)
x[i] = aux[0] + to_string(aux.length() - 2) + aux[aux.length() - 1];
else x[i] = aux;
	}
	
	for(int i = 0; i<n; i++){
			cout << x[i] << endl;
				}
	
	return 0;
}
