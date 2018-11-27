#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class Ropa
{
public:
    explicit Ropa(int =0,double =0,double =0);
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
    explicit Jersey(int =0,double =0,double =0);
    void setCantidad(int Ammount) override
    {
        Cant_Jersey=Ammount;
    }
    int getCantidad() override
    {
        return Cant_Jersey;
    }
    void setPrecio(double Price) override
    {
        Precio_Jersey=Price;
    }
    double getPrecio() override
    {
        return Precio_Jersey;
    }
    void setKilos(double Weight) override
    {
        Kilos_Jersey=Weight*0.7; //Cada kilo de hilo de Pique produce 0.7 kilos de tela de Pique
    }
    double getKilos() override
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
    explicit Pique(int =0,double =0,double =0);
    void setCantidad(int Ammount) override
    {
        Cant_Pique=Ammount;
    }
    int getCantidad() override
    {
        return Cant_Pique;
    }
    void setPrecio(double Price) override
    {
        Precio_Pique=Price;
    }
    double getPrecio() override
    {
        return Precio_Pique;
    }
    void setKilos(double Weight) override
    {
        Kilos_Pique=Weight*0.5; //Cada kilo de hilo de Pique produce 0.5 kilos de tela de Pique
    }
    double getKilos() override
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
    explicit Franela(int =0,double =0,double =0);
    void setCantidad(int Ammount) override
    {
        Cant_Franela=Ammount;
    }
    int getCantidad() override
    {
        return Cant_Franela;
    }
    void setPrecio(double Price) override
    {
        Precio_Franela=Price;
    }
    double getPrecio() override
    {
        return Precio_Franela;
    }
    void setKilos(double Weight) override
    {
        Kilos_Franela=Weight*0.3; //Cada kilo de hilo de Pique produce 0.3 kilos de tela de Pique
    }
    double getKilos() override
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

void Calculo_Tiempos(Ropa &r,int i,double velocidad)
{
    double total=r.getCantidad()*r.getKilos(); //Total Masa
    double TTAtimes=(1/total)+(10/total)+(20/total); //Obviar proceso (velocidad1/totalMasa)+(velocidad2/totalMasa)+(velocidad3/totalMasa); TTA=Tejido,Teñido,Acabado

    if(i==0)
    {
        cout << "   Polos: ";
    }
    else if(i==1)
    {
        cout << "   Camisas: ";
    }
    else
    {
        cout << "   Cuellos: ";
    }
    cout << setprecision(3) << TTAtimes+(velocidad/total) << " horas." << endl;
}

//--------- CÁLCULO MATERIA PRIMA ------------------

void Calculo_Materia_Prima(Ropa &r,int i)
{
    if(i==0)
    {
        cout << "   Polos: ";
    }
    else if(i==1)
    {
        cout << "   Camisas: ";
    }
    else
    {
        cout << "   Cuellos: ";
    }
    cout << setprecision(3) << r.getCantidad()*r.getKilos() << " Kg." << endl;
}

//--------- CÁLCULO COSTOS ------------------

void Calculo_Costos(Ropa &r,int i)
{
    if(i==0)
    {
        cout << "   Polos: S/.";
    }
    else if(i==1)
    {
        cout << "   Camisas: S/.";
    }
    else
    {
        cout << "   Cuellos: S/.";
    }
    cout << setprecision(3) << r.getCantidad()*r.getPrecio() << endl;
}

//--------- INICIALIZAR ------------------

void Inicializar()
{
    int Cantidad;
    double Kilos_por_prenda,Precio,velocidad;

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
        else
        {
            cout << "\nFRANELA:" << endl;
        }
        cout << "--------------------" << endl;
        cout << "Polos:" << endl;
        cout << "   Cantidad: ";
        cin >> Cantidad;
        cout << "   Kilos x Prenda: ";
        cin >> Kilos_por_prenda;
        if(i==0)
        {
            Precio=30;
            jersey[0]=new Jersey(Cantidad,Kilos_por_prenda,Precio);

            jersey[0]->setCantidad(Cantidad);
            jersey[0]->setKilos(Kilos_por_prenda);
            jersey[0]->setPrecio(Precio);
        }
        else if(i==1)
        {
            Precio=60;
            pique[0]=new Pique(Cantidad,Kilos_por_prenda,Precio);

            pique[0]->setCantidad(Cantidad);
            pique[0]->setKilos(Kilos_por_prenda);
            pique[0]->setPrecio(Precio);
        }
        else
        {
            Precio=60;
            franela[0]=new Franela(Cantidad,Kilos_por_prenda,Precio);

            franela[0]->setCantidad(Cantidad);
            franela[0]->setKilos(Kilos_por_prenda);
            franela[0]->setPrecio(Precio);
        }

        cout << "\nCamisas:" << endl;
        cout << "   Cantidad: ";
        cin >> Cantidad;
        cout << "   Kilos x Prenda: ";
        cin >> Kilos_por_prenda;
        if(i==0)
        {
            Precio=50;
            jersey[1]=new Jersey(Cantidad,Kilos_por_prenda,Precio);

            jersey[1]->setCantidad(Cantidad);
            jersey[1]->setKilos(Kilos_por_prenda);
            jersey[1]->setPrecio(Precio);
        }
        else if(i==1)
        {
            Precio=75;
            pique[1]=new Pique(Cantidad,Kilos_por_prenda,Precio);

            pique[1]->setCantidad(Cantidad);
            pique[1]->setKilos(Kilos_por_prenda);
            pique[1]->setPrecio(Precio);
        }
        else
        {
            Precio=80;
            franela[1]=new Franela(Cantidad,Kilos_por_prenda,Precio);

            franela[1]->setCantidad(Cantidad);
            franela[1]->setKilos(Kilos_por_prenda);
            franela[1]->setPrecio(Precio);
        }

        cout << "\nCuellos:" << endl;
        cout << "   Cantidad: ";
        cin >> Cantidad;
        cout << "   Kilos x Prenda: ";
        cin >> Kilos_por_prenda;
        if(i==0)
        {
            Precio=5;
            jersey[2]=new Jersey(Cantidad,Kilos_por_prenda,Precio);

            jersey[2]->setCantidad(Cantidad);
            jersey[2]->setKilos(Kilos_por_prenda);
            jersey[2]->setPrecio(Precio);
        }
        else if(i==1)
        {
            Precio=10;
            pique[2]=new Pique(Cantidad,Kilos_por_prenda,Precio);

            pique[2]->setCantidad(Cantidad);
            pique[2]->setKilos(Kilos_por_prenda);
            pique[2]->setPrecio(Precio);
        }
        else
        {
            Precio=15;
            franela[2]=new Franela(Cantidad,Kilos_por_prenda,Precio);

            franela[2]->setCantidad(Cantidad);
            franela[2]->setKilos(Kilos_por_prenda);
            franela[2]->setPrecio(Precio);
        }
        cout << "--------------------" << endl;
    }
    cout << "\n Tiempos para completar el pedido." << endl;
    cout << "--------------------------------- " << endl;

    cout << "JERSEY:" << endl;
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            velocidad=0.20;
        }
        else if(i==1)
        {
            velocidad=0.50;
        }
        else
        {
            velocidad=0.05;
        }
        Calculo_Tiempos(*jersey[i],i,velocidad);
    }
    cout << "PIQUE:" << endl;
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            velocidad=0.22;
        }
        else if(i==1)
        {
            velocidad=0.33;
        }
        else
        {
            velocidad=0.04;
        }
        Calculo_Tiempos(*pique[i],i,velocidad);
    }
    cout << "FRANELA:" << endl;
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            velocidad=0.25;
        }
        else if(i==1)
        {
            velocidad=0.50;
        }
        else
        {
            velocidad=0.05;
        }
        Calculo_Tiempos(*franela[i],i,velocidad);
    }

    cout << "\n Materia prima requerida." << endl;
    cout << "--------------------------" << endl;
    cout << "JERSEY:" << endl;
    for(int i=0;i<3;i++)
    {
        Calculo_Materia_Prima(*jersey[i],i);
    }
    cout << "PIQUE:" << endl;
    for(int i=0;i<3;i++)
    {
        Calculo_Materia_Prima(*pique[i],i);
    }
    cout << "FRANELA:" << endl;
    for(int i=0;i<3;i++)
    {
        Calculo_Materia_Prima(*franela[i],i);
    }

    cout << "\n Costos. " << endl;
    cout << "---------" << endl;
    cout << "JERSEY:" << endl;
    for(int i=0;i<3;i++)
    {
        Calculo_Costos(*jersey[i],i);
    }
    cout << "PIQUE:" << endl;
    for(int i=0;i<3;i++)
    {
        Calculo_Costos(*pique[i],i);
    }
    cout << "FRANELA:" << endl;
    for(int i=0;i<3;i++)
    {
        Calculo_Costos(*franela[i],i);
    }
}

/*
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
