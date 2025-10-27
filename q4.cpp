#include <iostream>
using namespace std;

void reverseArray() {
    int n;
    cout << "\n--- REVERSE ARRAY ---\n";
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[100];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Reverse the array
    int start = 0, end = n - 1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void matrixMultiplication() {
    int r1, c1, r2, c2;
    
    cout << "\n--- MATRIX MULTIPLICATION ---\n";
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    
    if(c1 != r2) {
        cout << "Matrix multiplication not possible!\n";
        return;
    }
    
    int mat1[10][10], mat2[10][10], result[10][10];
    
    cout << "Enter first matrix:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cin >> mat1[i][j];
        }
    }
    
    cout << "Enter second matrix:\n";
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }
    
    // Matrix multiplication
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    cout << "\nFirst Matrix:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nSecond Matrix:\n";
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nResultant Matrix:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix() {
    int rows, cols;
    
    cout << "\n--- TRANSPOSE OF MATRIX ---\n";
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    
    int matrix[10][10], transpose[10][10];
    
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Find transpose
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    cout << "\nOriginal Matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nTranspose of Matrix:\n";
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    
    do {
        
        cout << "1. Reverse an Array\n";
        cout << "2. Matrix Multiplication\n";
        cout << "3. Transpose of Matrix\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                reverseArray();
                break;
            case 2:
                matrixMultiplication();
                break;
            case 3:
                transposeMatrix();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while(choice != 4);
    
    return 0;
}