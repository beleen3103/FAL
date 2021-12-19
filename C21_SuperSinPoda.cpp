//NOMBRE y APELLIDOS
/*

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

bool esValida(const int& super, int c, int cProv) {
	bool esCorrecto = true;
	if (cProv >= c) esCorrecto = false;
	if (super > 3) esCorrecto = false;
	

	return esCorrecto;
}

void esSolucion(int& c, int cProv) {
	c = cProv;
}

void vueltaAtras(vector<vector<int>>const& productos, //lista de productos/supers
				vector<int> supermercados, //guardamos el numero de productos de cada super
				int costeProv, //coste que vamos modificando
				int& costeMinimo, //coste solucion
				const int& etapa, 
				const int& n,//numero de productos
				const int& m) { //numero de supers
	int i = 0, j =0;
	//while (i < n) {
		while (j < m) {
			supermercados[j]++;
			costeProv += productos[j][etapa];
			if (esValida(supermercados[j], costeMinimo, costeProv)) {
				if (etapa == n - 1) esSolucion(costeMinimo, costeProv);
				else vueltaAtras(productos, supermercados, costeProv, costeMinimo, etapa + 1, n, m);
			}
			costeProv -= productos[j][etapa];
			supermercados[j]--;
			j++;
		}
//		i++;
	//}
}

void resuelveCaso() {
	//resuelve aqui tu caso
	int n, m, aux;
	   //Lee los datos
	cin >> m >> n; //super, productos
	vector<vector<int>> v(m, vector<int>(n));
	int costeMinimo = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
			 //= aux;
			costeMinimo += v[i][j];
		}
	}
	int costeInicial = costeMinimo;
	vector<int> solProv, supermercados(m, 0);
	int costeProv =0;
	   //Calcula el resultado
	vueltaAtras(v, supermercados, costeProv, costeMinimo, 0, n, m);

	if (costeMinimo == costeInicial) cout << "Sin solucion factible\n";
	else cout << costeMinimo << "\n";
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