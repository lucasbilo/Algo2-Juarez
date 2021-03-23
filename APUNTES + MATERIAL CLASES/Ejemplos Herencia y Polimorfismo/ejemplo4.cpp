#include <iostream>
using namespace std;

class base
{
    public:
        void quien()
        {
            cout << "soy base" << endl;
        }
};

class primera_d : public base
{
    public:
        void quien() // redefine quien()  relativa a primera_d
        {
            cout << "soy primera derivada" << endl;
        }
};

class segunda_d : public base
{
    public:
        void quien()  // redefinir quien relativa a segunda_d
        {
            cout << "soy segunda derivada" << endl;
        }


};

int main()
{
    base obj_base;
    base *p;

    primera_d obj_primera;
    segunda_d obj_segundo;

    p = &obj_base;
    p->quien();    // acceder a quien() en base

    p = &obj_primera;
    p->quien();   // acceder a quien() en primera_d

    p = &obj_segundo;
    p->quien();   // acceder a quien() en segunda_d

    return 0;
}
