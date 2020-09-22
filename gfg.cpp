#include<bits/stdc++.h>
using namespace std;

    int countPower(int X[],int Y[],int a,int b){
    int ans=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
        if(pow(X[i],Y[j])>pow(Y[j],X[i]))
            ans++;
    }
        return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
           int m,n;
        cin>>m>>n;
        int X[m],Y[n];
        for(int i=0;i<m;i++){
            cin>>X[i];
        }
        for(int i=0;i<n;i++){
            cin>>Y[i];
        }
    cout<<countPower(X,Y,m,n)<<endl;

    }

return 0;}

/* #include<iostream>
using namespace std;
 class Solution{
     public:
    long long countPairs(int X[], int Y[], int m, int n) {
        // code here
        if(x==0)
            return 0;
        if(x==1)
            return y;

    }
 };
    int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int X[m],Y[n];
        for(int i=0;i<m;i++){
            cin>>X[i];
        }
        for(int i=0;i<n;i++){
            cin>>Y[i];
        }
        Solution ob;
        auto ans=ob.countPairs(X,Y,m,n)'
        cout<<ans<<endl;
    }
    return 0;}


2
3 2
2 1 6
1 5
3 3
10 19 18
11 15 9


    */
