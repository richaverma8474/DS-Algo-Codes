PATTERN1
#include<iostream>
/*
1
2 3
4 5 6
7 8 9 10
-print n rows from 1 to n
-print i number of columns in ith row
-Linear increment
*/
/*

    1
   2 3
  4 5 6
 7 8 9 10

*/
using namespace std;
int main(){
int n,val=1;
cin>>n;
for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){
for(int k=0;k<n-i;k++){
            cout<<" ";
        }
                cout<<val<<" ";
        val++;
    }

    cout<<endl;
}
return 0;

}

SIMPLE INTEREST
#include<iostream>
using namespace std;

int main(){
float p,r,t;
cout<<"enter"<<endl;
cin>>p>>r>>t;
float SI=p*r*t/100.0;
cout<<SI;
}

SUM OF DIGITS OF A NUMBER
#include<iostream>
using namespace std;
int main(){
int n,r,sum=0;
cout<<"Enter n:";
cin>>n;
r=n;
while(r!=0){
    sum=sum+r%10;
    r=r/10;
}
cout<<"the sum of n is:"<<sum;
return 0;}

PATTERN
#include<iostream>
using namespace std;
/*
1
1 1
1 1 1
1 0 0 1
1 1 1 1 1
1 0 0 0 0 1
*/
int main(){
    int n;
    cin>>n;
   int row=1;
   while(row<=n){
    int col=1;
    if(row%2==0)
    while(col<=row){
        cout<<1<<" ";
        col=col+1;
    }
    else{
        cout<<"1"<<" ";
        while(col<=row-2){
            cout<<0<<" ";
            col=col+1;
        }
        cout<<1<<" ";
    }
    cout<<endl;
    row=row+1;
   }
return 0;
}

PATTERN

*
**
***
****
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

PATTERN
**********
********* *
********   *
*******     *
******       *
*****         *
****           *
***             *
**               *
*                 *
**               *
***             *
****           *
*****         *
******       *
*******     *
********   *
********* *
**********
PATTERN
1
11
111
1001
11111
using namespace std;
int main(){
int n;
cin>>n;
int row=1;
while(row<=n){
    int col=1;
    if(row%2!=0){
        while(col<=row){
            cout<<"1";
            col=col+1;
        }
    }
    else{
        cout<<"1";
        while(col<=row-2){
            cout<<"0";
            col=col+1;
        }
        cout<<"1";
    }
    cout<<endl;
    row=row+1;
}
return 0;
}

//handelling multiple inputs on an online judge
#include<iostream>
using namespace std;
int main(){
int n,no;
cin>>n;
while(n>0){
    cin>>no;
    cout<<no*no<<endl;
    n--;
}
return 0;
}
//VON NEUMAN
#include<iostream>
using namespace std;
int main(){
int n,p=1,ans=0;
cin>>n;
while(n>0){
   int r=n%10;
   ans=ans+r*p;
   p=p*2;
   n=n/10;
}
  cout<<ans<<endl;
return 0;
}

