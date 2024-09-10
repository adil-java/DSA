#include <iostream>

using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int** data;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    void inputElements() {
        cout << "Enter elements of the matrix (" << rows << "x" << cols << "):" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }

    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix add(const Matrix& B)  {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] + B.data[i][j];
            }
        }
        return result;
    }

    Matrix subtract(const Matrix& B) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] - B.data[i][j];
            }
        }
        return result;
    }

    Matrix multiply(const Matrix& B) {
        Matrix result(rows, B.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < B.cols; j++) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * B.data[k][j];
                }
            }
        }
        return result;
    }
    Matrix multiplyByConstant(int constant) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] * constant;
            }
        }
        return result;
    }

    Matrix transpose() {
        Matrix result(cols, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[j][i] = data[i][j];
            }
        }
        return result;
    }
};
int main() {
    int rows, cols, constant;
    cout << "Enter the number of rows and columns for Matrix A: ";
    cin >> rows >> cols;
    Matrix A(rows, cols);
    A.inputElements();

    cout << "Enter the number of rows and columns for Matrix B: ";
    cin >> rows >> cols;
    Matrix B(rows, cols);
    B.inputElements();

    cout << "Matrix A + Matrix B:" << endl;
    Matrix C = A.add(B);
    C.display();

    cout << "Matrix A - Matrix B:" << endl;
    Matrix D = A.subtract(B);
    D.display();

    cout << "Matrix A * Matrix B:" << endl;
    Matrix E = A.multiply(B);
    E.display();

    cout << "Enter a constant to multiply Matrix A: ";
    cin >> constant;
    cout << "Matrix A * " << constant << ":" << endl;
    Matrix F = A.multiplyByConstant(constant);
    F.display();

    cout << "Transpose of Matrix A:" << endl;
    Matrix G = A.transpose();
    G.display();

    return 0;
}
