#include<iostream>
using namespace std;
class Nhansu
{
	private:
		string ten; 
		float luong;
	public:
		Nhansu(string a,float b)
		{
			this->ten=a;
			this->luong=b;
		}
		void setten(string a)
		{
			this->luong=a;
		
		}
		void setluong(float b)
		{
			this->luong=b;

		}
		string getten()
		{
			return this->ten;
			
		}
		float getluong()
		{
			return this->luong;
		}
		void print()
		{
			cout<<"Ten: "<<getten()<<endl;
			cout<<"Luong: "<<getluong()<<endl;
		}


};
int main()
{
	Nhansu ;
	cout<<"Ten :"<<endl; cin>>a;
	cout<<"Luong: "<<endl;  cin>>b;
	return 0;
}
