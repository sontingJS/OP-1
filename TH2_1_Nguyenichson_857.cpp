#include<bits/stdc++.h>
using namespace std;
class DATE{
	int D;
	int M;
	int Y;
	public :
		void nhap();
		void xuat();
};
class NhS{
	char MNS[30];
	char HT[30];
	DATE NS;
	public : 
	void nhap();
	void xuat();
	friend class DATE;
};
void DATE::nhap(){
	cout<<"nhap ngay : ";cin>>D;
	cout<<"nhap thang : ";cin>>M;
	cout<<"nhap nam : ";cin>>Y;
}
void DATE::xuat(){
	cout<<"date : "<<D<<"/"<<M<<"/"<<Y<<endl;
}
void NhS::nhap(){
	cout<<"nhap  MNS : ";fflush(stdin);gets(MNS);
	cout<<"nhap  Ho ten  : ";fflush(stdin);gets(HT);
	NS.nhap();
}
void NhS::xuat(){
	cout<<"nhap  MNS : "<<MNS<<endl;
	cout<<"nhap  MNS : "<<HT<<endl;
	NS.xuat();
}
int main (){ 
NhS x;
x.nhap();
x.xuat();

}
