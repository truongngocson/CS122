#include <iostream>
#include <math.h>
using namespace std;

class Sothuc{
private:
	int Pnguyen, Pthuc;
public:
	//setter
	void setSothuc(int a, int b){
		this -> Pnguyen = a;
		this -> Pthuc = b;
	}

	//getter
	int getPn(){
		return this -> Pnguyen;
	}
	int getPt(){
		return this -> Pthuc;
	}
	//Cong 2 so thuc
	Sothuc Cong( Sothuc b){
		Sothuc kq;
		kq.setSothuc( this -> Pnguyen + b.getPn(), this -> Pthuc + b.getPt());
		return kq;
	}
	//Tru 2 so thuc
	Sothuc Tru( Sothuc b){
		Sothuc kq;
		kq.setSothuc( this -> Pnguyen - b.getPn(), this -> Pthuc - b.getPt());
		return kq;
	}
	//Nhan 2 so thuc
	Sothuc Nhan( Sothuc b){
		Sothuc kq;
		kq.setSothuc( this -> Pnguyen * b.getPn() - this -> Pthuc * b.getPt(),
					  this -> Pthuc * b.getPn() + this -> Pnguyen * b.getPt() );
		return kq;
	}
	//tri tuyet doi cua so thuc
	double TTDst(){
		double kq;
		kq = (sqrt(this->Pnguyen * this->Pnguyen + this->Pthuc * this->Pthuc));
		return kq;
	}

	void print(){
		cout<<Pnguyen<< " + " <<Pthuc<<"i\n";
	}

};

int main()
{
	
	return 0;
}
