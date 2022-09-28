#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    int n=12;
    int x=10;
    string s;
    void new1()
    {
        cout<<s<<endl <<n <<x;
    }
};
int main()
{
    Student s1;
    s1.n=5;
    cin>>s1.s;
    //s1.s="ayush giri";
    s1.new1();
}