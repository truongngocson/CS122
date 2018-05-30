#include <iostream>
#include <math.h>
using namespace std;
class Sophuc
{
	private:
		int thuc;
		int ao;
	public:
		
		void setSophuc(int a, int b)
		{
			this->thuc = a;
			this->ao = b;
		}
		void setThuc(int c)
		{
			this -> thuc = c;
		}
		void setAo(int c)
		{
			this -> ao = c;
		}
		
		int getThuc()
		{
			return this -> thuc;
		}
		int getAo()
		{
			return this -> ao;
		}
		Sophuc cong(Sophuc a)
		{
			Sophuc kq;
			kq.setThuc(this->thuc+a.getThuc());
			kq.setAo (this->ao+a.getAo());
			return kq;
		}
		Sophuc tru(Sophuc a)
		{
			Sophuc kq;
			kq.setThuc(this->thuc-a.getThuc());
			kq.setAo (this->ao-a.getAo());
			return kq;
		}
		Sophuc nhan(Sophuc a)
		{
			Sophuc kq;
			kq.setThuc(this->thuc*a.getThuc());
			kq.setAo(this->ao*a.getAo());
			return kq;	
		}
		float triTuyetDoi()
		{
			int m = this->thuc ;
			int n = this->ao;
			return sqrt(pow(m,2)+pow(n,2));
		}
};

int main()
{
	Sophuc a,b;
	a.setSophuc(3,7);
	b.setSophuc(2,5);
	Sophuc c = a.cong(b);
	cout << c.getThuc() << " + " << c.getAo() << "i = "<<a.triTuyetDoi()<<endl; 
}
