#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int cnt=0;
getline(cin,s);
bool inside_word=false;
for(char c:s){
    if(isalpha(c))//if((c>='a'&& c<=z)||(c>='A' && c<='z'))
        {
        if(inside_word==false) cnt++;
        inside_word=true;

    }
    else{
        inside_word=false;
    }
}
cout<<cnt<<endl;
return 0;
}