//Von Neuman with Multiple inputs
#include<iostream>
using namespace std;
int main(){
int no,n;
cin>>no;
while(no>0){
        cin>>n;
    int p=1,ans=0;
    while(n>0){
        int r=n%10;
        ans=ans+r*p;
        p=p*2;
        n--;
        n=n/10;
    }
    cout<<ans<<endl;
    no--;
}
return 0;
//Section Programming
#include<iostream>
using namespace std;
int main(){
int x=1000;
float y=10.145;
bool ifRaining=true;
double pi=3.14762636423;
char ch='A';
cout<<"int"<<sizeof(x)<<endl;
cout<<"float"<<sizeof(y)<<endl;
cout<<"bool"<<sizeof(ifRaining)<<endl;
cout<<"double"<<sizeof(pi)<<endl;
cout<<"char"<<sizeof(ch)<<endl;
return 0;
}

//Datatype modifiers+Data types
/*F->C Coversion
0 -17
20 -6
40 4
60 15
80 26
100 37
120 48
140 60
160 71
180 82
200 93
220 104
240 115
260 126
280 137
300 148
*/
#include<iostream>
using namespace std;
int main(){
int f=0,c;
while(f<=300){
        c=(5*(f-32))/9;
cout<<f<<" "<<c<<endl;
f=f+20;
    }
    return 0;
}

//No divisible by 2,3 or both
#include<iostream>
using namespace std;
int main(){
int n,no;
cout<<"ENter the Number"<<endl;
cin>>no;
while(no>0){
cin>>n;
if(n%2==0&&n%3==0){
    cout<<"n="<<n<<"is divible by both 2&3."<<endl;
}
else if(n%2==0){
    cout<<"n="<<n<<"is divible by 2."<<endl;
}
else if(n%3==0){
    cout<<"n="<<n<<"is divible by 3."<<endl;
}
else{
    cout<<"Not Divisible."<<endl;
}
no--;
}
return 0;
}

//Min Max number so far
#include<iostream>
using namespace std;
int main(){
        int n,no;
cin>>n;
int min_so_far=INT_MAX;
int max_so_far=INT_MIN;
cout<<min_so_far<<max_so_far<<endl;

for(int i=0;i<n;i++){
    cin>>no;
    if(no<min_so_far){
        min_so_far=no;
    }
    if(no>max_so_far){
        max_so_far=no;
    }

}
 cout<<"Max number so far is: "<<max_so_far<<endl;
    cout<<"Min numver so far is: "<<min_so_far<<endl;
    return 0;
}

//find square root
#include<iostream>
using namespace std;
int main(){
int n,k;
while(k<=0){
cin>>n;
float inc=1.0;
float ans=0;
while(ans*ans<=n){
ans=ans+inc;
}
ans=ans-inc;
cout<<ans;
k--;
}
return 0;
}

//find square root
#include<iostream>
using namespace std;
int main(){
int n,k;
while(k<=0){
cin>>n;
float inc=1.0;
float ans=0;
while(ans*ans<=n){
ans=ans+inc;
}
ans=ans-inc;
cout<<ans;
k--;
}
return 0;
}

//break and continue
#include<iostream>
using namespace std;
int main(){
    int n;
    while(true){
        //no declaring of conditions as of now
        cin>>n;
        if(n%7==0){
            break;
        }
        cout<<"No : "<<n<<endl;

    }
  cout<<"oops!divisible hence came out of the loop!:"<<endl;
return 0;
}

//prime
#include<iostream>
using namespace std;
int main(){

int n,i;
cin>>n;
for(i=2;i<=n-1;i++){
if(n%i==0){
    cout<<n<<" is not prime"<<endl;
        break;
}
}
if(n==i){
    cout<<n<<" is Prime"<<endl;
}
return 0;
}

//bitwise operator
7
2 3 5 6 3 2 5
answer: 6

#include<iostream>
using namespace std;
int main () {
    int n,no,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>no;
        ans=ans^no;
    }
    cout<<"answer: "<<ans<<endl;
return 0;
}
//use of cin.getch()
#include<iostream>
using namespace std;
int main(){
char ch;
ch=cin.get();
cout<<endl;
while(ch!=0){
    cout<<ch;
    //print the last ch we have read
ch=cin.get();
    //updated value of ch in the memory
}
return 0;
}
//pythogoreas triplet
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int
int main(){
    ll x;

    while( cin >> x){
        if(x < 3){ printf("-1\n");  continue; }

        if(x & 1)  printf("%lld %lld", (x*x-1)/2, (x*x+1)/2);
        else{

            printf("%lld %lld", ((x*x)/4)-1, ((x*x)/4)+1);
        }
    }
    return 0;
}
//compute final diaplacement
#include<iostream>
#include<cmath>
using namespace std;
int main(){
char ch;
ch=cin.get();
int x=0,y=0,p,q,r;

while(ch!='\n'){
    if(ch=='n' or ch=='N'){
        y++;
    }
    else if(ch=='s' or ch=='S'){
        y--;
    }
    else if(ch=='e' or ch=='E'){
        x++;
    }

    else{
        x--;
    }
ch=cin.get();
}
p=x*x;
q=y*y;
r=p+q;
cout<<"x = "<<x<<"y = "<<y<<endl;
cout<<"Final Displacement"<<sqrt(r)<<endl;

return 0;
}
//ANOTHER
//compute final displacement
#include<iostream>
#include<cmath>
using namespace std;
int main(){
char ch;
ch=cin.get();
int x=0,y=0,p,q,r;

while(ch!='\n'){
    if(ch=='n' or ch=='N'){
        y++;
    }
    else if(ch=='s' or ch=='S'){
        y--;
    }
    else if(ch=='e' or ch=='E'){
        x++;
    }

    else{
        x--;
    }
ch=cin.get();
}
p=x*x;
q=y*y;
r=p+q;
cout<<"x = "<<x<<"y = "<<y<<endl;
cout<<"Final Displacement"<<sqrt(r)<<endl;
for(int i=1;i<=x;i++){
    cout<<"E";
}
for(int i=1;i<=y;i++){
    cout<<"N";
}
for(int i=1;i>x;i--){
    cout<<"w";
}
for(int i=1;i>y;i--){
    cout<<"s";
}

return 0;
}

//pre post increment
#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x=5;
cout<<x<<endl;
x++;
cout<<x<<endl;
int y=++x;
cout<<x<<endl;
cout<<y;
return 0;
}
//FOOD MENU
#include<iostream>
using namespace std;
int main(){
    char ch;
    ch=cin.get();
    switch(ch){
        case'p':cout<<"Pizza"<<endl;
    case'P':cout<<"Pizza"<<endl;
break;
    case'B':cout<<"Burger"<<endl;
break;
    case'S':cout<<"Pasta"<<endl;
break;
    case'M':cout<<"Macroni"<<endl;
break;
    case'R':cout<<"Rolls"<<endl;

}
cout<<ch;
return 0;
}

//pattern
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
        int row=i%2==1?1:0;
    for(int j=1;j<=i;j++){
        cout<<row<<" ";
row=1-row;
    }
    cout<<endl;
}
return 0;
}
//trailing zaeroes
#include<iostream>
using namespace std;
int tralingzeroes(int n){
        int ans=0;
for(int D=5;n/D>=1;D=D*5){
    ans=ans+n/D;
}
 return ans;
}
int main(){
long long int n;
cin>>n;
cout<<tralingzeroes(n)<<endl;

return 0;
}

//printallprime function
#include<iostream>
using namespace std;
bool countprimes(int n){
for(int i=2;i<=n-1;i++){
    if(n%i==0){
        return false;
    }
    return true;
}
}
void printallprimes(int N){
for(int i=2;i<=N-1;i++){
    if (countprimes(i)){
        cout<<i<<endl;
    }
}
}
int main(){
int n;
cin>>n;
printallprimes(n);

return 0;
}
//trailing zeroes functions
#include<iostream>
using namespace std;
int trailing_zeroes(int n){
    int ans=0;
for(int D=5;n/D>=1;D=D*5){
   ans=ans+n/D;
}
return ans;
}

