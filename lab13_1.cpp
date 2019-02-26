#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int i, h, j; 
   	for (i = 1; i < N; i++) 
   	{ 
       h = d[i]; 
       j = i-1; 
       for(int t = 0; t < i; t++) cout << d[t] << " ";
       cout<<"["<<d[i]<<"]";
       for(int t = i+1; t < N; t++) cout << d[t] << " ";
       cout<<"==>";
       while (j >= 0 && d[j] < h) 
       { 
       	   swap(d,j+1,j);
		   j = j-1; 
       }
       d[j+1] =h; 
	    for(int t = 0; t <= j; t++) cout << d[t] << " ";
       cout<<"["<<d[j+1]<<"]";
       for(int u = j+2; u < N; u++) cout << d[u] << " ";
	    cout<<"\n";
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
