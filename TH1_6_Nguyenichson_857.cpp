#include<bits/stdc++.h>
using namespace std;
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
	friend void SX(Sach *a,int n);	
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
void SX(Sach *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
		if(a[i].GT>a[j].GT){
			int tg = a[i].GT;
			a[i].GT=a[j].GT;
			a[j].GT=tg;
		}
		}
	}
}
int main(){
	int n;cout<<"nhap n : ";cin>>n;
	Sach a[10];
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	SX(a,n);
	for(int i=0;i<n;i++){
	if(i==0){
	cout<<"Sach co gia tien thap nhat la : "<<endl;
	a[i].xuat();
}
	if(i==(n-1)){
	cout<<"Sach co gia tien cao nhat la : "<<endl;
	a[i].xuat();
}
	}
}
