// Include guard
#ifndef COW_H
#define COW_H
#include <string>
using namespace std;

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(string name_i, int age_i, cow_purpose purpose_i);
    string get_name() const;
    int get_age() const;
    cow_purpose get_purpose() const;
    void set_age(int new_age);
private:
    string name;
    int age;
    cow_purpose purpose;
};

#endif // COW_H