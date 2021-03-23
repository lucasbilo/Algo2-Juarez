#include <iostream>
using namespace std;

class base
{
    protected:
        int i;

    public:
        base(int x)
        {
            i = x;
            cout << "Construyendo clase base\n";
        }
        ~base()
        {
            cout << "Destruyendo clase base\n";
        }
};

class derivada : public base
{
    private:
        int j;

    public:
  // derivada usa x, y es pasado en conjunto a base
        derivada(int x, int y) : base(y)
        {
            j = x;
            cout << "Construyendo clase derivada\n";
        }

        ~derivada()
        {
            cout << "Destruyendo clase derivada\n";
        }
        void mostrar()
        {
            cout << i << " " << j << "\n";
        }
};

int main()
{
  derivada obj(3, 4);

  obj.mostrar();   // muestra 4  3

  return 0;
}
