

#include <iostream>
using namespace std;


int CalculateCharges(int carro, double hora);

int main()
{
    int x, z, b;
    double y, a, d;
    cout << "ingrese datos primer carro: " << endl;
    cin >> x >> y;
    cout << "ingrese datos segundo carro: " << endl;
    cin >> z >> a;
    cout << "ingrese datos tercer carro: " << endl;
    cin >> b >> d;

    cout << "Carro\t" << "Hora\t" << "Cargos\n";
    CalculateCharges( x, y);
    CalculateCharges(z , a);
    CalculateCharges(b, d);
    return 0;

}


int CalculateCharges(int carro, double hora) {
    double p=20;
    if (hora <= 3) {
        p = 20;
    }
    if (hora > 3) {
        for (int i = hora - 2.5; i < 6; i++) {
            p = p + 5;
        }
    }
    if (hora > 9 && hora < 25) {
        p = 50;
    }
    cout << carro<<"\t" << hora << "\t" << p << endl;
    return p;
}