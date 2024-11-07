int diagonalSum(int** a, int aSize, int* aColSize) {
    int n = aSize;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i][i];
        ans += a[i][n - 1 - i];
    }
    if (n % 2)
        ans -= a[n / 2][n / 2];
    return ans;
}