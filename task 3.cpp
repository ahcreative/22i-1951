#include <iostream>
using namespace std;

const int M = 3;
const int N = 2;

void inputElemnets(int arr[M][N], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
}

void displayElemnets(int arr[M][N], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int sumElemnets(int arr[M][N], int m, int n) {
	int sum = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}

void rowSum(int arr[M][N], int m, int n) {
	for (int i = 0; i < m; i++) {
		int rowS = 0;
		for (int j = 0; j < n; j++) {
			rowS += arr[i][j];
		}
		cout << "Sum of Row " << i+1 << " : "<<rowS;
	}
}

void colSum(int arr[M][N], int m, int n) {
	for (int j = 0; j < n; j++) {
		int colS = 0;
		for (int i = 0; i < m; i++) {
			colS += arr[i][j];
		}
		cout << "Sum of col " << j + 1 << " : " << colS;
	}
}

void transpose(int arr[M][N], int m, int n) {
	int trans[N][M];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			trans[j][i] = arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << trans[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int arr[M][N];
	int choice;
	do {
		cout << "Menu: " << endl;
		cout << "1. Input Elements " << endl;
		cout << "2. Display Elements " << endl;
		cout << "3. Sum of Elements " << endl;
		cout << "4. Row Wise Sum " << endl;
		cout << "5. Column wise sum " << endl;
		cout << "6. Transpose " << endl;
		cout << "7. Exit " << endl;

		cout << "Enter the choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			inputElemnets(arr, M, N);
			break;
		case 2:
			displayElemnets(arr, M, N);
			break;

		case 3:
			cout << "Sum of All Elemnets: " << sumElemnets(arr, M, N) << endl;;
			break;
		case 4:
			rowSum(arr, M, N);
			break;
		case 5:
			colSum(arr, M, N);
			break;
		case 6:
			transpose(arr, M, N);
			break;
		case 7:
			cout << "Exiting........."<< endl;
			break;
		default:
			break;
		}
	} while (choice != 7);
	return 0;
}