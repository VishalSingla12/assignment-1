#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    
    int matrix[10][10];
    
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Display matrix
    cout << "\nMatrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    // Calculate and display row sums
    cout << "\nRow sums:\n";
    for(int i = 0; i < rows; i++) {
        int rowSum = 0;
        for(int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << rowSum << endl;
    }
    
    // Calculate and display column sums
    cout << "\nColumn sums:\n";
    for(int j = 0; j < cols; j++) {
        int colSum = 0;
        for(int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << " sum = " << colSum << endl;
    }
    
    return 0;
}