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
int main()
{
    Student s(29,'c',7,"rahim");
    cout<<s.cls<<" "<<s.name<<" " <<s.roll<<" "<<s.sec<<endl;

}
