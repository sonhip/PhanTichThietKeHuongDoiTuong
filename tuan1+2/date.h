#ifndef DATE_H
#define DATE_H
#include <iostream>

class Date{
private:
	int Day;
	int Month;
	int Year;

public:
	Date(){};
	void setDay(int d){Day = d;}
	void setMonth(int m){Month = m;}
	void setYear(int y){Year = y;}
	int getDay(){return Day;}
	int getMonth(){return Month;}
	int getYear(){return Year;}

	//qua tai operator
	friend istream& operator >> (istream& in, Date &date){
		cout<<"\n-Nhap ngay: ";
		in>>date.Day;
		cout<<"-Nhap thang: ";
		in>>date.Month;
		cout<<"-Nhap nam: ";
		in>>date.Year;
		return in;
	}
	friend ostream& operator << (ostream& out, Date &date){
		cout<<"\n-Ngay: ";
		out<<date.Day<<endl;
		cout<<"-Thang: ";
		out<<date.Month<<endl;
		cout<<"-Nam: ";
		out<<date.Year;
		return out;
	}


	// friend ostream& operator << (ostream& out, Date &date){
	// 	cout<<"\n-Ngay: ";out<<date.Day<<endl;
	// 	cout<<"-Thang: ";out<<date.Month<<endl;
	// 	cout<<"-Nam: ";out<<date.Year;
	// 	return out;
	// }
	// friend istream& operator >> (istream& in, Date& date){
	// 	cout<"\n Nhap Ngay: ";in>>date.Day;
	// 	cout<<"-Nhap Thang: ";in>>date.Month;
	// 	cout<<"-Nhap Nam: ";in>>date.Year;
	// 	return in;
	// }

};

#endif
