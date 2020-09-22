    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    //wt[] -> arr[]
    //w -> sum
    int subset_sum(int arr[],int sum,int n){
        int static t[50][50];
        memset(t,-1,n+1);
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0){
                t[i][j]={0};
            }}}
            for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
           if(arr[i-1]<=j){
            t[i][j]=t[i][j-arr[i-1]] || t[i-1][j];
        }
        else{
            t[i][j]=t[i-1][j];
        }
    }}
    return n,sum;
       }
    int main(){
        int arr[]={2,3,7,8,10};
        int sum=11;
        int n=5;
        subset_sum(arr,sum,n);
        cout<<subset_sum(arr,sum,n)<<endl;
        cout<<"hello;"<<endl;
    return 0;
    }
