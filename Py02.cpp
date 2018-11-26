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
    Jersey(int =0,int =0,int =0,double =0,double =0,double =0,double =0,double =0,double =0);
    void setCantidad(int Ammount1,int Ammount2,int Ammount3)
    {
        Cant_Jersey1=Ammount1;
        Cant_Jersey2=Ammount2;
        Cant_Jersey3=Ammount3;
    }
    int getCantidad1()
    {
        return Cant_Jersey1;
    }
    int getCantidad2()
    {
        return Cant_Jersey2;
    }
    void setPrecio(double Price1,double Price2,double Price3)
    {
        Precio_Jersey1=Price1;
        Precio_Jersey2=Price2;
        Precio_Jersey3=Price3;
    }
    double getPrecio1()
    {
        return Precio_Jersey1;
    }
    double getPrecio2()
    {
        return Precio_Jersey2;
    }
    double getPrecio3()
    {
        return Precio_Jersey3;
    }
    void setKilos(double Weight1,double Weight2,double Weight3)
    {
        Kilos_Jersey1=Weight1;
        Kilos_Jersey2=Weight2;
        Kilos_Jersey3=Weight3;
    }
    double getKilos1()
    {
        return Kilos_Jersey1;
    }
    double getKilos2()
    {
        return Kilos_Jersey2;
    }
    double getKilos3()
    {
        return Kilos_Jersey3;
    }
private:
  int Cant_Jersey1,Cant_Jersey2,Cant_Jersey3;
  double Precio_Jersey1,Precio_Jersey2,Precio_Jersey3,Kilos_Jersey1,Kilos_Jersey2,Kilos_Jersey3;
};

Jersey::Jersey(int Ammount1,int Ammount2,int Ammount3,double Price1,double Price2,double Price3,double Weight1,double Weight2,double Weight3):Cant_Jersey1(Ammount1),Cant_Jersey2(Ammount2),Cant_Jersey3(Ammount3),Precio_Jersey1(Price1),Precio_Jersey2(Price2),Precio_Jersey3(Price3),Kilos_Jersey3(Weight3)
{

}

class Pique:public Ropa
{
public:
    Pique(int =0,int =0,int =0,double =0,double =0,double =0,double =0,double =0,double =0);
    void setCantidad(int Ammount1,int Ammount2,int Ammount3)
    {
        Cant_Pique1=Ammount1;
        Cant_Pique2=Ammount2;
        Cant_Pique3=Ammount3;
    }
    int getCantidad1()
    {
        return Cant_Pique1;
    }
    int getCantidad2()
    {
        return Cant_Pique2;
    }
    int getCantidad3()
    {
        return Cant_Pique3;
    }
    void setPrecio(double Price1,double Price2,double Price3)
    {
        Precio_Pique1=Price1;
        Precio_Pique2=Price2;
        Precio_Pique3=Price3;
    }
    double getPrecio1()
    {
        return Precio_Pique1;
    }
    double getPrecio2()
    {
        return Precio_Pique2;
    }
    double getPrecio3()
    {
        return Precio_Pique3;
    }
    void setKilos(double Weight1,double Weight2,double Weight3)
    {
        Kilos_Pique1=Weight1;
        Kilos_Pique2=Weight2;
        Kilos_Pique3=Weight3;
    }
    double getKilos1()
    {
        return Kilos_Pique1;
    }
    double getKilos2()
    {
        return Kilos_Pique2;
    }
    double getKilos3()
    {
        return Kilos_Pique3;
    }
private:
  int Cant_Pique1,Cant_Pique2,Cant_Pique3;
  double Precio_Pique1,Precio_Pique2,Precio_Pique3,Kilos_Pique1,Kilos_Pique2,Kilos_Pique3;
};

Pique::Pique(int Ammount1,int Ammount2,int Ammount3,double Price1,double Price2,double Price3,double Weight1,double Weight2,double Weight3):Cant_Pique1(Ammount1),Cant_Pique2(Ammount2),Cant_Pique3(Ammount3),Precio_Pique1(Price1),Precio_Pique2(Price2),Precio_Pique3(Price3),Kilos_Pique1(Weight1),Kilos_Pique2(Weight2),Kilos_Pique3(Weight3)
{

}

class Franela:public Ropa
{
public:
    Franela(int =0,int =0,int =0,double =0,double =0,double =0,double =0,double =0,double =0);
    void setCantidad(int Ammount1,int Ammount2,int Ammount3)
    {
        Cant_Franela1=Ammount1;
        Cant_Franela2=Ammount2;
        Cant_Franela3=Ammount3;
    }
    int getCantidad1()
    {
        return Cant_Franela1;
    }
    int getCantidad2()
    {
        return Cant_Franela2;
    }
    int getCantidad3()
    {
        return Cant_Franela3;
    }
    void setPrecio(double Price1,double Price2,double Price3)
    {
        Precio_Franela1=Price1;
        Precio_Franela2=Price2;
        Precio_Franela3=Price3;
    }
    double getPrecio1()
    {
        return Precio_Franela1;
    }
    double getPrecio2()
    {
        return Precio_Franela2;
    }
    double getPrecio3()
    {
        return Precio_Franela3;
    }
    void setKilos(double Weight1,double Weight2,double Weight3)
    {
        Kilos_Franela1=Weight1;
        Kilos_Franela2=Weight2;
        Kilos_Franela3=Weight3;
    }
    double getKilos1()
    {
        return Kilos_Franela1;
    }
    double getKilos2()
    {
        return Kilos_Franela2;
    }
    double getKilos3()
    {
        return Kilos_Franela3;
    }
private:
  int Cant_Franela1,Cant_Franela2,Cant_Franela3;
  double Precio_Franela1,Precio_Franela2,Precio_Franela3,Kilos_Franela1,Kilos_Franela2,Kilos_Franela3;
};

Franela::Franela(int Ammount1,int Ammount2,int Ammount3,double Price1,double Price2,double Price3,double Weight1,double Weight2,double Weight3):Cant_Franela1(Ammount1),Cant_Franela2(Ammount2),Cant_Franela3(Ammount3),Precio_Franela1(Price1),Precio_Franela2(Price2),Precio_Franela3(Price3),Kilos_Franela1(Weight1),Kilos_Franela2(Weight2),Kilos_Franela3(Weight3)
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

        if(i==0)
        {

        }
        else if(i==1)
        {

        }
        else if(i==2)
        {
            
        }
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
