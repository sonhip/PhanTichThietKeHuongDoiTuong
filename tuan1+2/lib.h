#include "teacher.h"
#ifndef LIB_H
#define LIB_H
#include <fstream>
#include "subject.h"

Subject S[1000];
Teacher T[1000];
int n=0;
int x=0;

void Menu()
{
	cout<<"---------------QUAN LY DANH SACH GIAO VIEN BO MON---------------"<<endl;
	cout<<"1.Them Moi Mot Giao Vien"<<endl;
	cout<<"2.Sua Thong Tin Mot Giao Vien"<<endl;
	cout<<"3.Xoa Thong Tin Mot Giao Vien"<<endl;
	cout<<"4.Hien Thi Danh Sach Cac Giao Vien"<<endl;
	cout<<"5.Tim Kiem Giao Vien Theo Ma Giao Vien Hoac Theo Ten Ten Giao Vien"<<endl;
	cout<<"6.Hien Thi Danh Sach Giao Vien Theo Tuoi"<<endl;
	cout<<"7.Bo mon"<<endl;
	cout<<"8.Doc file"<<endl;
	cout<<"9.Xuat fie"<<endl;
	cout<<"0. Thoat"<<endl;
	cout<<"Vui Long Chon Cac Chuc Nang[0-9]: "<<endl;;
}
void ThemGV()
{
	cin>>T[n];
	S[x]=T[n].getSubject();
	x++;
	n++;
};


void SuaThongTinGV(){
		int k;
		cout<<"Nhap thu tu giao vien ban muon sua doi: ";cin>>k;cout<<endl;
		if(k>=n+1){cout<<"Chua co giao vien "<<k<<"!"<<endl;}else{
			cout<<"Nhap lai thong tin cua giao vien "<<k<<": ";
			cout<<endl;
			cin>>T[k-1];	
		}	
	}


void XoaGV(){
	if(n==0){cout<<"Chua co thong tin giao vien. Vui long nhap them giao vien."<<endl;}else{
		cout<<"So thu tu giao vien ban muon xoa: ";int x;cin>>x;
		if(x>n){cout<<"Danh sach khong co giao vien thu "<<x<<".Vui long nhap lai!"<<endl;}else{
			for(int i=x-1;i<n-1;i++){
				T[i]=T[i+1];
			}
			--n;
		}
	}
};
void ShowListGV(){
	if(n==0){cout<<"Chua co thong tin giao vien. Vui long nhap them giao vien."<<endl;}else{
		for(int i=0;i<n;i++){
			cout<<"Giao Vien "<<i+1<<" :"<<endl;
			cout<<T[i]<<endl;
			cout<<"==========================================================================="<<endl;
		}
	}
};

void FindGV(){
	
		if(n==0){cout<<"Chua co thong tin giao vien. Vui long nhap them giao vien."<<endl;}else{
			string s;
			cout<<"Nhap ma giao vien hoac ten giao vien de tim kiem: "<<endl;cin>>s;
			for(int i=0;i<n;i++){
				if(T[i].gettenGV()==s || T[i].getmaGV()==s){
				cout<<"Giao Vien "<<i+1<<" :"<<endl;
				cout<<T[i];
				cout<<"==========================================================================="<<endl;}		
			}
		}
};


void ShowListByAge(){
	cout<<"Nhap vao so tuoi: ";int age;cin>>age;
	cout<<"Danh sach cac giao vien co tuoi lon hon "<<age<<" la:"<<endl;
	for (int i=0;i<n;i++){
		if (T[i].Age()>=age){
			cout<<"Giao vien "<<i+1<<": ";
			cout<<T[i];cout;cout<<"Tuoi: ";
			cout<<T[i].Age()<<endl;
			cout<<"==========================================================================="<<endl;
		}
	}
}

// int a[1000];
// void DocFile(){
// 		ifstream file;
// 		file.open("text1.txt");
		
// 		for(int i=0;i<n;i++){
// 			file>>T[i].maGV;
// 			file.ignore();
// 			getline(file,T[i].tenGV);
// 			file>>T[i].gioiTinh;
// 			file>>T[i].DoB;
// 			file>>T[i].ngayStartWork;
// 			file>>T[i].heSoLuongMin;
// 		}
// 		file.close();
// }

void MenuSubject(){
	cout<<"==========================Bo mon==========================="<<endl;
	cout<<"1.Them bo mon"<<endl;
	cout<<"2.Sua bo mon"<<endl;
	cout<<"3.Xoa bo mon"<<endl;
	cout<<"4.Hien thi danh sach bo mon"<<endl;
	cout<<"5.Hien thi danh sach giao vien theo 1 bo mon"<<endl;
	cout<<"0.Thoat"<<endl;
	cout<<"Vui Long Chon Cac Chuc Nang[0-5]: "<<endl;
	cout<<"==========================================================================="<<endl;

}
void ThemBoMon(){
	cout<<"Them moi mot bo mon: "<<endl;
	cin>>S[x];
	x++;
};
void SuaBoMon(){
	int k;
	cout<<"Nhap thu tu bo mon ban muon sua doi(Hien cac bo mon de biet thu tu): ";cin>>k;cout<<endl;
	if(k>=x+1){cout<<"Chua co bo mon "<<k<<"!"<<endl;}else{
		cout<<"Nhap lai thong tin bo mon "<<k<<": ";
		cout<<endl;
		cin>>S[k-1];	
	}
		
};
void XoaBoMon(){
	if(x==0){cout<<"Chua co thong tin cac bo mon. Vui long nhap them bo mon."<<endl;}else{
		cout<<"So thu tu bo mon ban muon xoa: ";int p;cin>>p;
		if(p>x){cout<<"Danh sach khong co giao vien thu "<<p<<".Vui long nhap lai!"<<endl;}else{
			for(int i=p-1;i<x-1;i++){
				S[i]=S[i+1];
			}
			--x;
		}
	}
};
void ShowListSubject(){
	cout<<"Danh Sach Cac Bo Mon: "<<endl;
	for(int i=0;i<x;i++){
		cout<<S[i];
		cout<<"================================="<<endl;
	}
};
void ShowListGVbySubject(){
	if(x==0){cout<<"Chua co thong tin cac bo mon. Vui long nhap them bo mon."<<endl;}else{
			string s;
			cout<<"Nhap ma bo mon hoac ten bo mon de tim kiem: "<<endl;cin>>s;
			for(int i=0;i<x;i++){
				if(S[i].getTenMon()==s || S[i].getMaMon()==s){
				cout<<"Bo Mon: "<<endl;
				cout<<T[i];
				cout<<"==========================================================================="<<endl;}		
			}
		}
};

void BoMon(){
	int chon;
	//system("clear");
	
	bool flag=true;
	do{
		MenuSubject();
		cin>>chon;
		switch(chon){
			case 1:
				ThemBoMon();
				break;
			case 2:
				SuaBoMon();
				break;
			case 3:
				XoaBoMon();
				break;
			case 4:
				ShowListSubject();
				break;
			case 5:
				ShowListGVbySubject();
				break;
			default:
				flag=false; 
				break;
		}

	}while(flag==true);
}


#endif
