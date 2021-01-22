#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool A[][N]){
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

void inputMatrix(double A[][N]){
	for(int i = 0;i < N;i++){
		cout << "Row "<<i+1<<": ";
		for(int j = 0;j < N;j++){
			cin >> A[i][j];
		}
	}
}

void findLocalMax(const double A[][N], bool B[][N]){
	for(int i = 0;i < N;i++){
		B[0][i] = 0;
		B[i][0] = 0;
		B[N-i][N-1] = 0;
		B[N-1][N-i] = 0;
	}
	for(int j = 1;j <= N-2;j++){
		for(int k = 1;k <= N-2;k++){
			if(A[j][k] < A[j-1][k] or A[j][k] < A[j][k-1] or A[j][k] < A[j][k+1] or A[j][k] < A[j+1][k])
			{
				B[j][k] = 0;
			}
			else{
				B[j][k] = 1;
			}
		}
	}
}