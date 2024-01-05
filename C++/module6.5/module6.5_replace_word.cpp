#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
//string X;
//cin>>X;
//int s=X.size();
while(str.find("EGYPT")!=-1)
{

    str.replace(str.find("EGYPT"),5,"$");
}
cout<<str<<endl;
return 0;
}
