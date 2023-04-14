#include<bits/stdc++.h>
using namespace std;
class NSX{
	char MaNSX[10];
	char TenNSX[30];
	char DcNSX[30];
	public: 
	void nhap();
	void xuat();
	friend class Hang;
};
class Hang{
	char MH[10];
	char TH[10];
	NSX x;
	public: 
	void nhap();
	void xuat();
	
};
void NSX::nhap(){
	cout<<"nhap Ma NSX : ";fflush(stdin);gets(MaNSX);
	cout<<"nhap Ten NSX : ";fflush(stdin);gets(TenNSX);
	cout<<"nhap DC NSX : ";fflush(stdin);gets(DcNSX);
}
void NSX::xuat(){
	cout<<"Ma NSX : "<<MaNSX<<endl;
	cout<<"Ten NSX : "<<TenNSX<<endl;
	cout<<"DC NSX : "<<DcNSX<<endl;
}
void Hang::nhap(){
	cout<<"nhap ma hang : ";fflush(stdin);gets(MH);
	cout<<"nhap ten hang : ";fflush(stdin);gets(TH);
	x.nhap();
}
void Hang::xuat(){
	cout<<"ma hang : "<<MH<<endl;
	cout<<"ten hang : "<<TH<<endl;
	x.xuat();
}
int main (){
	Hang a;
	a.nhap();
	a.xuat();
	
}
