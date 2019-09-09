#ifndef SUBJECT_H
#define SUBJECT_H
// #include <string>
// #include <fstream>
class Subject{
private:
	string tenMon;
	string maMon;
public:
	Subject(){}
	//setters and getters
	void setTenMon(string a){this->tenMon=a;}
	void setMaMon(string a){this->maMon=a;}

	string getTenMon(){
		return tenMon;
	}
	string getMaMon(){
		return maMon;
	}

	//qua tai operator
	friend istream& operator >> (istream &in, Subject &sj){
		cout<<"Nhap ten mon: ";in>>sj.tenMon;
		cout<<"Nhap ma mon: ";in>>sj.maMon;
		return in;
	}

	friend ostream& operator << (ostream &out, Subject &sj){
		cout<<"Ten mon: ";out<<sj.tenMon;cout<<endl;
		cout<<"Ma mon: ";out<<sj.maMon;cout<<endl;
		return out;
	}
};


#endif