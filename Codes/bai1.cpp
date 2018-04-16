#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	string msv[100];
	float qt[100];
	float th[100];
	float lt[100];
	float dtk[100];
	string xeploai[100];

	cout<<"nhap so luon sinh vien ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"nhap ma sinh vien ";
		cin>>msv[i];
		cout<<"nhap diem qua trinh ";
		cin>>qt[i];
		cout<<"nhap diem thuc hanh ";
		cin>>th[i];
		cout<<"nhap diem ly thuyet ";
		cin>>lt[i];
		dtk[i]=qt[i]*0.3 + 0.7*(th[i] + lt[i])/2;	
	}
	for(int i=0;i<n;i++)
	{
		if (dtk[i]>=8.6)
			xeploai[i]= "SX";
		else if (dtk[i]<8.6 && dtk[i]>=7.6)
			xeploai[i]= "G";
		else if (dtk[i]<7.6 && dtk[i]>=6.6)
			xeploai[i]= "K";
		else if (dtk[i]<6.6 && dtk[i]>=4.6)
			xeploai[i]="TB";
		else
			xeploai[i]="Truot";

		cout<<xeploai[i]<<endl;
	}
	float tong=0;
	for (int i=0;i<n;i++)
	{
		tong=tong+dtk[i];
	}
	cout<<tong/n<<endl; 

	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (dtk[i]<dtk[j])
			{
				string nho = msv[i];
				msv[i]=msv [j];
				msv[j]=nho;

				float nho1 = dtk [i];
				dtk [i] = dtk[j];
				dtk[j] = nho1;

				float nho2 = lt[i];
				lt[i]=lt[j];
				lt[j]=nho2;

				float nho3=th[i];
				th[i]=th[j];
				th[j]=nho3;

				float nho4=qt[i];
				qt[i]=qt[j];
				qt[j]=nho4;
			}
		}
		
	}
	for (int i=0;i<n;i++)
	{
		cout<<msv[i]<<" "<<dtk[i]<<endl;
	}
}

