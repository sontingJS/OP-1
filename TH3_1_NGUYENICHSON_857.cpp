#include<bits/stdc++.h>
using namespace std;
class SV{
	char MSV[10];
	char HT[30];
	float DT;
	float DL;
	float DH;
	float TD;
	public:
		void nhap();
		void xuat();
		friend void SX(SV a[],int n);
};
void SV::nhap(){
	cout<<"nhap MSV : ";fflush(stdin);gets(MSV);
	cout<<"nhap ho ten : ";fflush(stdin);gets(HT);
	cout<<"nhap diem toan : ";cin>>DT;
		cout<<"nhap diem ly : ";cin>>DL;
			cout<<"nhap diem hoa : ";cin>>DH;
			
}
void SV::xuat(){
	cout<<"MSV : "<<MSV<<endl;
	cout<<"ho ten : "<<HT<<endl;
	cout<<"diem toan : "<<DT<<endl;
	cout<<"diem ly : "<<DL<<endl;
	cout<<"diem hoa : "<<DH<<endl;
	TD=DT+DL+DH;
	cout<<"tong diem : "<<TD<<endl;
}
void SX(SV a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
			if(a[i].TD>a[j].TD){
				SV tg= a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	cout<<"cac sv duoc sap xep theo tong diem tang dan la : "<<endl;
	for(int i=0 ; i<n ; i++){
		a[i].xuat();
	}	
}
int main(){
	SV a[100];
	int n;
	cout<<"nhap so sv : ";cin>>n;
	for(int i=0 ; i<n ; i++){
		a[i].nhap();
	}
	SX(a,n);
}
