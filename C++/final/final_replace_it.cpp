#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
string str;
cin>>str;

string X;
cin>>X;
int s=X.size();
while(str.find(X)!=-1)
{

    str.replace(str.find(X),s,"$");
}
cout<<str<<endl;
    }
return 0;
}
