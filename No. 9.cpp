//9. Buatlah program dalam bahasa c++ yang menerapkan metode pencarian bagi dua

#include <iostream>
#include <string>
using namespace std;
int cari(int himpun[], int early, int thnd, int point)  
{  
	int mid;  
	if(thnd >= early) {     
		mid = (early + thnd)/2;  
		if(himpun[mid] == point)  
		{  
			return mid+1;  
		}  
		else if(himpun[mid] < point) {  
			return cari(himpun,mid+1,thnd,point);  
		}  
		else {  
			return cari(himpun,early,mid-1,point);  
		}  
	}  
	return -1;   
}   
int main ()  
{  
	int himpun[10] = {7,9,20,24,31,35,42,48,59,68};  
	int point, posisi=-1;   
	cout<<"Himpunan angka :"<<endl;
	for(int i=0;i<10;i++){
		cout<<himpun[i]<<" ";
	}
	cout<<endl;
	cout<<"mauskkan kata kunci yang ingin dicari:"; cin>>point;  
	posisi = cari(himpun, 0, 9, point);  
	if(posisi != -1)  {  
		cout<<point<<" Berada pada index - "<<posisi; 
	}  
	else   {  
		cout<<point<<"tidak ada di dalam himpunan";
	}  
}

