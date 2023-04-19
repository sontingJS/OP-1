#include<bits/stdc++.h>
using namespace std;
class NCC{
	char MaNCC[10];
	char TenNCC[30];
	char DcNCC[30];
	public:
		void nhap();
		void xuat();
		friend class PHIEU;
};
class Hang{
	char TH[30];
	float DG;
	int SL;
	public:
		void nhap();
		void xuat();
		friend class PHIEU;
		
};
class PHIEU{
	char MP[10];
	char NL[20];
	NCC x;
	Hang y[100];
	int n;
	public :
		void nhap();
		void xuat();
};
void NCC::nhap(){
	cout<<"nhap ma ncc : ";fflush(stdin);gets(MaNCC);
	cout<<"nhap ten NCC : ";fflush(stdin);gets(TenNCC);
	cout<<"nhap dia chi NCC : ";fflush(stdin);gets(DcNCC);
}
void NCC::xuat(){
	cout<<"ma ncc : "<<MaNCC<<setw(15)<<"ten NCC : "<<TenNCC<<endl;
	cout<<"dia chi NCC : "<<DcNCC<<endl;
}
void Hang::nhap(){
	cout<<"nhap ten hang : ";fflush(stdin);gets(TH);
	cout<<"nhap don gia : ";cin>>DG;
	cout<<"nhap so luong : ";cin>>SL;
}
void Hang::xuat(){
	cout<<setw(15)<<TH<<setw(15)<<DG<<setw(15)<<SL<<endl;
}
void PHIEU::nhap(){
	cout<<"nhap ma phieu: ";fflush(stdin);gets(MP);
	cout<<"nhap ngay TL : ";fflush(stdin);gets(NL);
	x.nhap();
	cout<<"nhap so mat hang : ";cin>>n;
	for(int i=0 ; i<n ; i++){
		y[i].nhap();
	}
}
void PHIEU::xuat(){
	cout<<setw(20)<<"Phieu nhap hang "<<setw(20);
	cout<<"ma phieu: "<<MP<<setw(15)<<"ngay TL : "<<NL<<endl;
	x.xuat();
	cout<<"**********************************************************"<<endl;
	cout<<setw(15)<<"ten hang"<<setw(15)<<"don gia"<<setw(15)<<"so luong"<<endl;
	for(int i=0 ; i<n ; i++){
		y[i].xuat();
	}
}
int main(){
	PHIEU a;
	a.nhap();
	a.xuat();
}

