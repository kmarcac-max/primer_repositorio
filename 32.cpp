#include <iostream>
using namespace std;

int main()
{
    int n, aux;
    cout<<"Ingrese el tamaño de la matriz: ";
    cin>>n;

    int m[n][n];

    cout<<"Ingrese la matriz:\n";

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>m[i][j];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=i;k<n;k++)
            {
                int l=(k==i)?j+1:0;

                for(;l<n;l++)
                {
                    if(m[i][j] > m[k][l])
                    {
                        aux=m[i][j];
                        m[i][j]=m[k][l];
                        m[k][l]=aux;
                    }
                }
            }
        }
    }

    cout<<"\nMatriz ordenada de mayor a menor:\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
