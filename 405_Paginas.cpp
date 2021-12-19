/*#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void resolver(vector<int> v) {
	int i = 0;
	while (i < v.size()) {
		cout << v[i];
		if (i < v.size() - 1  && v[i] + 1 == v[i + 1]) {//paginas consecutivas
			cout << "-";
			while (i < v.size() - 1 && v[i] + 1 == v[i + 1]) {
				i++;
			}
			cout << v[i]; //ultima posicion o ultima pagina consecutiva
		}
		if(i < v.size()-1 && v[i] + 1 != v[i + 1]) cout << ",";

		i++;
	}
}

bool datos(){
	int aux;
	vector<int> v;
	cin >> aux;
	if (aux == 0) return false;
	while (aux != 0) {
		v.push_back(aux);
		cin >> aux;
	}
	resolver(v);
	cout << "\n";
	return true;
}

int main() {
	
	while (datos());
	
	
	return 0;
}

*/