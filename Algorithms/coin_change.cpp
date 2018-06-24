int count( int S[], int m, int n )
{
        int table[n+1];
     memset(table, 0, sizeof(table));//making all the elements of array table 0
    table[0] = 1;//making first element as 1
    for(int i=0; i<m; i++)
        for(int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]];
    //return the coin change array
    return table[n];
}
