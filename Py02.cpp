#include <iostream>
#include <fstream>
using namespace std;

class Ropa
{
public:
    Ropa(int =0,double =0);
    virtual void setCantidad(int Ammount)
    {
        Cantidad=Ammount;
    }
    virtual int getCantidad()
    {
        return Cantidad; 
    }
    virtual void setPrecio(double Price)
    {
        Precio=Price;
    }
    virtual double getPrecio()
    {
        return Precio;
    }
    virtual void setKilos(double Weight)
    {
        Kilos=Weight;
    }
    virtual double getKilos()
    {
        return Kilos;
    }
private:
  int Cantidad;
  double Precio,Kilos;
};

Ropa::Ropa(int Ammount,double Price):Cantidad(Ammount),Precio(Price)
{

}

class Jersey:public Ropa
{
public:
    Jersey(int =0,double =0,double =0);
    void setCantidad(int Ammount)
    {
        Cant_Jersey=Ammount;
    }
    int getCantidad()
    {
        return Cant_Jersey;
    }
private:
  int Cant_Jersey;
  double Precio_Jersey,Kilos_Jersey;
};

Jersey::Jersey(int Ammount,double Price,double Weight):Cant_Jersey(Ammount),Precio_Jersey(Price),Kilos_Jersey(Weight)
{

}

class Pique:public Ropa
{
public:
    Pique(int =0,double =0,double =0);
    void setCantidad(int Ammount)
    {
        Cant_Pique=Ammount;
    }
    int getCantidad()
    {
        return Cant_Pique;
    }
    void setPrecio(double Price)
    {
        Precio_Pique=Price;
    }
    double getPrecio()
    {
        return Precio_Pique;
    }
    void setKilos(double Weight)
    {
        Kilos_Pique=Weight;
    }
    double getKilos()
    {
        return Kilos_Pique;
    }
private:
  int Cant_Pique;
  double Precio_Pique,Kilos_Pique;
};

Pique::Pique(int Ammount,double Price,double Weight):Cant_Pique(Ammount),Precio_Pique(Price),Kilos_Pique(Weight)
{

}

class Franela:public Ropa
{
public:
    Franela(int =0,double =0,double =0);
    void setCantidad(int Ammount)
    {
        Cant_Franela=Ammount;
    }
    int getCantidad()
    {
        return Cant_Franela;
    }
    void setPrecio(double Price)
    {
        Precio_Franela=Price;
    }
    double getPrecio()
    {
        return Precio_Franela;
    }
    void setKilos(double Weight)
    {
        Kilos_Franela=Weight;
    }
    double getKilos()
    {
        return Kilos_Franela;
    }
private:
  int Cant_Franela;
  double Precio_Franela,Kilos_Franela;
};

Franela::Franela(int Ammount,double Price,double Weight):Cant_Franela(Ammount),Precio_Franela(Price),Kilos_Franela(Weight)
{

}

void Inicializar()
{
    int Cantidad_1,Cantidad_2,Cantidad_3;
    double Kilos_por_prenda_1,Kilos_por_prenda_2,Kilos_por_prenda_3;

    Jersey *jersey[3];
    Pique *pique[3];
    Franela *franela[3];

    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            cout << "\nJERSEY:" << endl;
        }
        else if(i==1)
        {
            cout << "\nPIQUE:" << endl;
        }
        else if(i==2)
        {
            cout << "\nFRANELA:" << endl;
        }
        cout << "--------------------" << endl;
        cout << "Polos:" << endl;
        cout << "   Cantidad: ";
        cin >> Cantidad_1;
        cout << "Kilos x Prenda: ";
        cin >> Kilos_por_prenda_1;
        cout << "\nCamisas:" << endl;
        cout << "   Cantidad: ";
        cin >> Cantidad_2;
        cout << "   Kilos x Prenda: ";
        cin >> Kilos_por_prenda_2;
        cout << "\nCuellos:" << endl;
        cout << "   Cantidad: ";
        cin >> Cantidad_3;
        cout << "Kilos x Prenda: ";
        cin >> Kilos_por_prenda_3;
        cout << "--------------------" << endl;

        jersey[i]=new Jersey;
        pique[i]=new Pique;
        franela[i]=new Franela;
    }
}

/*
double Calculo_Tiempos() //[Friend "UNDEFINED"]
{

}

double Calculo_Materia_Prima() //[Friend "UNDEFINED"]
{

}

double Calculo_Costos() //[Friend "UNDEFINED"]
{

}

void Salida() //[Friend "UNDEFINED"]
{
    fstream data("Data.txt",ios::out);
}
*/
int main()
{
    cout << "\n<---------------------------------------------->" << endl;
    cout << "| PROGRAMACIÓN ORIENTADA A OBJETOS UTEC 2018-2 |" << endl;
    cout << "<---------------------------------------------->" << endl;
    cout << "| Integrantes del grupo:                       |" << endl;
    cout << "|    -Nander Melendez.                         |" << endl;
    cout << "|    -Alberto Eufracio.                        |" << endl;
    cout << "|    -Yanpierrs Figueroa.                      |" << endl;
    cout << "<---------------------------------------------->" << endl;
    cout << endl << endl;
    cout << "*************************************************" << endl;
    cout << "*Textilería                                     *" << endl;
    cout << "*        ~¡LOS HACKERS DE LIMA LIMÓN!~®         *" << endl;
    cout << "*-----------------------------------------------*" << endl;
    cout << "*Fabricadores número 1 de tus prendas preferidas*" << endl;
    cout << "*************************************************" << endl;

    Inicializar();
}
