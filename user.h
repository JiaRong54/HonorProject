#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class user
{
private:
    string l_name,f_name;
    int age,height_f,height_inch;
    double weight;

public:
    user();
    string getl_name();
    string getf_name();
    int getAge();
    int getheight_f();
    int getheight_inch();
    double getweight();
    void setname(string,string);
    void setheight(int,int);
    void setage(int);
    void setweight(double);
};

#endif // USER_H
