#include <iostream>
using namespace std;

class PhanSo
{
private:
	int tuso;
	int mauso;
public:
	//setter
	void setPhanSo(int a,int b)
	{
		this->tuso = a;
		this->mauso = b;
	}
	void setTuso(int a)
	{
		this->tuso = a;
	}
	void setMauso(int b)
	{
		this->mauso= b;
	}

	//getter
	int getTuso(int a)
	{
		return this->tuso;
	}
	int getMauso(int b)
	{
		return this->mauso;
	}
	//Cong 2 phan so
	PhanSo cong(PhanSo b)
	{
		PhanSo kq;
		kq.setTuso(this->tuso*b.getMauso() + this->mauso*b.getTuso());
		kq.setMauso(this->mauso*b.getMauso());

		return kq;
	}
	//Cong phan so voi 1 so nguyen
	PhanSo cong(int b)
	{
		PhanSo kq;
		kq.setTuso(this->tuso + this->mauso*b);
		kq.setMauso(this->mauso);

		return kq;
	}
	//Tru 2 phan so
	PhanSo tru(PhanSo b)
	{
		PhanSo kq;
		kq.setTuso(this->tuso*b.getMauso()-this->mauso*b.getTuso());
		kq.setMauso(this->mauso*b.getMauso());

		return kq;
	}
	//Tru phan so voi 1 so nguyen
	PhanSo tru(int b)
	{
		PhanSo kq;
		kq.setTuso(this->tuso - this->mauso*b);
		kq.setMauso(this->mauso);

		return kq;
	}
	//Nhan 2 phan so
	PhanSo nhan(PhanSo b)
	{
		PhanSo kq;
		kq.setTuso(this->tuso*b.getTuso());
		kq.setMauso(this->mauso*b.getMauso());

		return kq;
	}
	//Nhan phan so voi 1 so nguyen
	PhanSo nhan(int b)
	{
		PhanSo kq;
		kq.setTuso(this->tuso*b);
		kq.setMauso(this->mauso);

		return kq;
	}
	//Toi gian phan so
	PhanSo toigian()
	{	
		PhanSo kq;
		int ts = this->tuso;
		int ms = this->mauso;
		while (ms != 0){
			int t = ts % ms;
			ts = ms;
			ms = t;	
		}
		kq.setTuso(this->tuso/=ts);
		kq.setMauso(this->mauso/=ms);

		return kq;

	}
};