int main(){
int n;
cin>>n;
cout<<trailing_zeroes(n);

return 0;
}

//fibonacci
#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0,b=1,c;
for(int i=1;i<=n-1;i++){
        c=a+b;
        a=b;
        b=c;

}
return c;
}

int main(){
int n;
cin>>n;
cout<<fibonacci(n);

return 0;
}

//prime function
#include<iostream>
using namespace std;
bool isPrime(int n){
for(int i=2;i<=n-1;i++){
    if(n%i==0){
        return false;
    }
    return true;
}
}

int main(){
int n;
cin>>n;
if (isPrime(n)){
cout<<"Prime!"<<endl;
}
else{
    cout<<"not"<<endl;
}
return 0;
}

//patternABCDE
5
A B C D E
A B C D
A B C
A B
A
#include<iostream>
using namespace std;
void printPattern(int n){
    for(int i=1;i<=n;i++){
        int count=n-i+1;
        char alphabet='A';
        for(int j=1;j<=count;j++){
            cout<<alphabet<<" ";
            alphabet++;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printPattern(n);

return 0;
}

//array
#include<iostream>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int A[n];
for(int i=0;i<n;i++){
    cin>>A[i];

}
for(int i=0;i<n;i++){
    cout<<A[i]<<" , ";}
cout<<"Size of array; "<<sizeof(A)<<endl;
int k=sizeof(A)/sizeof(int);
cout<<"k"<<k;
return 0;}

//linear search
#include<iostream>
using namespace std;
int main(){
    int n,key;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the number to be searched"<<endl;
    cin>>key;
    for(int i=0;i<=n;i++){
    if(a[i]==key){
        cout<<"found!";
        break;
    }

    else if(i==n){
        cout<<"doesnt exist"<<endl;
        break;}
    }
return 0;}

//smallest and largest
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[1000];
for (int i=0;i<n;i++){
    cin>>a[i];
}
//algorithm to find the largest number
int largest=INT_MIN;
int smallest=INT_MAX;
for(int i=0;i<n;i++){
    if(a[i]>largest){
        largest=a[i];
    }
    if(a[i]<smallest){
        smallest=a[i];
    }
}
cout<<"smallest"<<smallest<<endl;
cout<<"largest"<<largest<<endl;
return 0;
}

//binary search
#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key){
int s=0,e=n-1;
int mid=s+e/2;
while(s<=e){
if(a[mid]==key){
    return mid;
}
 if(a[mid]>key){
    e=mid-1;
 }
 if(a[mid]<key){
    s=mid+1;
 }
}
return -1;
}
int main(){
int n,key;
cin>>n;
int a[1000];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"Enter the number to be searched"<<endl;
cin>>key;
cout<<binarysearch(a,n,key);
return 0; }
//binary search
#include<iostream>
using namespace std;
int binarysearch(int n,int a[], int key){
    int s=0;
    int e=n-1;
int    m=s+e/2;
while(s<=e){
   if(a[m]==key){
    return m;
   }
   else if(a[m]>key){
    e=m-1;
   }
   else if(a[m]<key){
    s=m+1;
   }
}
return -1;
}
int main(){
    int n,key,a[1000];
    cin>>n;
    cout<<endl;

    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>key;
    binarysearch(n,a,key);
    return 0;
}
//insertion sort
#include<iostream>
using namespace std;
void insertionsort(int a[],int n){
    for(int i=1;i<=n-1;i++){
    int j=i-1;
int e=a[i];
while(j>=0 && a[j]>e){
        //shift the current element to the next place
    a[j+1]=a[j];
    j--;
}
a[j+1]=e;
}}

int main(){
int n,a[1000];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
insertionsort(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" , ";
}

return 0;
}

//cout all sub arrays
#include<iostream>
using namespace std;
int main(){
int n,a[100];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
            cout<<a[k]<<" , ";
        }
        cout<<endl;
    }
}
return 0;
}

//cout max sum of all sub arrays
#include<iostream>
using namespace std;
int main(){
    int n,a[1000];
    cin>>n;
    int current=0,maxx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                current=0;
            for(int k=i;k<=j;k++){
               current=current+a[k];
            }
            //for updating sum
            if(current>maxx){
                maxx=current;
            }
        }
    }
            cout<<"max  : "<<maxx<<endl;
return 0;
}
___________________________________________________________________________________________________
//generating sub arrays
#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n,csum=0,msum=0;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //generating all the sub arrays
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                   csum=0;
            for(int k=i;k<=j;k++){

                cout<<a[k]<<" ";
            csum+=a[k];
            if(csum>msum){
        msum=csum;
    }
            }
            cout<<endl<<"maximum sum is "<<csum<<endl;
        }
    }


cout<<"______________________________________________________________________________________________"<<endl<<"current sum is "<<msum<<endl;
return 0;}
//-4 1 3 -2 6 2 -1 -4 -7

