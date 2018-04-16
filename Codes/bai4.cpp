#include <iostream>
#include <string>
using namespace std;

struct phanso
{
	int tuso;
	int mauso;
};

phanso sum(phanso a, phanso b);
phanso tru(phanso a, phanso b);
phanso nhan(phanso a, phanso b);
int UCLN(int, int);
phanso toigian(phanso a);

void print(phanso a);
int main()
{
	phanso a,b;
	cout<<"Nhap tu so phan so a : ";
	cin>>a.tuso;
	cout<<"Nhap mau so phan so a: ";
	cin>>a.mauso;
	cout<<"Nhap tu so phan so b : ";
	cin>>b.tuso;
	cout<<"Nhap mau so phan so b: ";
	cin>>b.mauso;
	print(toigian(a));

	phanso kq = sum(a,b);
	print(kq);
}
phanso sum(phanso a, phanso b)
{
	phanso ketqua;
	ketqua.tuso=a.tuso*b.mauso+b.tuso*a.mauso;
	ketqua.mauso=a.mauso*b.mauso;
	return ketqua;
}
void print(phanso a)
{
	cout<<a.tuso<<"/"<<a.mauso<<endl;
}

phanso tru(phanso a,phanso b)
{
	phanso ketqua;
	ketqua.tuso=a.tuso*b.mauso-b.tuso*a.mauso;
	ketqua.mauso=a.mauso*b.mauso;
	return ketqua;
}
phanso nhan(phanso a,phanso b)
{
	phanso ketqua;
	ketqua.tuso=a.tuso*b.tuso;
	ketqua.mauso=a.mauso*b.mauso;
	return ketqua;

}

int UCLN(int a, int b)
{
	while(a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
			b = b - a;
	}
	return a;
}

phanso toigian(phanso a)
{
	int uc = UCLN(a.tuso,a.mauso);
	a.tuso = a.tuso/uc;
	a.mauso = a.mauso/uc;
	return a;
}