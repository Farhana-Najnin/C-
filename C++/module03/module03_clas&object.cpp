#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char sec;
    };
int main()
{
    Student s;
    s.roll=29;
    s.cls=9;
    s.sec='a';
    char nm[100]="rahim";
    strcpy(s.name,nm);
    cout<<s.cls<<" "<<s.name<<" " <<s.roll<<" "<<s.sec<<endl;


}