//insertion sort
#include<iostream>
using namespace std;
void insertionsort(int n,int a[]){
for(int i=1;i<=n-1;i++){
    int e=a[i];
    int j=i-1;
while(j>=0 && a[j]>e){
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=e;
    }
}
int main(){
int n,a[1000];
cin>>n;

for(int i=0;i<n;i++){
    cin>>a[i];
    }
    insertionsort(n,a);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" , ";
        }


return 0;

}
//error
//maximum sub array sum 2
#include<iostream>
using namespace std;
int main(){
    int n,a[1000],cu,cumsum[1000]={0};
    int currentsum=0,maximumsum=0;
    int left=-1,right=-1;
    cin>>a[0];
    cumsum[0]=a[0];
    for(int i=1;i<n;i++){
            cin>>a[i];
            cumsum[i]=cumsum[i-1]+a[i];
    }
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
            currentsum=0;
            currentsum=currentsum[j]-currentsum[i-1];
    //update
    if(currentsum>maximumsum){
        maximumsum=currentsum;
        left=i;
        right=j;
    }
        }
    }
    cout<<"maximum sum is "<<maximumsum;
    for(int k=left;k<=right;k++){
        cout<<a[k]<<" , ";
    }
return 0;
}

//kadanes algorithm
#include<iostream>
using namespace std;
int main(){
    int n,a[1000],cs=0,maxx=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cs=cs+a[i];
        if(cs<0){
            cs=0;
        }
        maxx=max(cs,maxx);
    }
    cout<<"maximum is: "<<maxx<<endl;
return 0;
}



//given a sorted array.find pair of elements that sum to k
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[]={1,3,5,7,10,11,12,13};
    int s=16;
    int i=0;
    int j=sizeof(a)/sizeof(int) -1;
    while(i<j){
int            csum=a[i]+a[j];
        if(csum>s){
            j--;
        }
        else if(csum<s){
            i++;
        }
        else if(csum==s){
            cout<<a[i]<<"and"<<a[j]<<endl;
            i++;
            j--;
        }
    }


    return 0;}
    ------------------------------------------------------------
#include<iostream>
using namespace std;
int main(){
    int n,a[1000],cs=0,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter k"<<endl;
    cin>>k;
    for(int i=0;i<n;i++){
        cs=cs+a[i];
        if(cs=k){
            cout<<"yes there escit"<<endl;
            break;
        }
        else{
            cout<<"nooooo"<<endl;
        }
    }

return 0;
}

//waveprint of 2-D array
#include<iostream>
using namespace std;
int main(){
    int a[100][100]={0};
    int m,n;
    cout<<"enter m,n"<<endl;
    cin>>m>>n;

    //iterating over the array
    int val=1;
    for(int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            a[row][col]=val;
            val++;
            cout<<a[row][col]<<" ";
        }
 cout<<endl;
    }
    //traversal
    for(int col=0;col<n;col++){
        if(col%2==0){
           for(int row=0;row<m;row++){
            cout<<a[row][col]<<" , ";
           }
        }
        else{
         for(int row=m-1;row>=0;row--){
            cout<<a[row][col]<<" , ";
           }
        }
        cout<<endl;
    }
return 0;
}
//spiralwave
#include<iostream>
    using namespace std;
    void spiralprint(int a[100][100],int m,int n){
    int startrow=0;
    int startcol=0;
    int endrow=m-1;
    int endcol=n-1;
    while(startrow<=endrow && startcol<=endcol){
       //firstrow
       for(int i=startcol;i<=endcol;i++){
        cout<<a[startrow][i]<<" ";
       }
       startrow++;
       for(int i=startrow;i<=endrow;i++){
        cout<<a[i][endcol]<<" ";
       }
       endcol--;
       for(int i=endcol;i>=startcol;i--){
        cout<<a[endrow][i]<<" ";
       }
       endrow--;
       for(int i=endrow;i>=startrow;i--){
        cout<<a[i][startcol]<<" ";
       }
       startcol++;
    }
    cout<<endl;}
    int main(){
        int m,n;
        cin>>m>>n;
        int a[100][100];
        int val=1;
        for(int i=0;i<=m-1;i++){
            for(int k=0;k<=n-1;k++){
                a[i][k]=val;
                val++;
                cout<<a[i][k]<<" ";
            }
            cout<<endl;
        }
        spiralprint(a,m,n);

    return 0;
    }

//PIYUSH AND MAGICAL PARK
#include<iostream>
using namespace std;
void magicalpark(char a[100][100],int m,int n,int k,int s){
bool success=true;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        char ch=a[i][j];
        if(s<k){
            success=false;
            break;   }
        if(ch='*'){
            s+=5;  }
        else if(ch='.'){
            s-=2;}
        else{
            break;}
        if(j!=n-1){
            s--;
        }}}
        if(success){
            cout<<"yes "<<s<<endl;}
        else{
            cout<<"No!"<<endl;
        }}
 int main(){
     int m,n,k,s;
     char park[100][100];
     //taking input
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>park[i][j];
        }}     magicalpark(park,m,n,k,s);
     return 0;}

#include<iostream>
using namespace std;
int magical(char a[][100],int m , int n , int k , int s){
    bool success=true;
for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                char ch=a[i][j];

    if(s<k){
        success=false;
        break;
    }
    if(ch='*'){
        s+=5;
    }
    else if(ch='.'){
        s-+2;
    }
    else{break;}
    if(j!=1){
        s--;}}}
        if(success){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else{cout<<"No";}
}
int main(){
    int m,n,k,s;
cin>>m,n,k,s;
    char park[100][100];
    //take input
    /*
 ..*.
.#..
**..
.#**
*/
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>park[i][j];
        }
    }
magical(park,m,n,k,s);

return 0;}


//ROTATE IMAGE
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[100][100];
    int m,n;
    cin>>m>>n;
    int val=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                a[i][j]=val;
        val++;
            cout<<a[i][j]<<" ";
        }cout<<endl;}

        rotate(a,n);
         for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;}
return 0;}

