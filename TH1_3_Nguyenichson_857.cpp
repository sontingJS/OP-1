#include<bits/stdc++.h>
using namespace std;
class Hang{
	char MH[10];
	char TH[30];
	float DG;
	int SL;
	public: 
	void nhap();
	void xuat();
};
void Hang::nhap(){
	cout<<"nhap ma hang : ";fflush(stdin);gets(MH);
	cout<<"nhap ten hang : ";fflush(stdin);gets(TH);
	cout<<"nhap don gia : ";cin>>DG;
	cout<<"nhap SL : ";cin>>SL;
}
void Hang::xuat(){
	cout<<" ma hang : "<<MH<<endl;
	cout<<" ten hang : "<<TH<<endl;
	cout<<" don gia : "<<DG<<endl;
	cout<<" SL : "<<SL<<endl;
	cout<<"thanh tien : "<<DG*SL;
}
int main(){
	int n;cout<<"nhap n : ";cin>>n;
	Hang a[100];
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
}

