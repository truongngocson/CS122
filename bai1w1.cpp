#include <iostream>
#include <math.h>
using namespace std;

class Phanso
{
    private:
        int tuso;
        int mauso;
    public:
        
        //setters
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
    
        //getters
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
        /*float thuong(Phanso a)
        {
            float m = this->tuso*a.getMauso() + this->mauso*a.getTuso();
            float n = this->mauso*a.getMauso();
            return m/n;
        }*/
        Phanso Tru(Phanso b)
        {
            Phanso kq;
            kq.setTuso(this->tuso*b.getMauso() + this -> mauso*b.getTuso());
            kq.setMauso(this->mauso*b.getMauso());
            return kq;
        }
        Phanso Trusonguyen(int c)
        {
            Phanso kq;
            kq.setTuso(this->tuso - this->mauso*c);
            kq.setMauso(this->mauso);
            return kq;
        }
        Phanso Nhan(Phanso b)
        {
            Phanso kq;
            kq.setTuso(this->tuso*b.getTuso());
            kq.setMauso(this->mauso*b.getMauso());
            return kq;
        }
        Phanso Nhansonguyen(int c)
        {
            Phanso kq;
            kq.setTuso(this->tuso*c);
            kq.setMauso(this->mauso);
            return kq;
        }
        Phanso Rutgon()
        {
            Phanso kq;
            int a,b,c;
            a=this->tuso;
            b=this->mauso;
	    c =a;
		if (c<0){
	c=-c;
}
            for (int i = c; i >= 1; i--)
            {
                if(a%i==0&&b%i==0)
                {
                    a=a/i;
                    b=b/i;
                    break;
                }
            }
            kq.setTuso(a);
            kq.setMauso(b);
            return kq;

        }
	void xuat()
	{
		cout<<tuso<<"/";
		cout<<mauso;
	}

};


int main()
{
    Phanso a,b;
    a.setphanso(-2,12);
    b.setphanso(3,8);
    Phanso e = a.Nhansonguyen(2);
    e.xuat();

    Phanso d = a.Rutgon();
	     d.xuat();
	     cout<<endl;

    return 0;
}