//knapsack
#include<iostream>
    using namespace std;
    int knapsack(int wt[],int val[],int w,int n){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]<=w){
        return max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    }
    else{
        knapsack(wt,val,w,n-1);
    }
    return knapsack(wt,val,w,n-1);
       }
    int main(){
        int wt[]={1,32,3,5};
        int val[]={40,20,35,100};
        int w=7;
        int n=4;
        knapsack(wt,val,w,n);
        cout<<"Profit : "<<knapsack(wt,val,w,n);
    return 0;
    }

//topdown approach-error
    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    int knapsack(int wt[],int val[],int w,int n){
        int static t[50][50];
        memset(t,-1,n+1);
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0){
                t[i][j]={0};
            }}}
            for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
           if(wt[n-1]<=w){
            return t[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
           }
           else{
            return t[n][w]=knapsack(wt,val,w,n-1);
           }
        }
    }
    return knapsack(wt,val,w,n-1);
       }
    int main(){
        int wt[]={1,3,4,5};
        int val[]={1,4,5,7};
        int w=7;
        int n=4;
        knapsack(wt,val,w,n);
        cout<<knapsack(wt,val,w,n);
        cout<<"hello;"<<endl;
    return 0;
    }

//subsetsum
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
//catsanddogs-Codechef
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int C,D,L, val=0;
	    cin>>C>>D>>L;
	    if(L%4 != 0)
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    else
	    {
	        if(C<=2*D && (L/4>=D) && (L/4<=(C+D))){
	            cout<<"YES"<<endl;}
	        else if(C>2*D && (L/4>=(C-D)) && (L/4<=(C+D))){
	            cout<<"YES"<<endl;}
	        else{
	            cout<<"NO"<<endl;}
	    }
	}
	return 0;
}

//generating sub arrays 2.0
//-4 1 3 -2 6 2 -1 -4 -7
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n"<<endl;
    cin>>n;
    int a[100];
    int cumsum[100]={0};

    int csum=0;
    int msum=0;
    int left=-1,right=-1;
    cin>>a[0];
    cumsum[0]=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        cumsum[i]=cumsum[i-1]+a[i];}
    //generating all the sub arrays
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                csum=0;
                   csum=cumsum[j]-cumsum[i-1];
                   if(csum>msum){
                    msum=csum;
                    left=i;
                    right=j;
                   }}}

            cout<<endl<<"maximum sum is "<<msum<<endl;
            //printing the sub array
            for(int k=left;k<=right;k++){
                cout<<a[k]<<" ";
            }
return 0;}

// to view the mth number after n number of rotations
#include <bits/stdc++.h>
using namespace std;

int getFirstElement(int a[], int N,int K, int M)
{
	// The array comes to original state
	// after N rotations
	K %= N;

	// Mth element after k left rotations
	// is (K+M-1)%N th element of the
	// original array
	int index = (K + M - 1) % N;

	int result = a[index];

	// Return the result
	return result;
}
int main()
{
	int a[] = { 3, 4, 5, 23 };

	int N = sizeof(a) / sizeof(a[0]);

	int K = 2, M = 1;
	cout << getFirstElement(a, N, K, M);
	return 0;
}

//kadanes algorithm
//kadanes algorithm
#include<iostream>
using namespace std;
int main(){
int n,cs=0,ms=0,a[100];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
        cs=cs+a[i];
if(cs<0){

    cs=0;}
    ms=max(cs,ms);
}
cout<<"maximum sum is"<<ms<<endl;
return 0;}

//print reverse'
#include<iostream>
using namespace std;
int main(){
    int n;
    int ans;
cout<<"Enter the number to be reversed";
cin>>n;
while(n!=0){
        ans=ans*10;
ans=ans+n%10;
n=n/10;
}
cout<<"reversed number is"<<ans<<endl;
return 0;}
//wave print
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of m,n"<<endl;
    int m,n;
    cin>>m>>n;
    int a[m][n]={0};
    int val=1;
    int startrow=0,startcol=0,endrow=m-1,endcol=n-1;

    for(int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            a[row][col]=val;
            val++;
                    cout<<a[row][col]<<"   ";
        }
        cout<<endl;
    }
   for(int col=0;col<=n-1;col++){
    if(n%2==0){
        for(int row=0;row<=m-1;row++){
           cout<<a[row][col]<<" ";
        }
    }
    else{
        for(int row=m-1;row>=0;row--){
            cout<<a[row][col]<<" ";
        }
    }
    cout<<endl;
   }
    return 0;}
//spiral print
#include<iostream>
using namespace std;
void spiralprint(int a[100][100],int m,int n){
    int startrow=0,startcol=0,endrow=m-1,endcol=n-1;
while(startrow<=endrow && startcol<=endcol){
    //for first row left to right
   for(int i=startcol;i<=endcol;i++){
    cout<<a[startrow][i]<<"  ";
   }
   startrow++;
   //for last col top to down
   for(int i=startrow;i<=endrow;i++){
    cout<<a[i][endcol]<<"  ";
   }
   endcol--;
   for(int i = endcol;i>=startcol;i--){
    cout<<a[endrow][i]<<"  ";
   }
   endrow--;
   for(int i=endrow;i>=startrow;i--){
    cout<<a[i][startcol]<<"  ";
   }
   startcol++;
   }
cout<<endl;
}
int main(){
    cout<<"Enter the value of m,n"<<endl;
    int a[100][100]={0};
    int m,n;
    cin>>m>>n;
    int val=1;


    for(int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            a[row][col]=val;
            val++;
                    cout<<a[row][col]<<"   ";
        }
        cout<<endl;
    }
    spiralprint(a,m,n);
    return 0;
}

