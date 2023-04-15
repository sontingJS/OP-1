#include<bits/stdc++.h>
using namespace std;
class QL{
	char maQL[10];
	char HT[30];
	public:
		void nhap();
		void xuat();
		friend class PM;
};
class May{
	char MM[10];
	char KM[10];
	char TT[20];
	public:
		void nhap();
		void xuat();
		friend class PM;
};
class PM{
	char MP[10];
	char TP[30];
	float DT;
	QL x;
	May y[100];
	int n;
	public:
		void nhap();
		void xuat();
};
void QL::nhap(){
	cout<<"nhap ma QL : ";fflush(stdin);gets(maQL);
	cout<<"nhap ho ten : ";fflush(stdin);gets(HT);
}
void QL::xuat(){
	cout<<"ma QL : "<<maQL<<endl;
	cout<<"ho ten : "<<HT<<endl;
}
void May::nhap(){
	cout<<"nhap ma may : ";fflush(stdin);gets(MM);
	cout<<"nhap kieu may : ";fflush(stdin);gets(KM);
	cout<<"nhap tinh trang : ";fflush(stdin);gets(TT);
}
void May::xuat(){
	cout<<"ma may : "<<MM<<endl;
	cout<<"kieu may : "<<KM<<endl;
	cout<<"tinh trang : "<<TT<<endl;
}
void PM::nhap(){
	cout<<"nhap ma phong : ";fflush(stdin);gets(MP);
	cout<<"nhap ten phong : ";fflush(stdin);gets(TP);
	cout<<"nhap dien tich : ";cin>>DT;
	x.nhap();
	cout<<"nhap so may tinh : ";cin>>n;
	for(int i=0;i<n;i++){
		y[i].nhap();
	}
}
void PM::xuat(){
	cout<<"ma phong : "<<MP<<endl;
	cout<<"ten phong : "<<TP<<endl;
	cout<<"dien tich : "<<DT<<endl;
	x.xuat();
	for(int i=0;i<n;i++){
		y[i].xuat();
	}
}
int main(){
	PM a;
	a.nhap();
	a.xuat();
}
