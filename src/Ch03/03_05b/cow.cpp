#include "cow.h"
using namespace std;

cow::cow(string name_i, int age_i, cow_purpose purpose_i){
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
string cow::get_name() const{
    return name;
}
int cow::get_age() const{
    return age;
}
cow_purpose cow::get_purpose() const{
    return purpose;
}
void cow::set_age(int new_age){
    age = new_age;
}
