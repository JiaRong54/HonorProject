#include "user.h"

user::user()
{

    f_name ="null";
    l_name ="null";
    age = 0;
    weight = 0;
    height_f = 0;
    height_inch = 0;
}

void user:: setname(string f, string l)
{
    f_name = f;
    l_name = l;
}
void user:: setage(int num)
{
    age = num;
}
void user:: setheight(int f,int inch)
{
    height_f = f;
    height_inch = inch;
}
void user:: setweight(double num)
{
    weight = num;
}

string user:: getf_name(){
    return f_name;
}
string user:: getl_name(){
    return l_name;
}

int user:: getAge(){
   return age;
}
int user:: getheight_f(){
    return height_f;
}
int user:: getheight_inch(){
    return height_inch;
}
double user::getweight(){
    return weight;
}
