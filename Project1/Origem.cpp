#include<iostream>


using namespace::std;

void bubbleSort(int v[10], int n);
void tostring(int v[10], int n);
int main() {
	int v[10];
	int aux = 10;
	for (int i = 0; i < sizeof(v) / sizeof(v[i]); i++) {		
		v[i] = aux;
		aux = aux - 1;
	}

	tostring(v,10);
	cout << "\n";
	bubbleSort(v, 10);
	tostring(v,10);
}

void tostring(int v[10],int n) {
	for (int i = 0; i < n; i++) {
		cout << v[i] << "\t";
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

