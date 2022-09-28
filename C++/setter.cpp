#include<iostream>
#include<string>
using namespace std;
class Employee
{
    public:
    int id;
    string name;
    int salary;
    string Company_name;
    void setid(int i)
    {
        id =i;
    }
    void setname(string n)
    {
        name=n;
    }
    void setsalary(int s)
    {
        salary =s;
    }
    void setCompany_name(string c)
    {
        Company_name=c;
    }
    int getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
    int getsalary()
    {
        return salary;
    }
    string getCompany_name()
    {
        return Company_name;
    }
    Employee(int i,string n , int s, string c)
    {
        id=i;
        name=n;
        salary=s;
        Company_name=c;
    }
    ~Employee()
    {

    }

};
int main ()
{
    Employee e1(11,"noob",50000,"Amazon");
    e1.setid(10);
    e1.setname("Ayush");
    e1.setCompany_name("Google");
    e1.setsalary(10000);
    cout<<e1.getid();

}