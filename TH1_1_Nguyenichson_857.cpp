#include<bits/stdc++.h>
using namespace std;
class SV{
	char MSV[10];
	char HT[30];
	int tuoi;
	float diem;
	public:
		void nhap();
		void xuat();
};
void SV::nhap(){
cout<<"nhap MSV : ";fflush(stdin);gets(MSV);
cout<<"nhap Ho va ten : ";fflush(stdin);gets(HT);
cout<<"nhap tuoi : ";cin>>tuoi;cout<<endl;
cout<<"nhap diem : ";cin>>diem;cout<<endl;
}
void SV::xuat(){
cout<<"MSV : "<<MSV<<endl;
cout<<"Ho va ten : "<<HT<<endl;
cout<<"tuoi : "<<tuoi<<endl;
cout<<"diem : "<<diem<<endl;
}
int main(){
	SV a;
	SV b;
	a.nhap();
	b.nhap();
	a.xuat();
	b.xuat();
}
