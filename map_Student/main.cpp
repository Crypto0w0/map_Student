#include <iostream>
#include <map>
using namespace std;

class Student{
    string name;
public:
    Student(){
        name = "";
    }
    Student(string n){
        name = n;
    }
    string GetName() const{
        return name;
    }
    friend ostream& operator<<(ostream& o, const Student& s){
        o << s.GetName() << endl;
        return o;
    }
};

int main(){
    map<Student, int> m;
    map<Student, int>::iterator i;
    Student s1("Григорий");
    Student s2("Константин");
    Student s3("Евгений");
    Student s4("Виктор");
    Student s5("Иван");
    m[s1] = 10;
    m[s2] = 10;
    m[s3] = 10;
    m[s4] = 10;
    m[s5] = 10;
    for(i = m.begin(); i != m.end(); i++){
        cout << (*i).first << " " << (*i).second << endl;
    }
}
