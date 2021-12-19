//NOMBRE y APELLIDOS
/*

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


bool esValido(const int& i, vector<int> const& solProv, vector<int> const& basuraporPlaya) {
	bool correcto = true;
	if (i != -1) {//si la persona no recoge playas es valido
		if (basuraporPlaya[i] <= 0) correcto = false; //la playa ya estaba limpia asi que no necesita mas gente

	}
	return correcto;
}

void esSolucion(const int& lProv, const int& l, const int& basuraProv, int& basuraMax, int& lMax) {
	if (lProv >= l && basuraMax < basuraProv) { //si se cumplen las condiciones
		basuraMax = basuraProv;
		lMax = lProv;
	}
}

bool esPrometedor(const int& suma, const int& n, const int&lProv, const int l, const int& etapa, const int& basuraProv, const int& basuraMax) {
	if (suma > basuraMax) return true; //en el mejor caso podria ser una solucion
	if (n - etapa < l - lProv) return false;// si las personas que quedan son menores que el minimo de playas que faltan por limpiar, falso
	else return false;

}
void resolver(vector<int>& basura, //basura en cada playa
	vector<vector<int>>const& recoge, //matriz de la basura que recoge cada persona(i) en cada playa(j)
	vector<int>& solProv, //playas en las que recoge cada persona
	const int& l, //minimo de playas limpias
	int& lProv, //playas limpias de momento
	const int& m, //nº playas
	const int& n, //n personas
	int& basuraProv, //basura recogida hasta el momento
	//solucion& sol,//basura maxima recogida y playas limpias
	int& basuraMax,
	int& lMax,
			const int& etapa, //persona
			//vector<int> const& poda
	const int& sumaMax,
	vector<int> const& maximos
)
{
	int i = -1, basuraAhora =0;
	while (i < m) { //i < numero de playas
		solProv[etapa] = i; //la persona nº etapa recoge la playa i. -1 no recoge ninguna playa.	
		if (esValido(i, solProv, basura)) {
			if (i != -1) {
				if (basura[i] <= recoge[etapa][i]) {//basuraAhora = basura recogida en esta etapa segun lo que puede recoger la persona y lo que queda en la playa
					basuraAhora = basura[i]; 
					basura[i] = 0;
				}
				else {
					basuraAhora = recoge[etapa][i];
					basura[i] -= recoge[etapa][i];
				}
				basuraProv += basuraAhora; //sumamos la basura recogida
				if (basura[i] == 0) lProv++; //si la basura es 0, la playa esta limpia
			}
			if (esPrometedor(basuraProv +(sumaMax - maximos[etapa]), n, lProv, l, etapa, basuraProv, basuraMax)) {//poda
				if (etapa == n - 1) esSolucion(lProv, l, basuraProv, basuraMax, lMax);
				else resolver(basura, recoge, solProv, l, lProv, m, n, basuraProv, basuraMax, lMax, etapa + 1, sumaMax - maximos[etapa], maximos);
			}
			if (i != -1) {
				if (basura[i] == 0) lProv--; //la playa ya no esta limpia para el siguiente caso
				basuraProv -= basuraAhora;
				basura[i] += basuraAhora;
			}

		}
		i++;
	}
}

void resuelveCaso() {
	//resuelve aqui tu caso
	int n, m, l; //pers, playas, nº playas limpias
		//Lee los datos
	cin >> n >> m >> l;
	vector<int> basura(m); // basura en cada playa
	vector<vector<int>> recoge(n, vector<int>(m)); //n filas con la basura que recogen en cada playa(m)
	vector<int> maximos(n,0); //para cada etapa, la maxima basura recogible
	int sumaMax = 0;
	for (int i = 0; i < m; i++) {
		cin >> basura[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> recoge[i][j];
			if (maximos[i] < recoge[i][j]) maximos[i] = recoge[i][j];

		}
		sumaMax += maximos[i];
	}
	
	

	   //Calcula el resultado
	int basuraProv = 0, lProv=0;
	vector<int> solProv(n), basuraporPlaya;
	//solucion sol;
	int basuraMax = -1, lMax = 0;
	resolver(basura, recoge,solProv, l, lProv, m, n, basuraProv, basuraMax, lMax, 0, sumaMax, maximos);
	if (basuraMax == -1) cout << "IMPOSIBLE\n";
	else cout << basuraMax <<" "<< lMax << "\n";

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