//maximum sum of subarray
int Solution::maxSubArray(const vector<int> &A) {
    int a[100]={0};
    int currentsum=0;
    int msum=0;
    int cumarray[100]={0};
    cumarray[0]=a[0];
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
cumarray[i]=cumarray[i-1]+a[i];
    }
    //for generating sub arrays
    for(int i=0;i<n;i++){
        for(int j=i;j<=n;j++){
            currentsum=cumarray[j]-cumarray[i-1]j
        }
        if(currentsum>msum){
            msum=currentsum;
        }
    }
cout<<msum;
return 0;
}
//______________________________________________________
class Solution {
    public:
        int maxSubArray(const vector<int> &A) {
            int n = A.size();
            int curSum = 0, maxSum = -1000000000;
            for (int i = 0; i < n; i++) {
                curSum += A[i];
                maxSum = max(maxSum, curSum);
                if (curSum < 0) curSum = 0;
            }
            return maxSum;
        }
};//______________________________________________________
int Solution::maxSubArray(const vector<int> &A) {
    auto i=A.begin();
    long long int m,s,flag=0;
    m=0;s=0;
    for(i=A.begin();i!=A.end();i++)
    {
        if(*i>0)
        {
            flag=1;
        }
        m=m+*i;
        if(m<0)
        m=0;
        if(m>s)
        {
            s=m;
        }
    }
    if(flag==0)
    {
        s=*max_element(A.begin(),A.end());
    }
    return s;
}

//spiral matrix -ii
class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
            int dir = 0;
            vector< vector<int> > matrix(n, vector<int> (n, 0));
            int i = 0, j = 0, k = 1;
            while (k <= n * n) {
                matrix[i][j] = k++;
                if (dir == 0){
                    j++;
                    if (j == n || matrix[i][j] != 0) dir = 1, j--, i++;
                } else
                if (dir == 1) {
                    i++;
                    if (i == n || matrix[i][j] != 0) dir = 2, i--, j--;
                } else
                if (dir == 2) {
                    j--;
                    if (j < 0 || matrix[i][j] != 0) dir = 3, j++, i--;
                } else
                if (dir == 3) {
                    i--;
                    if (i < 0 || matrix[i][j] != 0) dir = 0, i++, j++;
                }
            }
            return matrix;
        }
};
vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int dir = 0;
    vector<int> B;
    int m = A.size();
    int n = A[0].size();
    int t=0, l=0, b = m-1, r=n-1;
    while(t<=b && l<=r){
        if(dir==0){
            for(int i=l; i<=r; i++){
                B.push_back(A[t][i]);
            }
            t++;
            dir=1;
        }
        else if(dir==1){
            for(int i=t; i<=b; i++){
                B.push_back(A[i][r]);
            }
            r--;
            dir=2;
        }
        else if(dir==2){
            for(int i=r; i>=l; i--){
                B.push_back(A[b][i]);
            }
            b--;
            dir=3;
        }
        else if(dir==3){
            for(int i=b; i>=t; i--){
                B.push_back(A[i][l]);
            }
            l++;
            dir=0;
        }
        else break;
    }
    return B;
}

600 points question
int Solution::repeatedNumber(const vector<int> &A)
{
   int n=A.size();
    int ans,flag=0;
    for(int i=0;i<23;i++)
    {

    int index=rand()%n;
    int elem=A[index];
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==elem)
        count++;
    }

    if(count>n/3)
    {
        flag=1;
        ans=elem;
    }

    if(flag==1)
    break;
    }

    if(flag==1)
    return ans;
    else return -1;

}
#include<iostream>
using namespace std;
void display(int a[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<<a[i][j]<<" , ";
}
cout<<endl;}}
void rotatee(int a[][100],int n){
     for(int i=0;i<n;i++){
                int startcol=0;
                int endcol=n-1;
            while(startcol<endcol){
                swap(a[i][startcol],a[i][endcol]);
            }
}
//take transpose
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
	startcol++;
endcol--;
            }
        }}}
int main(){
    int a[100][100];
    int m,n;
    cin>>m>>n;
    int val=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                a[i][j]=val;
        val++;
            cout<<a[i][j]<<" ";
        }cout<<endl;}
rotatee(a,n);
display(a,n);

        return 0;}

//STAIRCASE SEARCH
#include <bits/stdc++.h>
using namespace std;
int search(int mat[4][4], int n, int x)
{
	if (n == 0)
		return -1;
	int smallest = mat[0][0], largest = mat[n - 1][n - 1];
	if (x < smallest || x > largest)
		return -1;
	// set indexes for top right element
	int i = 0, j = n - 1;
	while (i < n && j >= 0) {
		if (mat[i][j] == x) {
			cout << "n Found at "
				<< i << ", " << j;
			return 1;
		}
		if (mat[i][j] > x)
			j--;
		else
			i++;
	}
	cout << "n Element not found";
	return 0;
}

int main()
{
	int mat[4][4] = { { 10, 20, 30, 40 },
		         { 15, 25, 35, 45 },
		          { 27, 29, 37, 48 },
		          { 32, 33, 39, 50 } };
	search(mat, 4, 29);
	return 0;
}

//remove consecutive duplicates
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void removeDuplicates(char a[100]){
int len=strlen(a);
if(len==0 || len==1){
    return;
}
int prev=0;
for(int current=1;current<len;current++){
    if(a[current]!=a[prev]){
        prev++;
        a[prev]=a[current];
    }}
    a[prev+1]='\0';
}
int main(){
    char a[100];
cin.getline (a,100);
removeDuplicates(a);
    cout<<a;
 }
