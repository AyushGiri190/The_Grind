#include<iostream>

using namespace std;
class emp
{
    public:
    int id;
    static int  y;

};
int emp::y=10;
int main()
{
    cout<<emp::y;
    
    

}
