#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for( i = 0;i < N-1;i++){
		for(T j=0;j<i+1;j++){
			if(d[j]<d[i+1]){
				T y = d[i+1];
				d[i+1]=d[j];
				d[j]=y;
			}
		}
	cout << "Pass " << i+1<< ":";
	for(T i = 0; i < 10; i++){
		cout << d[i] << " ";
	}
	cout<< endl;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
