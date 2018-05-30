#include <iostream>
#include <stdlib.h>
using namespace std;

class phanso
{
	private:
		int tuso;
		int mauso;
	public:
		phanso()
		{
			this->tuso = 0;
			this->mauso = 1;
		}
		phanso(int a)
		{
			this->tuso = a;
			this->mauso = 1;
		}
		phanso(int a, int b)
		{
			this->tuso = a;
			this->mauso = b;
		}		
		//setter
		void setphanSo(int tu, int mau)
		{
			this->tuso = tu;
			this->mauso = mau;
		}
		void settuso(int tu)
		{
			this->tuso = tu;
		}
		void setmauso(int mau)
		{
			this->mauso = mau;
		}
		//getter
		int gettuso()
		{
			return tuso;
		}
		int getmauso()
		{
			return mauso;
		}
		//Qua tai  toan tu
		phanso operator + (phanso a)
		{
			phanso kq;
			kq.tuso = this->tuso*a.getmauso() + this->mauso*a.gettuso();
			kq.mauso = this->mauso*a.getmauso();
			return kq;
		}
		phanso operator - (phanso a)
		{
			phanso kq;
			kq.tuso = this->tuso*a.getmauso() - this->mauso*a.gettuso();
			kq.mauso = this->mauso*a.getmauso();
			return kq;
		}
		phanso operator * (phanso a)
		{
			phanso kq;
			kq.tuso = this->tuso*a.gettuso() ;
			kq.mauso = this->mauso*a.getmauso();
			return kq;
		}
		phanso operator / (phanso a)
		{
			phanso kq;
			kq.tuso = this->tuso*a.getmauso() ;
			kq.mauso = this->mauso*a.gettuso();
			return kq;
		}
		void operator -= (phanso b)
		{
			
			this->tuso = this->tuso*b.getmauso()-this->mauso*b.gettuso();
			this->mauso = this->mauso*b.getmauso();
	
		}
		void operator += (phanso b)
		{
			
			this->tuso = this->tuso*b.getmauso()+this->mauso*b.gettuso();
			this->mauso = this->mauso*b.getmauso();
	
		}
		void operator *= (phanso b)
		{
			
			this->tuso = this->tuso*b.gettuso() ;
			this->mauso = this->mauso*b.getmauso();
		}
		void operator /= (phanso b)
		{
			
			this->tuso = this->tuso*b.getmauso() ;
			this->mauso = this->mauso*b.gettuso();
		}
		phanso operator + (int c)
		{
			phanso kq;
			kq.tuso = this->mauso*c+this->tuso;
			kq.mauso=this->mauso;
			return kq;
		}
		phanso ToiGian(){
			phanso kq;
			int a=this->tuso;
			int b=this->mauso;
			if (a<0 || b<0){
				a=abs(a);
				b=abs(b);
			}
			while(a!=b){
				if (a>b){
					a-=b;
				}
				if (a<b){
					b-=a;
				}
			}
			kq.tuso=this->tuso/=a;
			kq.mauso=this->mauso/=a;
			return kq;
		}
		void print(){
			cout<<this->tuso<<"/"<<this->mauso;
		}
		bool operator >(phanso b){
			int tuso1=this->tuso*b.mauso;
			int tuso2=this->mauso*b.tuso;
			if (tuso1>tuso2)
				return true;
			return false;
		}
		bool operator >=(phanso b)
		{
			int tuso1=this->tuso*b.mauso;
			int tuso2=this->mauso*b.tuso;
			if (tuso1>=tuso2)
				return true;
			return false;
		}
		bool operator <=(phanso b)
		{
			int tuso1=this->tuso*b.mauso;
			int tuso2=this->mauso*b.tuso;
			if (tuso1<=tuso2)
				return true;
			return false;
		}
		bool operator ==(phanso b)
		{
			return this->tuso*b.mauso == this->mauso*b.tuso;
		}
		bool operator !=(phanso b)
		{
			return this->tuso*b.mauso != this->mauso*b.tuso;
		}
	};
  int main()
  {
    return 0;
  }
