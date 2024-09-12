#include <iostream> 
using namespace std;
int main() {

	int i, n, jumlah;
	cout << "nilai awal (lebih besar dari nilai akhir)" << endl;
	cin >>i;
	cout << "nilai akhir" << endl;
	cin >> n;
	
	for (i; i>=n; i--)
	{
		if (i%2!= 0){
			cout << i << endl;
			jumlah= jumlah + i;
		}
	}
	cout << "jumlah = " << jumlah ;
}
