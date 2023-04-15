#include<bits/stdc++.h>
using namespace std;
class Hang{
	char MH[10];
	char TH[30];
	float DG;
	public:
		void nhap();
		void xuat();
		friend class Phieu;
};
class Phieu{
	char MP[10];
	Hang x[100];
	int n;
	public:
		void nhap();
		void xuat();
		
};
void Hang::nhap(){
	cout<<"nhap ma hang : ";fflush(stdin);gets(MH);
	cout<<"nhap ten hang : ";fflush(stdin);gets(TH);
	cout<<"nhap don gia : ";cin>>DG;
}
void Hang::xuat(){
	cout<<"ma hang : "<<MH<<endl;
	cout<<"ten hang : "<<TH<<endl;
	cout<<"gia : "<<DG<<endl;
}

void Phieu::nhap(){
	cout<<"nhap ma phieu : ";fflush(stdin);gets(MP);
	cout<<"nhap n : ";cin>>n;
	for(int i=0;i<n;i++){
		x[i].nhap();
	}
}
void Phieu::xuat(){
	cout<<"ma phieu : "<<MP<<endl;
		for(int i=0;i<n;i++){
		x[i].xuat();
	}
}
int main(){
	Phieu a;
	a.nhap();
	a.xuat();
}

