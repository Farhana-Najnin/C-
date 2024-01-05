#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);

    stringstream ss(str);
    string word;

    int count = 0;
    //string s1;
    //cin>>s1;
//word.compare(s1);
    while(ss>>word){
        if(word=="Ratul"){
            cout<<"yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;



    return 0;
}
