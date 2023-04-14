#include<bits/stdc++.h>
using namespace std;
class Sach{
	char MS[10];
	char TS[30];
	char NXB[30];
	int ST;
	float GT;
	public:
		void nhap();
		void xuat();
		
};
void Sach::nhap(){
	cout<<"nhap ma sach : ";fflush(stdin);gets(MS);
	cout<<"nhap ten sach : ";fflush(stdin);gets(TS);
	cout<<"nhap NXB : ";fflush(stdin);gets(NXB);
	cout<<"nhap so trang : ";cin>>ST;
	cout<<"nhap gia tien : ";cin>>GT;
}
void Sach::xuat(){
	cout<<"ma sach : "<<MS<<endl;
	cout<<"ten sach : "<<TS<<endl;
	cout<<"NXB : "<<NXB<<endl;
	cout<<"nhap so trang : "<<ST<<endl;
	cout<<"nhap gia tien : "<<GT<<endl;
}
int main(){
	int n;cout<<"nhap n : ";cin>>n;
	Sach a[100];
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
}
