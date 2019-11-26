/*Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programacion
Granados Islas Cristian Jonathan
Programa para ordenar de mayor a menor una lista de "n" numeros 
*/

#include <stdlib.h>
#include <stdio.h>

const int n = 5;

void Captura(int arreglo[]) {
	int ind;
	//captura una lista de ene valores enteros 
	ind = 0;
	while (ind < n) {
		printf("Captura a[%d]: ", ind);
		scanf_s("%d", &arreglo[ind]);
		ind++;
	}
}
void Mostrar(int arre[]) {
	int indi;
	indi = 0;
	while (indi < n) {
		if (indi > 0) printf(", ");
		printf("%d", arre[indi]);
		indi++;
	}
}
void (ordenar(int ar[])) {
	int indice, limite, pivote;
	indice = 0;
	limite = n - 1;
	while (limite > 0) {
		while (indice < limite) {
			if (ar[indice] < ar[indice + 1]) {
				pivote = ar[indice + 1];
				ar[indice + 1] = ar[indice];
				ar[indice] = pivote;
			}
			indice++;
		}
		limite--;
		indice = 0;
	}
	indice = 0;
	while (indice < n) {
		if (indice > 0) printf(", ");
		printf("%d", ar[indice]);
		indice = indice + 1;
	}
}
int main()
{
	int a[n];
	Captura(a);
	printf("\nEl arreglo original es: ");
	Mostrar(a);
	printf("\n");
	//ahora si vamos a ordenar la lista
	ordenar(a);
	printf("\nEl arreglo ordenado es: ");
	Mostrar(a);
	printf("\n");
}

