
#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1416


using namespace std;

int proceso(int a[20][20],int b[20][20],int c[20][20],int z,int m,int n,int k){
	int opc,resultados;
	cout<<"\nQue quieres hacer?"<<endl;
	cout<<"1.- multiplicar con otra matriz."<<endl;
	cout<<"2.- seno de la matriz."<<endl;
	cout<<"3.- coseno de la matriz."<<endl;
	cout<<"4.- tangente de la matriz."<<endl;
	cout<<"5.- Salir del programa. "<<endl;
	cout<<"opcion: ";cin>>opc;
	switch(opc){
		case 1:
		cout<<"\n\nlectura de la matriz b: "<<endl;
	    cout<<"filas de la matriz b: "<<m<<endl;
	    cout<<"columnas de la matriz b: "<<endl;cin>>n;
	    cout<<endl;
	    
	    for(int i=0;i<m;++i)
	    for(int j=0;j<n;++j)
	    {
		cout<<"ingrese e los valores de la matriz b["<<i<<"] ["<<j<<"]: "<<endl;cin>>b[i][j];
	    }
	
	    for(int i=0;i<k;++i)
	    for(int j=0;j<n;++j)
	    c[i][j]=0;
	
	
	    for(int i=0;i<k;++i)
	    for(int j=0;j<n;++j)
	    for(int z=0;z<m;++z)
	    c[i][j] +=a[i][z] * b[z][j];
	
	    cout<<"\nla matriz a: "<<endl<<endl<<endl;
	    for(int i=0;i<k;++i)
	    {
		for(int j=0;j<m;++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	    }
	
	    cout<<"\nla matriz b: "<<endl<<endl<<endl;
	    for(int i=0;i<m;++i)
	    {
		for(int j=0;j<n;++j)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	    }
	    getch();
	    cout<<"\ncomo quiere ver la matriz c ?: seno=1,coseno=2,tangente=3 o normal=4"<<endl;cin>>resultados;
	    if(resultados==1){
	    	cout<<"\nla matriz c: "<<endl<<endl<<endl;
	    for(int i=0;i<k;++i)
	    {
		for(int j=0;j<n;++j)
		{
			cout<<sin(c[i][j]*PI/180)<<" ";
		}
		cout<<endl;
	    }
		}else if(resultados==2){
		cout<<"\nla matriz c: "<<endl<<endl<<endl;
	    for(int i=0;i<k;++i)
	    {
		for(int j=0;j<n;++j)
		{
			cout<<cos(c[i][j]*PI/180)<<" ";
		}
		cout<<endl;
	    }	
		}else if(resultados==3){
		cout<<"\nla matriz c: "<<endl<<endl<<endl;
	    for(int i=0;i<k;++i)
	    {
		for(int j=0;j<n;++j)
		{
			cout<<tan(c[i][j]*PI/180)<<" ";
		}
		cout<<endl;
	    }	
		}else if(resultados==4){
		cout<<"\nla matriz c: "<<endl<<endl<<endl;
	    for(int i=0;i<k;++i)
	    {
		for(int j=0;j<n;++j)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	    }	
		}
		else{
		cout<<"\nla matriz c: "<<endl<<endl<<endl;
	    for(int i=0;i<k;++i)
	    {
		for(int j=0;j<n;++j)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	    }	
		}
		break;
		
		case 2:
		cout<<"\nla matriz a: "<<endl<<endl<<endl;
	    for(int i=0;i<k;++i)
	    {
		for(int j=0;j<m;++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	    }
	    
		cout<<"\nseno de la matriz de a: "<<endl<<endl<<endl;
	    for(int i=0;i<k;++i)
	    {
		for(int j=0;j<m;++j)
		{
			cout<<sin(a[i][j]*PI/180)<<" ";
		}
		cout<<endl;
	    }
		break;
		
		case 3:
		cout<<"\nla matriz a: "<<endl<<endl<<endl;
	    for(int i=0;i<k;++i)
	    {
		for(int j=0;j<m;++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	    }
			
		cout<<"\ncoseno de la matriz de a: "<<endl<<endl<<endl;
	    for(int i=0;i<k;++i)
	    {
		for(int j=0;j<m;++j)
		{
			cout<<cos(a[i][j]*PI/180)<<" ";
		}
		cout<<endl;
	    }
		break;
		case 4:
			cout<<"\nla matriz a: "<<endl<<endl<<endl;
	    for(int i=0;i<k;++i)
	    {
		for(int j=0;j<m;++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	    }
		cout<<"\nla tangente de la matriz de a: "<<endl<<endl<<endl;
	    for(int i=0;i<k;++i)
	    {
		for(int j=0;j<m;++j)
		{
			cout<<tan(a[i][j]*PI/180)<<" ";
		}
		cout<<endl;
	    }
		break;
		case 5:
            system("cls");
  	        cout<<"Hasta luego......."<<endl;
  	        exit(0);
		break;
		default:
			cout<<"\nEste metodo no existe"<<endl;
			getch();
			system("cls");
			return proceso(a,b,c,z,m,n,k);
			
	}
	
}

int main (){
	int a[20][20],b[20][20],c[20][20],z,m,n,k,opc2;
	bool opc3=false;
	cout<<"lectura de la matriz a: "<<endl;
	cout<<"\nfilas de la matriz a: "<<endl;cin>>k;
	cout<<"columnas de la matriz a: "<<endl;cin>>m;
	cout<<endl;
    for(int i=0;i<k;++i)
	for(int j=0;j<m;++j)
	{
	
	cout<<"\ningrese e los valores de la matriz a["<<i<<"] ["<<j<<"]: "<<endl;cin>>a[i][j];
	
	}
	system("cls");
	proceso(a,b,c,z,m,n,k);
	getch();
	system("cls");
	cout<<"Quieres volver a realizar otra vez el programa ?  SI=1 NO=2"<<endl;cin>>opc2;

  if(opc2==1){
  	system("cls");
  	return main();
  }
  else if(opc2==2){
  	system("cls");
  	cout<<"Hasta luego......."<<endl;
  	exit(0);
  }
  else{
  	system("cls");
  	cout<<"\nEsta opcion no existe,elige otro."<<endl;
    opc3=true;
  }while(opc3==true);
	return 0;
}


