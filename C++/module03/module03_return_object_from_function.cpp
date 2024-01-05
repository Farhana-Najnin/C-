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

        Student fun()
    {

        char name[100]="rahim";
        Student rahim(29,'c',7, name);
        return rahim;
    }
int main()
{
    Student s=fun();
    cout<<s.cls<<" "<<s.name<<" " <<s.roll<<" "<<s.sec<<endl;

}