//largest string
//remove consecutive duplicates
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    char a[100];
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a,100);
        cout<<a<<endl;
    }
return 0; }

Strcpy
#include<iostream>
#include<string>
#include<cstring>

using namespace std;
int main(){
    int n;
    cin>>n;
    cin.get();
    int len=0,largestlen=0;
    char a[100];
    char largest[100];
    for(int i=0;i<n;i++){
        cin.getline(a,100);
        len=strlen(a);
        if(len>largestlen){
            largestlen=len;
             strcpy(largest,a);
        }

    }
    cout<<largest<<"and"<<largestlen<<endl;

return 0;}
string tokenization
#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main(){
char s[100]="Today is a rainy day!!!";
char*ptr=strtok(s," ");
cout<<ptr<<endl;
while(ptr!=NULL){
 ptr=strtok(NULL," ");
cout<<ptr<<endl;}
/*ptr=strtok(NULL," ");
cout<<ptr<<endl;
ptr=strtok(NULL," ");
cout<<ptr<<endl;
ptr=strtok(NULL," ");
cout<<ptr<<endl; */
return 0;}

//recursion-factorial
#include<iostream>
using namespace std;
int factorial(int n){
if(n==0){
    return 1;}
int smallans=factorial(n-1);
return n*smallans;
//return n*factorial(n-1);
}int main(){
   int n;
   cin>>n;
   cout<<factorial(n)<<endl;
    return 0;}

//Recursive function to print first n numbers
//in increasing and decreasing order
#include<iostream>
using namespace std;
void dec(int n){
if(n==0){
    return;}
cout<<n<<" ";
dec(n-1);/*recursive case*/}
void inc(int n){
if(n==0){
    return;}
inc(n-1);//recursive case
cout<<n<<" ";
}int main(){
   int n;
   cin>>n;
   dec(n);
   cout<<endl;
   inc(n);
    return 0;}

//Recursive power function
#include<iostream>
using namespace std;
int power(int a,int b){
if(b==0)
    return 1;
else
    return a*power(a,b-1);}
int main(){
   int a=7,b=3;
cout<<power(a,b)<<endl;
    return 0;}

