#include<iostream>
using namespace std;
int main ()
{
int num, cuenta =0, suma, res= 0 ,cuenta1 =0 ;
	cout << "Digite un numero"<< endl ;
	cin >> num;
do {


 cuenta ++;
 	cout << cuenta ;	
 		cout << "+" ;

	res = res + cuenta ;


}while (cuenta != num );
	cout << res <<endl ;
return 0;	
}

