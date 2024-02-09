#define N 4

bool is_matix_triangular_upper(int matrix[N][N]) {
	bool triangle = true;

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (matrix[i][j] != 0) {
				triangle = false;
				break;
			}
		}
	}

	return triangle;
}

bool is_matix_triangular_lower(int matrix[N][N]) {
	bool triangle = true;

	for (int i = N - 2; i >= 0; i--)
	{
		for (int j = i; j < N; j++)
		{
			if (matrix[i][j] != 0) {
				triangle = false;
				break;
			}
		}
	}

	return triangle;
}