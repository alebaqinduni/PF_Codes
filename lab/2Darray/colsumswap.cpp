void swapMaxColumn(int arr[][3], int size)
{
    int colSum[3] = {0};
    // step 1: find column sums
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < size; i++)
        {
            colSum[j] += arr[i][j];
        }
    }
    // step 2: find max column index
    int maxCol = 0;
    for (int j = 1; j < 3; j++)
    {
        if (colSum[j] > colSum[maxCol])
        {
            maxCol = j;
        }
    }
    // step 3: swap max column with first column
    for (int i = 0; i < size; i++)
    {
        swap(arr[i][0], arr[i][maxCol]);
        cout << arr[i];
    }
}