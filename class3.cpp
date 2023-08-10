#include <iostream>
using namespace std;
#include <string>
class student
{
    private:
    int roll;
    float cgpa;
    string name;
    void show();
    public:
    void ip(string n, int r, float c)
    {
        roll=r;
        cgpa=c;
        name=n;
        show();

    }

};
void student::show(){
cout<<"The name = "<<name<<endl;
cout<<"Roll No. = "<<roll<<endl;
cout<<"CGPA = "<<cgpa<<endl;

}
int main()
{
    student s,s1;
    s.ip("Tarun",1,9.1f);
    return 0;
}
