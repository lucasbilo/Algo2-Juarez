#include <iostream>
using namespace std;

class base
{
    public:
        base()
        {
            cout << "Construyendo clase base\n";
        }
        ~base()
        {
            cout << "Destruyendo clase base\n";
        }
};

class derivada : public base {
    public:
        derivada()
        {
            cout << "Construyendo clase derivada\n";
        }
        ~derivada()
        {
            cout << "Destruyendo clase derivada\n";
        }
};

int main()
{
    derivada obj;   // no hacer nada mas que construir y destruir obj

    return 0;
}
