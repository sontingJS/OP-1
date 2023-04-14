#include<bits/stdc++.h>
using namespace std;
class HCN{
	float CD;
	float CR;
	public:
		void nhap();
		void ve();
		float S();
		float C();
};
void HCN::nhap(){
	cout<<"nhap chieu dai : ";cin>>CD;
	cout<<"nhap chieu rong : ";cin>>CR;
}
void HCN::ve(){
	for(int i=0;i<CD;i++){
	for(int j=0;j<CR;j++){
		cout<<"*";
	}
	cout<<endl;
	}
}
float HCN::S(){
	return CD*CR;
}
float HCN::C(){
	return (CR+CD)*2;
}
int main(){
	HCN x;
	x.nhap();
	x.ve();
	cout<<endl<<x.S();
	cout<<endl<<x.C();
}
