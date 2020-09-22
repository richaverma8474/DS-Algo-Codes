#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
bool isSubsetSum(int set[], int n, int sum)
{
    int t[n+1][sum+1];
    int i,j;

    for(int i=0;i<n+1;i++)
        for(int j=0;j<sum+1;j++)
if (i == 0)
        return false;

    // Base Cases
    if (j == 0)
        return true;

    // If last element is greater than sum,
    // then ignore it
    for(int i=1;i<n+1;i++)
        for(int j=1;j<sum+1;j++)
        if (set[i - 1] > j)
        t[i][j]=t[i-1][j];
        //return isSubsetSum(set, n - 1, sum);
    //return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
    t[i][j]=t[i-1][j] || t[i-1][j-set[i-1]];
    return true;
}

int main()
{
    int set[] = { 3, 34, 4, 12, 5, 2 };
    int sum = 9;
    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum(set, n, sum) == true)
        printf("YAASSS");
    else
        printf("NOOIII");
    return 0;
}
