#include <iostream>
using namespace std;

class Phanso
{
    private:
        int tuso;
        int mauso;
    public:
        
        //seters
        void setphanso(int a, int b){
            this->tuso = a;
            this->mauso = b;
        }
        void setTuso(int cc)
        {
            this->tuso = cc;
        }
    
        void setMauso(int ss)
        {
            this->mauso = ss;
        }
    
        //geters
        int getTuso()
        {
            return this->tuso;
        }
    
        int getMauso()
        {
            return this->mauso;
        }
    
        Phanso Cong(Phanso b)
        {
            Phanso kq;
            kq.setTuso(this->tuso*b.getMauso() + this->mauso*b.getTuso());
            kq.setMauso(this->mauso*b.getMauso());
            return kq;
        }

        Phanso Cong(int c)
        {
            Phanso kq;
            kq.setTuso(this->tuso+this->mauso*c);
            kq.setMauso(this->mauso);
            return kq; 
        }
        float thuong(Phanso a)
        {
            float m = this->tuso*a.getMauso() + this->mauso*a.getTuso();
            float n = this->mauso*a.getMauso();
            return m/n;
        }
};


int main()
{
    Phanso a,b;

    /*a.setTuso(5);
    a.setMauso(6);
    b.setTuso(3);
    b.setMauso(5);*/
    a.setphanso(5,5);
    b.setphanso(6,8);


    float c = a.thuong(b);

    Phanso d = a.Cong(2);
    cout<<c;
    return 0;
}