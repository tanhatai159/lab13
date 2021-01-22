#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int i = 1;i < N;i++)
	{
		T temp = d[i];
		if(temp > d[i-1])
		{
			for(int j = i-1;j >= 0;j--)
			{
				d[j+1] = d[j];
				if(temp <= d[j - 1] || j == 0)
				{
					d[j] = temp;
					break;
				}
			}
		}
		cout << "Pass "<< i <<":";
		for(int i = 0;i < N;i++){
			cout << d[i] << " ";
		}
		cout << endl;
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
