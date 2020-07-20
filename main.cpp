#include <iostream>
using namespace std;

#define N 7

int main() {
    int num[N][N] = {0};
    int i, j, k, sum = 1;

    for(k = 1; sum < N * N; k++)
    {
        for(i = k - 1, j = k - 1; j < N - k; j++)
            num[i][j] = sum++;
        for(i = k - 1, j = N - k; i < N - k; i++)
            num[i][j] = sum++;
        for(i = N - k, j = N - k; j > k - 1; j--)
            num[i][j] = sum++;
        for(i = N - k, j = k - 1; i > k - 1; i--)
            num[i][j] = sum++;
    }
    if(N % 2 == 1)
        num[N/2][N/2] = N * N;
    cout << "result:" << endl;
    printf("\n");

    /*output*/
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%5d", num[i][j]);
        }
        printf("\n\n");
    }


}