//print spellings of 2048 as : two zero four eight
#include<iostream>
using namespace std;
char spellings[][10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
void Print(int n){
if (n==0)
    return;
Print(n/10);
cout<<spellings[n%10]<<" ";}
int main(){
int n;
cin>>n;
Print(n);
return 0;}

//multiply two numbers
#include<iostream>
using namespace std;
int multiply(int a,int b){
if(a==0 || b==0)
    return 0;
else
    return a+multiply(a,b-1);
}
int main(){
int m,n;
cin>>m>>n;
cout<<multiply(m,n)<<endl;
return 0;}

//binary serch - recursion
#include<iostream>
using namespace std;
int BinarySearch(int a[],int s,int e,int k){
int m=s+e/2;
if(e>=s){
    if(a[m]==k)
        return m;
    else if(a[m]>k)
        return BinarySearch(a,s,m-1,k);
    else
        return BinarySearch(a,m+1,e,k);
}return -1;}

int main(){
int a[10]={1,2,3,4,5,6,7,8,9,14};
int n=sizeof(a)/sizeof(int);
int s=0,e=n-1;
int k =14;
cout<<BinarySearch(a,s,e,k)<<endl;
return 0;}

//bubble_sort
#include<iostream>
using namespace std;
void bubbleSort(int a[],int n){
if(n==1)
    return;
for(int j=0;j<=n-2;j++){
    if(a[j]>a[j+1])
        swap(a[j],a[j+1]);}
bubbleSort(a,n-1);}
int main(){
int a[]={3,4,2,5,1,0};
int n=sizeof(a)/sizeof(int);
bubbleSort(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}return 0;}

//converting char to int
#include<iostream>
#include<cstring>>
using namespace std;
int StringToInt(char *a,int n){
if(n==0)
    return 0;
    int digit=a[n-1]-'0';
    int small_ans=StringToInt(a,n-1);
    return small_ans*10+digit;}
int main(){
    char a[]={"1234"};
    int n=strlen(a);
int x=StringToInt(a,n);
cout<<x<<endl;
cout<<x+1<<endl;
return 0;}

//replace pi with 3.14
#include<iostream>
#include<cstring>>
using namespace std;
void replacePi(char a[],int i){
if (a[i]==NULL or a[i+1]==NULL){
    return;
}
    if(a[i]=='p' && a[i+1]=='i'){
    int j=i+2;
    while(a[j]!=NULL){
        j++;
    }
    while(j>=i+2){
        a[j+1]=a[j];
        j--;
    }
    a[i]='3';
    a[i+1]='.';
    a[i+2]='1';
    a[i+3]='4';
    replacePi(a,i+4);}
    else{
        replacePi(a,i+1);
    }
    return;}
   int main(){
    char a[100];
    cin>>a;
    replacePi(a,0);
    cout<<a<<endl;
return 0;}

//placement of tiles
#include<iostream>
#include<cstring>
using namespace std;
int placetiles(int n){
if(n<=3){
    return 1;
}
return placetiles(n-1)+placetiles(n-4);
} int main(){
    int n;
    cin>>n;
    cout<<placetiles(n);
    return 0;}

//no of jumps
#include<iostream>
#include<cstring>
using namespace std;
int jumps(int n,int k){
if(n<0)
    return 0;
if(n==0)
    return 1;
int countt =0;
for(int i=1;i<=k;i++){
    countt=countt+jumps(n-i,k);
}
return countt;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<jumps(n,k);
    return 0;}

//friends
#include<iostream>
using namespace std;
int f(int n){
if(n==1 || n==0)
    return 1;
return f(n-1)+(n-1)*f(n-2);}
int main(){
    int n;
cin>>n;
cout<<f(n);
return 0;}
//count binary when there are no consectuve ones
#include<iostream>
using namespace std;
int binary(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 2;
return binary(n-1)+binary(n-2);}
int main(){
    int n;
cin>>n;
cout<<binary(n);
return 0;}

//permutation
#include<iostream>
    using namespace std;
    void permute(char*in, int i){
    if(in[i]=='\0'){
        cout<<in<<", ";
    return;}
    for(int j=i;in[j]!='\0';j++){
        swap(in[i],in[j]);
        permute(in,i+1);
        swap(in[i],in[j]);}}
    int main(){
        char in[1000];
        cin>>in;
        permute(in,0);
    return 0;}

//string generation acode recursion
#include<iostream>
using namespace std;
void generate(char*in , char*out, int i,int j){
if(in[i]='\0'){
    out[j]='\0';
cout<<out<<endl;
    return;
// recursive cases 1. pick one digit at a time 2. pick two digits at a time
int digit=in[i]-'0';
char ch=digit+'A'-1;
out[j]=ch;
generate(in,out,i+1,j+1);
//recursive case when we accept 2 digits at a time
if(in[i+1]!='\0'){
int secondigit=in[i+1]-'0';
int no=digit*10+secondigit;
if(no<=26){
    ch=no+'A'-1;
    out[j]=ch;
generate(in,out,i+2,j+1);
}}
return;
}
int main(){
    char in[1000];
    cin>>in;
    char out[1000];
generate(in,out,0,0);
return 0;}
//phone no application
//string generation acode recursion
#include<iostream>
using namespace std;
char keypad[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void generatee(char*in , char*out, int i,int j){
if(in[i]='\0'){
    out[j]='\0';
cout<<out<<endl;
    return;}
int digit=in[i]-'0';
if(digit==1 || digit==0){
    generatee(in,out,i+1,j);
}
for(int k=0;k[digit][k]!='\0';k++){
    out[j]=keypad[digit][k];
   generatee(in,out,i+1,j+1);
    }
return;}
int main(){
    char in[1000];
    cin>>in;
    char out[1000];
generatee(in,out,0,0);
return 0;}

//Using vectorizer - error
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2){
int d1=p1.first*p1.first+p1.second*p1.second;
int d2=p2.first*p2.first+p2.second*p2.second;

if(d1==d2){
    return p1.first<p2.first;}
    d1<d2;
}
int main(){
    int n;
    cin>>n;
    vector < pair<int,int> > v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);
    for(auto p:v){
        cout<<"Car "<<p.first<<","<<p.second<<endl;
    }
return 0;}

//Insertion At Head, Middle and Tail
#include<iostream>
using namespace std;
class node{
    public:
int data;
node*next;
node(int d){
data=d;
next=NULL;
}};
void InsertAtHead(node*&head,int d){
if(head==NULL){
    head=new node(d);
    return;
}
node*n=new node(d);
n->next=head;
head=n;
}
void InsertAtTail(node*&head,int data){
if(head==NULL){
    head=new node(data);
    return;
}
node*tail=head;
while(tail->next!=NULL){
    tail=tail->next;
}
tail->next=new node(data);
return;
}
int length(node*head){
    int len=0;
while(head!=NULL){

    head=head->next;
len++;}
return len;}

void InsertAtMiddle(node*&head,int data,int p){

   if(head==0 ||p==0){
    InsertAtHead(head,data);
   }
   else if(p>length(head)){
    InsertAtTail(head,data);}
    else{
      //Insertion in the middle by taking p-1 jumps hueueue
      int jump=1;
      node* temp=head;
      while(jump<=p-1){
        temp=temp->next;
        jump++;
      }
      node*n=new node(data);
      n->next=temp->next;
      temp->next=n;
    }
    }

void DeleteHead(node*&head){
if(head==NULL){
    return;
    }
node*temp=head;
head=head->next;
delete temp;
return;
}
void DeleteTail(node*&head){
if(head==NULL){
    return;
}
node*temp=head;
node*prev=NULL;
while(temp->next!=NULL){
        prev=temp;
    temp=temp->next;
}
delete temp;
prev->next=NULL;
return;
}
void DeleteMiddle(node*&head,int p){
    if(head==NULL || p==0){
        DeleteHead(head);
    }
    if(p>length(head)){
        DeleteTail(head);
    }
    int jump=1;
    node*prev=NULL;
    node*temp=head;
    while(jump<=p-1){
             prev=temp;
        temp=temp->next;

        jump++;
    }

    prev->next=temp->next;
    delete temp;
    return;
    }

    void print(node*head){
while(head!=NULL){
    cout<<head->data<<" -> ";
    head=head->next;
}
cout<<endl;
}
int main(){
node*head=NULL;
InsertAtHead(head,3);
InsertAtHead(head,5);
InsertAtHead(head,3);
InsertAtMiddle(head,9,2);
InsertAtTail(head,11);
InsertAtHead(head,2);
InsertAtTail(head,10);
DeleteHead(head);
DeleteTail(head);
DeleteMiddle(head,2);
print(head);
return 0;}
