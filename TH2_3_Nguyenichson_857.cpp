#include<bits/stdc++.h>
using namespace std;
class Hang{
	char MH[10];
	char TH[30];
	float DG;
	public:
		void nhap();
		void xuat();
			
};
class Phieu{
	char MP[10];
	Hang x[100];
	int *n;
	public:
		void nhap();
		void xuat();
		friend class Hang;
};
void Hang::nhap(){
	cout<<"nhap ma hang : ";fflush(stdin);gets(MH);
	cout<<"nhap ten hang : ";fflush(stdin);gets(TH);
	cout<<"nhap don gia : ";cin>>DG;
}
void Hang::xuat(){
	cout<<"ma hang : "<<MH<<endl;
	cout<<"ten hang : "<<TH<<endl;
	cout<<"gia : "<<DG;
}
void Phieu::nhap(){
	cout<<"nhap ma phieu : ";fflush(stdin);gets(MP);
	x.nhap();
	cout<<"nhap n : ";
	cin>>n;
}
void Phieu::xuat(){
	cout<<"ma phieu : "<<MP<<endl;
	x.xuat();
}
int main(){
	Phieu a[100];
	for(int i=0;i<a.n;i++){
		a[i].nhap();
	}
	for(int i=0;i<a.n;i++){
		a[i].xuat();
	}
}
