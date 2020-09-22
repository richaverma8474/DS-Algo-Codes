/*#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int>&s, int temp){
    if(s.size()==0 || s.top()<=temp){
        s.push(temp);
        return;
    }
    int val= s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
    return;
}
void sort(stack<int>&s){
    if(s.size()==1){
        return;
    }
    int temp= s.top();
    s.pop();
    sort(s);
    insert(s,temp);
}
int main(){
    int arr[6]  = {5,6,9,1,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    stack<int> s;
    for(int i=0;i<n;i++){
        s.push(arr[i]);
    }
   sort(s);
   while(s.size()!=0){
        
        s.pop();
        cout<<s.top()<<" ";
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
cout<<"n is equal to : "<<n<<endl;
cout<<"n+2= "<<n+2<<endl;

return 0;}