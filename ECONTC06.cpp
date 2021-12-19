//NOMBRE y APELLIDOS
/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

typedef struct {
	int donacion;
	int admite;
} actuaciones;

void esSolucion(const int& donProv, int& donMax) {
	donMax = donProv;
}

bool esValido(vector<vector<actuaciones>> const& v, vector<int>const& solProv, vector<int> const& maximos, int donProv, const int& donMax, const int& etapa) {	
	if (etapa > 0) { //comprobamos si el ultimo artista añadido (que no sea el primero) puede actuar en esa posicion 
		if (v[solProv[etapa]][solProv[etapa-1]].admite == 0) return false; 
		
	}
	//poda, comprobamos si merece la pena seguir
	//for (int i = solProv.size(); i < maximos.size(); i++) {
	//	donProv += maximos[i]; //a partir de los datos que tenemos, calculamos cual es la donacion maxima que podemos obtener
	//}
	donProv += maximos[etapa];
	if (donProv < donMax) return false; //en el mejor caso sigue sin ser una solucion valida
	//En el caso de tener una posible solucion (tamaño n) no es correcta si es menor que la solucion actual

	return true;
}

void resolver(vector<vector<actuaciones>> const& v, //lista de datos
			vector<int>& solProv, //artistas que actuan en orden
			vector<int>& ocupados, //artistas ya ocupados
			vector<int>const& maximos, //valores maximos de donaciones, poda
			int donProv, //donacion provisional
			int& donMax, //solucion
			const int& n, //numero artistas
			const int& etapa) {
	int i = 0;
	while (i < n) {		
		if (ocupados[i] == 0) {
			solProv[etapa] = i;
			donProv += v[i][etapa].donacion;
			if (esValido(v, solProv, maximos, donProv, donMax, etapa)) {
				ocupados[i]++;
				if (etapa == n - 1) esSolucion(donProv, donMax);
				else resolver(v, solProv, ocupados, maximos, donProv, donMax, n, etapa + 1);
				ocupados[i]--;
			}
			donProv -= v[i][etapa].donacion;
			solProv[etapa]=0;
		}
		i++;

	}
}

void resuelveCaso() {
	//resuelve aqui tu caso
	int n, aux;
	   //Lee los datos
	cin >> n;
	vector<vector<actuaciones>> v(n, vector<actuaciones>(n));
	vector<int> maximos(n);
	   //Calcula el resultado
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j].donacion;
			if (i == 0) maximos[j] = v[i][j].donacion;
			else {
				if (maximos[j] < v[i][j].donacion) maximos[j] = v[i][j].donacion;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j].admite;
		}
	}

	int donMax = 0;
	vector<int> solProv(n,0), ocupados(n,0);
	vector<int> poda(n,0);
	for (int i = maximos.size() - 2; i >= 0; i--) {
		poda[i] = maximos[i] + poda[i + 1];
	}
	   //Escribe el resultado
	resolver(v, solProv, ocupados, poda, 0, donMax, n, 0);
	if (donMax == 0) cout << "NEGOCIA CON LOS ARTISTAS" << "\n";
	else cout << donMax << "\n";
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