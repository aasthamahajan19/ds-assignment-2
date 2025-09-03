#include <iostream>
using namespace std;

int main() {
    int r,c, A[100][3], B[100][3], C[200][3];
    int mat1[10][10], mat2[10][10];

    cout << "Enter rows and cols: ";
    cin >> r >> c;

    cout << "Enter Matrix A:\n";
    int k=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> mat1[i][j];
            if(mat1[i][j]!=0){
                A[k][0]=i; A[k][1]=j; A[k][2]=mat1[i][j]; k++;
            }
        }
    }
    A[0][0]=r; A[0][1]=c; A[0][2]=k-1;

    cout << "Enter Matrix B:\n";
    int l=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> mat2[i][j];
            if(mat2[i][j]!=0){
                B[l][0]=i; B[l][1]=j; B[l][2]=mat2[i][j]; l++;
            }
        }
    }
    B[0][0]=r; B[0][1]=c; B[0][2]=l-1;

    // Addition
    int i=1,j=1,m=1;
    C[0][0]=r; C[0][1]=c; C[0][2]=0;
    while(i<A[0][2]+1 && j<B[0][2]+1){
        if(A[i][0]<B[j][0] || (A[i][0]==B[j][0] && A[i][1]<B[j][1]))
            {C[m][0]=A[i][0]; C[m][1]=A[i][1]; C[m][2]=A[i][2]; i++; m++;}
        else if(B[j][0]<A[i][0] || (A[i][0]==B[j][0] && B[j][1]<A[i][1]))
            {C[m][0]=B[j][0]; C[m][1]=B[j][1]; C[m][2]=B[j][2]; j++; m++;}
        else{
            int sum=A[i][2]+B[j][2];
            if(sum!=0){C[m][0]=A[i][0]; C[m][1]=A[i][1]; C[m][2]=sum; m++;}
            i++; j++;
        }
    }
    while(i<=A[0][2]){C[m][0]=A[i][0]; C[m][1]=A[i][1]; C[m][2]=A[i][2]; i++; m++;}
    while(j<=B[0][2]){C[m][0]=B[j][0]; C[m][1]=B[j][1]; C[m][2]=B[j][2]; j++; m++;}
    C[0][2]=m-1;

    cout<<"\nA+B (triplet):\nRow Col Val\n";
    for(int x=0;x<m;x++)
        cout<<C[x][0]<<"   "<<C[x][1]<<"   "<<C[x][2]<<endl;
}
