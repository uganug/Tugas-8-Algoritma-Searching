//6. Buatlah program dalam bahasa c++ yang menerapkan metode pencarian beruntun

#include <iostream>
#include <string>
using namespace std;
int main(){
	int himpun[10] = {45,65,78,89,2,15,9,90,12,54};  
	int wren,pint;
	cout<<"Himpunan angka : ";
	for(int i=0;i<10;i++){
		cout<<himpun[i]<<" ";
	}
	cout<<endl;
	cout<<"Input angka yang akan dicari : "; cin>>wren;
	for (int i = 0; i< 10; i++)  {  
		if(himpun[i] == wren)		{  
			pint = i+1;
			break;  
		}   
		else  
		pint = 0;  
	}   
	if(pint != 0){  
		cout<<"Berada pada index ke "<<pint<<" dalam himpunan angka tersebut";  
	}  
	else{  
		cout<<"Angka "<<wren<<"tidak ada di dalam himpunan";  
	}  
   
}

