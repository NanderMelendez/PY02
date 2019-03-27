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

Ropa::Ropa(int Ammount,double Weight,double Price):Cantidad(Ammount),Kilos(Weight),Precio(Price)
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
        Kilos_Jersey=Weight*0.7*100/90; //Cada kilo de hilo de Pique produce 0.7 kilos de tela de Pique || Rendimiento 90%, entonces 0.7*(90%)^-1 para hallar la cantidad original de kilos de tela
    }
    double getKilos() override
    {
        return Kilos_Jersey;
    }
private:
    int Cant_Jersey;
    double Precio_Jersey,Kilos_Jersey;
};

Jersey::Jersey(int Ammount,double Weight,double Price):Cant_Jersey(Ammount),Kilos_Jersey(Weight),Precio_Jersey(Price)
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
        Kilos_Pique=Weight*0.5*100/90; //Cada kilo de hilo de Pique produce 0.5 kilos de tela de Pique || Rendimiento 90%, entonces 0.5*(90%)^-1 para hallar la cantidad original de kilos de tela
    }
    double getKilos() override
    {
        return Kilos_Pique;
    }
private:
    int Cant_Pique;
    double Precio_Pique,Kilos_Pique;
};

Pique::Pique(int Ammount,double Weight,double Price):Cant_Pique(Ammount),Kilos_Pique(Weight),Precio_Pique(Price)
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
        Kilos_Franela=Weight*0.3*100/90; //Cada kilo de hilo de Pique produce 0.3 kilos de tela de Pique || Rendimiento 90%, entonces 0.3*(90%)^-1 para hallar la cantidad original de kilos de tela
    }
    double getKilos() override
    {
        return Kilos_Franela;
    }
private:
    int Cant_Franela;
    double Precio_Franela,Kilos_Franela;
};

Franela::Franela(int Ammount,double Weight,double Price):Cant_Franela(Ammount),Kilos_Franela(Weight),Precio_Franela(Price)
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
    cout << setprecision(10) << r.getCantidad()*r.getPrecio() << endl;
}

//--------- SALIDA ------------------

