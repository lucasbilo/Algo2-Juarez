#include <iostream>
using namespace std;

class base
{
    public:
        base()
        {
            cout << "Se construye base" << endl;
        }

        virtual ~base()
        {
            cout << "Se destruye  base" << endl;
        }
};

class base2 : public base
{
    public:
        base2()
        {
            cout << "Se construye base2" << endl;
        }

        ~base2()
        {
            cout << "Se destruye base2" << endl;
        }
};

class derivada : public base2
{
    public:
        derivada()
        {
            cout << "Se construye derivada" << endl;
        }

        ~derivada()
        {
            cout << "Se destruye derivada" << endl;
        }
};

int main()
{

  base *h = new derivada();

  delete h;
  return 0;
}
