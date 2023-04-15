#include<bits/stdc++.h>
using namespace std;
class DATE{
	int D;
	int M;
	char Y[10];
	public:
		char * GetY()
		{ return Y;}
		void SetY(char* Nam)
		{strcpy(Y,Nam);}
		friend class Hang;
};
class Hang{
	char MH[30];
	char TH[30];
	DATE Ngaysx;
	public : 
	void nhap();
	void xuat();
	friend void In(Hang a[],int n);
};


void Hang::nhap(){
	cout<<"nhap Ma Hang : ";fflush(stdin);gets(MH);
	cout<<"nhap Ten Hang : ";fflush(stdin);gets(TH);
	cout<<"nhap Ngay : ";cin>>Ngaysx.D;
		cout<<"nhap Thang : ";cin>>Ngaysx.M;
			cout<<"nhap Nam : ";fflush(stdin);gets(Ngaysx.GetY());
}
void Hang::xuat(){
	cout<<"Ma Hang : "<<MH<<endl;
	cout<<"Ten Hang : "<<TH<<endl;
	cout<<"Ngay : "<<Ngaysx.D<<endl;
	cout<<"Thang : "<<Ngaysx.M<<endl;
	cout<<"Nam : "<<Ngaysx.GetY()<<endl;
}
void In(Hang a[],int n){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].Ngaysx.GetY(),"2017")==0){
			a[i].xuat();
		}
	}
}
int main (){ 
Hang a[100];
int n; cout<<"nhap n : ";cin>>n;
for(int i= 0 ; i<n ; i++){
	a[i].nhap();
}
cout<<"cac mat hang sx trong nam 2017 la : ";
In(a,n);

}
