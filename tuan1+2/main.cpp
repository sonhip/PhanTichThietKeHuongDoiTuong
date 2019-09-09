#include <iostream>
#include <string>
using namespace std;
#include "teacher.h"
#include "date.h"
#include "lib.h"

using namespace std;
int main()
{

	//Teacher T[1000];
	int chon;
	//system("clear");
	
	bool flag=true;
	do{
		Menu();
		cin>>chon;
		switch(chon){
			case 1:
				ThemGV();
				break;
			case 2:
				SuaThongTinGV();
				break;
			case 3:
				XoaGV();
				break;
			case 4:
				ShowListGV();
				break;
			case 5:
				FindGV();
				break;
			case 6:
				ShowListByAge();
				break;
			case 7:
				BoMon();
				break;
			default:
				flag=false; 
				break;
		}

	}while(flag==true);
	return 0;
}

