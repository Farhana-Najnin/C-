#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls;
    char s;
    int id;
};
int main(){
int n;
cin>>n;
student a[n];
for(int i=0;i<n;i++){

    cin>>a[i].name;
    cin>>a[i].cls>>a[i].s>>a[i].id;
    cin.ignore();

}
int r=n/2;
int j=n-1;
for(int i=0;i<r;i++){


    swap(a[i].id,a[j].id);
    j--;
   // cout<<j<<endl;

}

for(int i=0;i<n;i++){
    cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
}

return 0;
}
