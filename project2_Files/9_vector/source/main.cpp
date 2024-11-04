#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int n, m;
	printf("행렬의 크기 n(행), m(열) n * m 입력: ");
	cin >> n >> m;
	
	vector<vector<int>> matrixA(n, vector<int>(m, 0));
	vector<vector<int>> matrixB(n, vector<int>(m, 0));
	
	int i, j;

	cout << "행렬 A의 값 입력 : " << endl;

	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> matrixA[i][j];
		}
	}

	cout << endl;
	cout <<"행렬 B의 값 입력 : " << endl;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> matrixB[i][j];
		}
	}

	cout << endl;
	cout <<"행렬A + 행렬B : " << endl;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cout << matrixA[i][j] + matrixB[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
