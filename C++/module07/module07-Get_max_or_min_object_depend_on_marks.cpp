#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;

};
int main(){

student a[3];
for(int i=0;i<3;i++){

    getline(cin,a[i].name);
    cin>>a[i].roll>>a[i].marks;
    cin.ignore();

}
//max marks object
student mx;//mx object create
mx.marks=INT_MIN;//boro caile soto value rakhte hobe
for(int i=0;i<3;i++){
    if(a[i].marks>mx.marks)
    {
        mx=a[i];//mx e copy
    }

}

cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;

//min marks object
student min;//min object create
min.marks=INT_MAX;//soto caile boro value
for(int i=0;i<3;i++){
    if(a[i].marks<min.marks)
    {
        min=a[i];//mx e copy
    }

}

cout<<min.name<<" "<<min.roll<<" "<<min.marks<<endl;
return 0;
}

