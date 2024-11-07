int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int n1 = accountsSize;
    int n2 = accountsColSize[0];
    int ans = 0;
    for (int i = 0; i < n1; i++) {
        int sum = 0;
        for (int j = 0; j < n2; j++) {
            sum += accounts[i][j];
        }
        if (ans < sum)
            ans = sum;
    }
    return ans;
}