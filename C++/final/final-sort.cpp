#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmpTotalNum(student a, student b){
    if(( a.math_marks+a.eng_marks)==(b.math_marks+b.eng_marks)){
        return a.id<b.id;
    }

return a.math_marks+a.eng_marks >b.math_marks+b.eng_marks;
}
int main(){
int n;
cin>>n;
student a[n];
for(int i=0;i<n;i++){

    cin>>a[i].name;
    cin>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    cin.ignore();
}
sort(a,a+n,cmpTotalNum);
for(int i=0;i<n;i++){
      cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
}
return 0;
}
