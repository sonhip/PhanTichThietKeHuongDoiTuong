#ifndef TEACHER_H
#define TEACHER_H
#include "date.h"
#include <fstream>
#include <time.h>
#include "subject.h"

class Teacher{
private:
	string maGV;
	string tenGV;
	Date DoB;
	string gioiTinh;
	Date ngayStartWork;
	float heSoLuongMin;
	Subject sj;
				
public:
	Teacher(){};//cau tu
	//setters and getters
	void setmaGV(string a){maGV = a;}	
	void settenGV(string a){tenGV = a;}
	void setDoB(Date a){DoB = a;}
	void setgioiTinh(string a){gioiTinh = a;}
	void setngayStartWork(Date a){ngayStartWork = a;}
	void setheSoLuongMin(float a){heSoLuongMin = a;}
	void setSubject(Subject a){sj=a;}
	
	string getmaGV(){return maGV;}
	string gettenGV(){return tenGV;}
	Date getDoB(){return DoB;}
	string getgioiTinh(){return gioiTinh;}
	Date getngayStartWork(){return ngayStartWork;}
	float getheSoLuongMin(){return heSoLuongMin;}
	Subject getSubject(){return sj;}
	
	//qua tai operator
	friend istream& operator >> (istream &in, Teacher &teacher){
		cout<<"Nhap ma giao vien: ";
		in>>teacher.maGV;
		in.ignore();
		cout<<"Nhap ten giao vien: ";
		getline(in,teacher.tenGV);
		cout<<"Nhap gioi tinh: ";
		in>>teacher.gioiTinh;
		cout<<"Nhap ngay, thang, nam sinh: ";
		in>>teacher.DoB;
		cout<<"Nhap thoi gian bat dau lam viec: ";
		in>>teacher.ngayStartWork;
		cout<<"Nhap he so luong toi thieu: ";
		in>>teacher.heSoLuongMin;
		cout<<"Nhap bo mon: "<<endl;
		in>>teacher.sj;
		return in;
	}
	
	friend ostream& operator << (ostream &out, Teacher &teacher){
		cout<<"\nMa giao vien: ";
		out<<teacher.maGV<<endl;
		cout<<"Ten giao vien: ";
		out<<teacher.tenGV<<endl;
		cout<<"Gioi tinh: ";
		out<<teacher.gioiTinh<<endl;
		cout<<"Ngay, thang, nam sinh: ";
		out<<teacher.DoB<<endl;
		cout<<"Thoi gian bat dau lam viec: ";
		out<<teacher.ngayStartWork<<endl;
		cout<<"He so luong toi thieu: ";
		out<<teacher.heSoLuongMin<<endl;
		cout<<"Giao vien thuoc bo mon: "<<endl;
		out<<teacher.sj;
		return out;
	}
	//lay tuoi theo thoi gian thuc
	int Age(){
		time_t t = time(0);
    	struct tm *Now = localtime(&t);
    	int tuoi = Now ->tm_year + 1900 - DoB.getYear();
		return tuoi;
	}



};

#endif