void Salida(Ropa &j1,Ropa &j2,Ropa &j3,Ropa &p1,Ropa &p2,Ropa &p3,Ropa &f1,Ropa &f2,Ropa &f3)
{
    srand(time(NULL));
    cout << "Imprimiendo recibo..." << endl;
    fstream pedido("Pedido.txt",ios::app);

    pedido << "***************************************************************************" << endl;
    pedido << " Textilería" << endl;
    pedido << "       ~¡LOS HACKERS DE LIMA LIMÓN!~®" << endl;
    pedido << "===========================================================================" << endl;
    pedido << "Boleta N°00" << rand()%100+900 << "." << endl << endl;
    pedido << "       CANTIDAD       MATERIAL REQUERIDO           COSTO" << endl;
    pedido << "JERSEY:" << endl;
    pedido << "     " << j1.getCantidad() << " Polos.           " << setprecision(3) << j1.getCantidad()*j1.getKilos() << " Kg.                 S/." << setprecision(10) << j1.getCantidad()*j1.getPrecio() << endl;
    pedido << "     " << j2.getCantidad() << " Camisas.           " << setprecision(3) << j2.getCantidad()*j2.getKilos() << " Kg.                 S/." << setprecision(10) << j2.getCantidad()*j2.getPrecio() << endl;
    pedido << "     " << j3.getCantidad() << " Cuellos.           " << setprecision(3) << j3.getCantidad()*j3.getKilos() << " Kg.                 S/." << setprecision(10) << j3.getCantidad()*j3.getPrecio() << endl;
    pedido << "     Total: " << j1.getCantidad()+j2.getCantidad()+j3.getCantidad()  << "            " << setprecision(3) << j1.getCantidad()*j1.getKilos()+j2.getCantidad()*j2.getKilos()+j3.getCantidad()*j3.getKilos()  << " Kg.                  S/." << setprecision(10) << j1.getCantidad()*j1.getPrecio()+j2.getCantidad()*j2.getPrecio()+j3.getCantidad()*j3.getPrecio() << endl << endl;
    pedido << "PIQUE:" << endl;
    pedido << "     " << p1.getCantidad() << " Polos.           " << setprecision(3) << p1.getCantidad()*p1.getKilos() << " Kg.                 S/." << setprecision(10) << p1.getCantidad()*p1.getPrecio() << endl;
    pedido << "     " << p2.getCantidad() << " Camisas.           " << setprecision(3) << p2.getCantidad()*p2.getKilos() << " Kg.                 S/." << setprecision(10) << p2.getCantidad()*p2.getPrecio() << endl;
    pedido << "     " << p3.getCantidad() << " Cuellos.           " << setprecision(3) << p3.getCantidad()*p3.getKilos() << " Kg.                 S/." << setprecision(10) << p3.getCantidad()*p3.getPrecio() << endl;
    pedido << "     Total: " << p1.getCantidad()+p2.getCantidad()+p3.getCantidad()  << "            " << setprecision(3) << p1.getCantidad()*p1.getKilos()+p2.getCantidad()*p2.getKilos()+p3.getCantidad()*p3.getKilos()  << " Kg.                  S/." << setprecision(10) << p1.getCantidad()*p1.getPrecio()+p2.getCantidad()*p2.getPrecio()+p3.getCantidad()*p3.getPrecio() << endl << endl;
    pedido << "FRANELA:" << endl;
    pedido << "     " << f1.getCantidad() << " Polos.           " << setprecision(3) << f1.getCantidad()*f1.getKilos() << " Kg.                 S/." << setprecision(10) << f1.getCantidad()*f1.getPrecio() << endl;
    pedido << "     " << f2.getCantidad() << " Camisas.           " << setprecision(3) << f2.getCantidad()*f2.getKilos() << " Kg.                 S/." << setprecision(10) << f2.getCantidad()*f2.getPrecio() << endl;
    pedido << "     " << f3.getCantidad() << " Cuellos.           " << setprecision(3) << f3.getCantidad()*f3.getKilos() << " Kg.                 S/." << setprecision(10) << f3.getCantidad()*f3.getPrecio() << endl;
    pedido << "     Total: " << f1.getCantidad()+f2.getCantidad()+f3.getCantidad()  << "            " << setprecision(3) << f1.getCantidad()*f1.getKilos()+f2.getCantidad()*f2.getKilos()+f3.getCantidad()*f3.getKilos()  << " Kg.                  S/." << setprecision(10) << f1.getCantidad()*f1.getPrecio()+f2.getCantidad()*f2.getPrecio()+f3.getCantidad()*f3.getPrecio() << endl << endl;
    pedido << "¡Muchas gracias por su preferencia!" << endl;
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
            Precio=15; // <-50% de 30
            jersey[0]=new Jersey(Cantidad,Kilos_por_prenda,Precio); //Polos jersey

            jersey[0]->setCantidad(Cantidad);
            jersey[0]->setKilos(Kilos_por_prenda);
            jersey[0]->setPrecio(Precio);
        }
        else if(i==1)
        {
            Precio=30; // <-50% de 60
            pique[0]=new Pique(Cantidad,Kilos_por_prenda,Precio); //Polos pique

            pique[0]->setCantidad(Cantidad);
            pique[0]->setKilos(Kilos_por_prenda);
            pique[0]->setPrecio(Precio);
        }
        else
        {
            Precio=30; // <-50% de 60
            franela[0]=new Franela(Cantidad,Kilos_por_prenda,Precio); //Polos franela

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
            Precio=25; // <-50% de 50
            jersey[1]=new Jersey(Cantidad,Kilos_por_prenda,Precio); //Camisas jersey

            jersey[1]->setCantidad(Cantidad);
            jersey[1]->setKilos(Kilos_por_prenda);
            jersey[1]->setPrecio(Precio);
        }
        else if(i==1)
        {
            Precio=37.5; // <-50% de 75
            pique[1]=new Pique(Cantidad,Kilos_por_prenda,Precio); //Camisas pique

            pique[1]->setCantidad(Cantidad);
            pique[1]->setKilos(Kilos_por_prenda);
            pique[1]->setPrecio(Precio);
        }
        else
        {
            Precio=40; // <-50% de 80
            franela[1]=new Franela(Cantidad,Kilos_por_prenda,Precio); //Camisas franela

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
            Precio=2.5; // <-50% de 5
            jersey[2]=new Jersey(Cantidad,Kilos_por_prenda,Precio); //Cuellos jersey

            jersey[2]->setCantidad(Cantidad);
            jersey[2]->setKilos(Kilos_por_prenda);
            jersey[2]->setPrecio(Precio);
        }
        else if(i==1)
        {
            Precio=5; // <-50% de 10
            pique[2]=new Pique(Cantidad,Kilos_por_prenda,Precio); //Cuellos pique

            pique[2]->setCantidad(Cantidad);
            pique[2]->setKilos(Kilos_por_prenda);
            pique[2]->setPrecio(Precio);
        }
        else
        {
            Precio=7.5; // <-50% de 15
            franela[2]=new Franela(Cantidad,Kilos_por_prenda,Precio); //Cuellos franela

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

    Salida(*jersey[0],*jersey[1],*jersey[2],*pique[0],*pique[1],*pique[2],*franela[0],*franela[1],*franela[2]);
}

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
