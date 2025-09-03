#include <iostream>
using namespace std;

int main() {
    int r1,c1,r2,c2, A[100][3], B[100][3], C[200][3];
    int mat1[10][10], mat2[10][10];

    cout<<"Enter rows and cols of Matrix A: ";
    cin>>r1>>c1;
    cout<<"Enter Matrix A:\n";
    int k=1;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>mat1[i][j];
            if(mat1[i][j]!=0){
                A[k][0]=i; A[k][1]=j; A[k][2]=mat1[i][j]; k++;
            }
        }
    }
    A[0][0]=r1; A[0][1]=c1; A[0][2]=k-1;

    cout<<"Enter rows and cols of Matrix B: ";
    cin>>r2>>c2;
    cout<<"Enter Matrix B:\n";
    int l=1;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>mat2[i][j];
            if(mat2[i][j]!=0){
                B[l][0]=i; B[l][1]=j; B[l][2]=mat2[i][j]; l++;
            }
        }
    }
    B[0][0]=r2; B[0][1]=c2; B[0][2]=l-1;

    if(c1!=r2){
        cout<<"Multiplication not possible!\n"; 
        return 0; 
    }

    // Multiply
    int m=1; C[0][0]=r1; C[0][1]=c2; C[0][2]=0;
    for(int i=1;i<=A[0][2];i++){
        for(int j=1;j<=B[0][2];j++){
            if(A[i][1]==B[j][0]){
                int r=A[i][0], col=B[j][1], val=A[i][2]*B[j][2];
                int found=0;
                for(int x=1;x<m;x++){
                    if(C[x][0]==r && C[x][1]==col){
                        C[x][2]+=val; found=1; break;
                    }
                }
                if(!found){ 
                    C[m][0]=r; 
                    C[m][1]=col; 
                    C[m][2]=val; 
                    m++;
                }
            }
        }
    }
    C[0][2]=m-1;

    cout<<"\nA*B (triplet):\nRow Col Val\n";
    for(int x=0;x<m;x++)
        cout<<C[x][0]<<"   "<<C[x][1]<<"   "<<C[x][2]<<endl;
}
