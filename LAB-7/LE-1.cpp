#include<iostream>
using namespace std;

void multiply(int N,int A[10][10], int B[10][10], int C[10][10])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of matrix: ";
    cin>>n;
    int A[10][10],B[10][10],C[10][10];
    cout<<"Enter the elements of the first matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    multiply(n,A,B,C);
    cout<<"The product of the two matrices is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

}