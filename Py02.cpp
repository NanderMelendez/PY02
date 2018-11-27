#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class Ropa
{
public:
    Ropa(int =0,double =0,double =0);
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

Ropa::Ropa(int Ammount,double Price,double Weight):Cantidad(Ammount),Precio(Price),Kilos(Weight)
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
    double getPrecio()
    {
        return Precio_Jersey;
    }
    void setKilos(double Weight)
    {
        Kilos_Jersey=Weight*0.7; //Cada kilo de hilo de Pique produce 0.7 kilos de tela de Pique
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
        Kilos_Pique=Weight*0.5; //Cada kilo de hilo de Pique produce 0.5 kilos de tela de Pique
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
        Kilos_Franela=Weight*0.3; //Cada kilo de hilo de Pique produce 0.3 kilos de tela de Pique
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

//--------- CÁLCULO TIEMPOS ------------------

void Calculo_TiemposJ(Jersey &j,int i)
{
    const double totalJersey=j.getCantidad()*j.getKilos();

    if(i==0)
    {
        cout << "   Polos: " << setprecision(4) << (24.6*totalJersey)/4<< " horas." << endl;
    }
    else if(i==1)
    {
        cout << "   Camisas: " << setprecision(4) << (31.5*totalJersey)/10 << " horas." << endl;
    }
    else
    {
        cout << "   Cuellos: " << setprecision(4) << (21.15*totalJersey)/1 << " horas." << endl;
    }
}
void Calculo_TiemposP(Pique &p,int i)
{
    const double totalPique=p.getCantidad()*p.getKilos();

    if(i==0)
    {
        cout << "   Polos: " << setprecision(4) << (25.06*totalPique)/4.4 << " horas." << endl;
    }
    else if(i==1)
    {
        cout << "   Camisas: " << setprecision(4) << (27.59*totalPique)/6.6 << " horas." << endl;
    }
    else
    {
        cout << "   Cuellos: " << setprecision(4) << (20.92*totalPique)/0.8 << " horas." << endl;
    }
}
void Calculo_TiemposF(Franela &f,int i)
{
    const double totalFranela=f.getCantidad()*f.getKilos();

    if(i==0)
    {
        cout << "   Polos: " << setprecision(4) << (25.75*totalFranela)/5 << " horas." << endl;
    }
    else if(i==1)
    {
        cout << "   Camisas: " << setprecision(4) << (31.5*totalFranela)/10 << " horas." << endl;
    }
    else
    {
        cout << "   Cuellos: " << setprecision(4) << (21.15*totalFranela)/1 << " horas." << endl;
    }
}

//--------- INICIALIZAR ------------------

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
        else
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
        cout << "   Kilos x Prenda: ";
        cin >> Kilos_por_prenda_1;
        cout << "\nCamisas:" << endl;
        cout << "   Cantidad: ";
        cin >> Cantidad_2;
        cout << "   Kilos x Prenda: ";
        cin >> Kilos_por_prenda_2;
        cout << "\nCuellos:" << endl;
        cout << "   Cantidad: ";
        cin >> Cantidad_3;
        cout << "   Kilos x Prenda: ";
        cin >> Kilos_por_prenda_3;
        cout << "--------------------" << endl;

        jersey[i]=new Jersey(Cantidad_1,Kilos_por_prenda_1,Precio_1);
        pique[i]=new Pique(Cantidad_2,Kilos_por_prenda_2,Precio_2);
        franela[i]=new Franela(Cantidad_3,Kilos_por_prenda_3,Precio_3);

        jersey[i]->setCantidad(Cantidad_1);
        jersey[i]->setKilos(Kilos_por_prenda_1);
        jersey[i]->setPrecio(Precio_1);

        pique[i]->setCantidad(Cantidad_2);
        pique[i]->setKilos(Kilos_por_prenda_2);
        pique[i]->setPrecio(Precio_2);

        franela[i]->setCantidad(Cantidad_3);
        franela[i]->setKilos(Kilos_por_prenda_3);
        franela[i]->setPrecio(Precio_3);
    }
    cout << "\nJERSEY:" << endl;
    for(int i=0;i<3;i++)
    {
        Calculo_TiemposJ(*jersey[i],i);
    }
    cout << "PIQUE:" << endl;
    for(int i=0;i<3;i++)
    {
        Calculo_TiemposP(*pique[i],i);
    }
    cout << "FRANELA:" << endl;
    for(int i=0;i<3;i++)
    {
        Calculo_TiemposF(*franela[i],i);
    }

}

/*
double Calculo_Materia_Prima() //[Friend "UNDEFINED"]
{

}

double Calculo_Costos() //[Friend "UNDEFINED"]
{

}

void Salida() //[Friend "UNDEFINED"]
{
    fstream pedido("Pedido.txt",ios::out);
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
