#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char sec;
    Student(int r,int s, int c, char* n){
    roll=r;
    sec=s;
    cls=c;
    strcpy(name,n);
    }
    };
int main(){
char name[100]="rahim";
Student *rahim=new Student(5,'a',11,name);//heap memory te jasse//dynamic object
cout<<(*rahim).name<<endl;
(*rahim).roll=55;
cout<<rahim->roll<<endl;
}
