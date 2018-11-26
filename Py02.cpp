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
    virtual int getCantidad1()
    {
        return Cantidad; 
    }
    virtual int getCantidad2()
    {
        return Cantidad; 
    }
    virtual int getCantidad3()
    {
        return Cantidad; 
    }
    virtual void setPrecio(double Price)
    {
        Precio=Price;
    }
    virtual double getPrecio1()
    {
        return Precio;
    }
    virtual double getPrecio2()
    {
        return Precio;
    }
    virtual double getPrecio3()
    {
        return Precio;
    }
    virtual void setKilos(double Weight)
    {
        Kilos=Weight;
    }
    virtual double getKilos1()
    {
        return Kilos;
    }
    virtual double getKilos2()
    {
        return Kilos;
    }
    virtual double getKilos3()
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
    void setPrecio(double Price)
    {
        Precio_Jersey=Price;
    }
    double getPrecio1()
    {
        return Precio_Jersey;
    }
    void setKilos(double Weight)
    {
        Kilos_Jersey=Weight;
    }
    double getKilos()
    {
        return Kilos_Jersey;
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
    double getPrecio1()
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
    double Kilos_por_prenda_1,Kilos_por_prenda_2,Kilos_por_prenda_3,Precio_1,Precio_2,Precio_3;

    Jersey *jersey[3];
    Pique *pique[3];
    Franela *franela[3];

    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            cout << "\nJERSEY:" << endl;
            Precio_1=30;
            Precio_2=50;
            Precio_3=5;
        }
        else if(i==1)
        {
            cout << "\nPIQUE:" << endl;
            Precio_1=60;
            Precio_2=75;
            Precio_3=10;
        }
        else if(i==2)
        {
            cout << "\nFRANELA:" << endl;
            Precio_1=60;
            Precio_2=80;
            Precio_3=15;
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

        jersey[i]=new Jersey(Cantidad_1,Kilos_por_prenda_1,Precio_1);
        pique[i]=new Pique(Cantidad_2,Kilos_por_prenda_2,Precio_2);
        franela[i]=new Franela(Cantidad_3,Kilos_por_prenda_3,Precio_3);
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
