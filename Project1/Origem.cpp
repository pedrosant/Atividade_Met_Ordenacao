#include<iostream>


using namespace::std;

void bubbleSort(int v[10], int n);
void tostring(int v[10], int n);
void inserirNum(int v[10], int n);
void selectionSort(int v[10], int n);


int main() {
	int v[10];
	int aux = 10;
	
	inserirNum(v,10);
	tostring(v, 10);
	cout << "\n";
	selectionSort(v,10);
	tostring(v, 10);
	
}

void tostring(int v[10],int n) {
	for (int i = 0; i < n; i++) {
		cout << v[i] << "\t";
	}
}

void inserirNum(int v[10], int n) {
	int aux = n;
	for (int i = 0; i < n; i++) {
		v[i] = aux;
		aux = aux - 1;
	}
}



void bubbleSort(int v[10], int n) {
	for (int i = 0; i-1 < n; i++){
		for (int j = 0; j < n-i-1; j++){
			if (v[j] > v[j+1]){
				int aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
}

void selectionSort(int v[10], int n) {
	int aux;
	for (int i = 0; i < n; i++){
		int menor = i;
		int aux;
		for (int j = i + 1; j < n; j++){
			if (v[j] < v[menor]){
				menor = j;					
			}		
			aux = v[menor];
			v[menor] = v[i];
			v[i] = aux;
		}
	}
}

void insertionSort() {

}