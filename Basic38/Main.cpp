#include <iostream>
#define N 4
using namespace std;

void random_matrix_init(int matrix[N][N], int min, int max);
string convert_matrix_to_string(int matrix[N][N]);

bool is_matix_triangular_upper(int matrix[N][N]);
bool is_matix_triangular_lower(int matrix[N][N]);

int main() {
	int matrix[N][N];

	random_matrix_init(matrix, 0, 1);

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);

	cout << (is_matix_triangular_upper(matrix) == 0 ? "No" : "Yes") << endl;
	cout << (is_matix_triangular_upper(matrix) == 0 ? "No" : "Yes");

	return 0;
}