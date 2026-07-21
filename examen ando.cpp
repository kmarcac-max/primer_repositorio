#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"ingrese la dimenison de la matriz";
	cin>>n;
	int matriz[n][n];
	int aux=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"ingresa el numero ["<<i+1<<"]["<<j+1<<"]: = ";
			cin>>matriz[i][j];
			
		}
	}
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matriz[i][j]<<" ";
			
		}
		cout<<endl;
	}
	cout<<endl;
		cout<<endl;
			cout<<endl;
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				for(int l=0;l<n;l++){
					if(matriz[i][j]<matriz[k][l]){
						aux=matriz[i][j];
						matriz[i][j]=matriz[k][l];
						matriz[k][l]=aux;
					}
				}
			}
			
		}
	}
	// matriz ordenada de menor a mayor
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matriz[i][j]<<" ";
			
		}
		cout<<endl;
}
		return 0;
}



