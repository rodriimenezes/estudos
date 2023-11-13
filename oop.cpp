#include <iostream>

using namespace std;

class AbstractEmployee{
    virtual void askForPromotion() = 0;
};

class Employee:AbstractEmployee {
    private:
        int Age;
        string Name;
        string Company;
        
    public:
        void setAge(int age){
            Age = age;
        }
        int getAge(){
            return Age;
        }
        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }
        
        Employee(string name, string company, int age){
            Age = age;
            Name = name;
            Company = company;
        }
        void askForPromotion(){
            if(Age > 30)
                cout<<Name<<" got promoted!"<<endl;
        
            else
                cout<<Name<<", sorry, no promotion for you."<<endl;
        }
};

int main(){
    Employee employee1 = Employee("Saldina", "Youtube", 25);
    Employee employee2 = Employee("John","Amazon",35);
    
    employee1.askForPromotion();
    employee2.askForPromotion();
}
