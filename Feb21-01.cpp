//NOMBRE y APELLIDOS
/*

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//k = 0, v[] != null
int resolver(vector<int> const& v, const int& k) {
	int i = 0, segPar = 0, /*ini =0, fin = -1,*/ //segAct = 0, segMax = 0;

	//while (i < v.size()) {
	//	if (v[i] % 2 == 0) {			
	//		while (i < v.size() && v[i] % 2 == 0 && segPar <= k) {
	//			segPar++;
	//			i++;
	//		}
	//		if (segPar > k || i == v.size()) {
	//			fin = i - 1;
	//			if (fin - ini + 1 > segMax) segMax = fin - ini + 1;
	//			ini = i - (k);
	//			//fin = ini;
	//			segPar--;
	//		}
	//	}
	//	if (i < v.size() && v[i] % 2 != 0 && segPar != 0) segPar = 0;
	//	if (i == v.size()-1) {
	//		fin = i;
	//		if (fin - ini +1 > segMax) segMax = fin - ini+1;
	//		ini = i - (k-1);
	//		segPar--;
	//	}
	//	i++;
	//}

	/*while (i < v.size()) {
		if (v[i] % 2 == 0) {
			segPar++;
			while (i < v.size()-1 && segPar <= k) { //se sale cuando supere k o llegue al final del vector
				i++;
				if(v[i] % 2 == 0) segPar++; // si es par, +1
				else if (v[i] % 2 != 0 && segPar != 0) segPar = 0; //si hay un impar, reiniciamos contador
				
			}
			fin = i;
			if (fin - ini > segMax) segMax = fin - ini;
			ini = i - (k-1);
			segPar--;
		}
		i++;
	}*/
	/*
	for (i = 0; i < v.size(); i++) {
		
		if (v[i] % 2 == 0) {
			segPar++;
			if (segPar > k) {
				if (segAct > segMax) {
					segMax = segAct;
				}
				segPar -= 1;
				segAct = segPar;
			}
			else { segAct++; }
		}
		else {
			segAct++;
			segPar = 0;
		}
	}

	if (segAct > segMax) {
		segMax = segAct;
	}
	return segMax;
}

//n = max(j - i) : 0 <= i < j < v.size() : nE m = ((d - q) > k): i <= q <= d <= j : Vn : q <= n <= d: v[n] % 2 == 0


void resuelveCaso() {
	//resuelve aqui tu caso
	int n, k, aux;
	vector<int> v;
	   //Lee los datos
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	   //Calcula el resultado
	cout << resolver(v, k) << "\n";
	   //Escribe el resultado
}

int main() {
	// Para la entrada por fichero.
#ifndef DOMJUDGE
	std::ifstream in("casos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif


	unsigned int numCasos;
	std::cin >> numCasos;
	// Resolvemos
	for (int i = 0; i < numCasos; ++i) {
		resuelveCaso();
	}


#ifndef DOMJUDGE // para dejar todo como estaba al principio
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif

	return 0;
}
*/