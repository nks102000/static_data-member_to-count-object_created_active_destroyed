/*WAP to keep a track of number of objects created, number of
objects destroyed and number of active objects in a program.*/
#include<iostream>
#include<string.h>
using namespace std;

class item{
    static int count_created;
    static int count_Destroyed;
    static int count_active;
    public:
        item(){
            count_created++;
            count_active++;
        }       
        void get_active(){
            cout<<count_active<<endl;
        }
        void get_created(){
            cout<<count_created<<endl;
        }
        void get_destroyed(){
            cout<<count_Destroyed<<endl;
        }
        ~item(){
            count_Destroyed++;
            count_active--;
        }
};

int item::count_created;
int item::count_Destroyed;
int item::count_active;

int main(){
    item a,b,c,d,e,f;
    a.get_created();
    b.get_active();
    c.~item();
    d.~item();
    e.get_created();
    f.get_active();
    a.get_destroyed();
}