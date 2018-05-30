#include <iostream>
#include <math.h>
using namespace std;

class Sophuc
{
	private:
		int phanthuc;
		int phanao;	
	public:
		void setSoPhuc(int a, int b)
		{
			this->phanthuc = a;
			this->phanao = b;
		}
		void setPhanthuc(int a)
		{
			this->phanthuc = a;
		}
		void setPhanao(int b)
		{
			this->phanao = b;
		}
		int getPhanThuc()
		{
			return this->phanthuc;
		}
		int getPhanAo()
		{
			return this->phanao;
		}
		void print()
		{
			cout<<this->phanthuc<<" + "<<this->phanao<<"i"<<endl;
		}
		Sophuc Cong(Sophuc a)
		{
			Sophuc kq;
			kq.setPhanthuc(this->phanthuc + a.getPhanThuc());
			kq.setPhanao(this->phanao + a.getPhanAo());
			return kq;
		}
		Sophuc Tru(Sophuc a)
		{
			Sophuc kq;
			kq.setPhanthuc(this->phanthuc - a.getPhanThuc());
			kq.setPhanao(this->phanao - a.getPhanAo());
			return kq;
		}
		Sophuc Nhan(Sophuc a)
		{
			Sophuc kq;
			{
			kq.setPhanthuc(this->phanthuc*a.getPhanThuc() - this->phanao*a.getPhanAo());
			kq.setPhanao(this->phanthuc*a.getPhanAo() + this->phanao*a.getPhanThuc());
			return kq;
			}

		}
		float trituyetdoi()
		{
			int a = this->phanthuc;
			int b = this->phanao;
			float z = sqrt(a*a+b*b);
			return z;
		}
};

int main()
{
	return 0;
}
