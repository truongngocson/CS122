#include <iostream>
#include <string>
using namespace std;

struct SinhVien
{
	string MSV;
	float diemQT;
	float diemLT;
	float diemTH;
	float diemTK;
	string xl;
};

int main(int argc, char const *argv[])
{
	SinhVien array[100];
	int n;

	cout<<"nhap so luon sinh vien ";
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cout<<"nhap ma sinh vien ";
		cin>>array[i].MSV;
		cout<<"nhap diem qua trinh ";
		cin>>array[i].diemQT;
		cout<<"nhap diem thuc hanh ";
		cin>>array[i].diemTH;
		cout<<"nhap diem ly thuyet ";
		cin>>array[i].diemLT;
		array[i].diemTK[i]=array[i].diemQT*0.3 + 0.7*(array[i].diemTH + array[i].diemLT)/2;
	}

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (array[i].diemTK < array[j].diemTK)
			{
				SinhVien temp = array[i];
				array[i] = array [j];
				array[j] = temp;
			}
		}
	}
	return 0;
}