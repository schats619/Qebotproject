#include<iostream>
#include<conio.h>
using namespace std;

int main(){

	int a[5][5], b[5][5], c[5][5], i,j,k,m,n,o,p;
	
	cout<<"\n Enter rows and columns of first matrix \n"<<endl;
	cin>>m>>n;
	
	cout<<"\n Enter rows and columns of second matrix \n"<<endl;
	cin>>o>>p;
	
	if(n==p){

		cout<<"Enter values in first matrix \n"<<endl;
		for(i=0;i<m;++i)
		for(j=0;j<n;++j)
		cin>>a[i][j];
		
		cout<<"Enter values in the second matrix \n"<<endl;
		for(i=0;i<o;++i)
		for(j=0;j<p;++j)
		cin>>b[i][j];
		
		for(i=0;i<m;++i){

			for(j=0;j<p;++j){

				c[i][j]=0;
				for(k=0;k<n;++k)
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			
				cout<<c[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
else{
	cout<<"Cannot multiply \n "<<endl;
}
getch();
return 0;







	}
	











