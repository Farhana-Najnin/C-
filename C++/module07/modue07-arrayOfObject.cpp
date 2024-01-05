#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;
   /* student(string name, int roll, int marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }//constructor use kora jabe na*/
};
int main(){

student a[3];
for(int i=0;i<3;i++){
    //direct input nea jabena
    //space neoar jnno name e
    getline(cin,a[i].name);
    cin>>a[i].roll>>a[i].marks;
    cin.ignore();//ata na nile porer input nite jhamela hobe

}
for(int i=0;i<3;i++){
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
}
return 0;
}
