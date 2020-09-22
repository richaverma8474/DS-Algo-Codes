#include<iostream>
 #include<vector>
 #include<algorithm>
 #include<string>
 #include<cmath>
 #include<climits>

 using namespace std;
 int flp(vector<vector<string>>prod,vector<vector<string>>dis)
 {
     string s1,s2;int num,sum=0;int ma=0;int min1=INT_MAX;
    int n=prod.size();int n2=dis.size();
    int n1=prod[0].size();
    for(int i=0;i<n;i++)
    {
       num=stoi(prod[i][0]);
       for(int j=1;j<n1;j++)
       {
           s1=prod[i][j];



            for(int k=0;k<n2;k++)
            {
                if(s1==dis[k][0])
                {
                    if((stoi(dis[k][1]))==0)
                        ma=min(num,stoi(dis[k][2]));
                    else if((stoi(dis[k][1])==1))
                    {
                        float ma1=(float)((stoi(dis[k][2]))/100)*num;
                        float m2=num-ma1;
                        int m3=round(m2);
                        ma=m3;
                    }
                    else
                    {
                        ma=num-stoi(dis[k][2]);
                    }
                }
                if(s1=="EMPTY")
                ma=num;
                if(min1>ma)
                    min1=ma;
            }
            sum=sum+min1;

       }
    }
    return sum;
 }
 int main()
 {
     vector<vector<string>>v{{"10","d0","d1"},{"15","EMPTY","EMPTY"},{"20","d1","EMPTY"}};
     vector<vector<string>>d{{"d0","1","27"},{"d1","2","5"}};
    cout<<flp(v,d);
     return 0;
 }
