#include <iostream>
using namespace std;

int main() {
    int rows, cols, mat[10][10], triplet[100][3], trans[100][3];

    cout << "Enter rows and cols: ";
    cin >> rows >> cols;
    cout << "Enter matrix elements:\n";
    int k = 1;
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            cin >> mat[i][j];
            if (mat[i][j] != 0) {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = mat[i][j];
                k++;
            }
        }
    }
    triplet[0][0] = rows; triplet[0][1] = cols; triplet[0][2] = k-1;

    // Transpose
    trans[0][0] = cols; trans[0][1] = rows; trans[0][2] = triplet[0][2];
    int t=1;
    for (int c=0;c<cols;c++) {
        for (int i=1;i<k;i++) {
            if (triplet[i][1] == c) {
                trans[t][0] = triplet[i][1];
                trans[t][1] = triplet[i][0];
                trans[t][2] =
