#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	
	
	int n,m,a=0,b=0,c=0,p,q=0;
	bool validInput,clothes;
	srand(time(0));
	
	cout<< "�A�n��X�� �̦h5��" << endl;
	cout<< "���a��J : ";
	cin >> p ;
	cout << endl;
	clothes = true ;
	if (p>5)
	{
		cout<< "-----error-----�O�ì�-----error-----" << endl;
		clothes = false ;
	}
	q=1+rand()%5;
	
	if(clothes)
	{
		cout<< "���a�� "<<p<<"��" << endl << endl;;
		cout<< "�q���� "<<q<<"��" << endl << endl;;
	}
	
	if(clothes)
	{
		while ( n != -1 )
		{	
			cout<< "�п�J  1(�ŤM)  2(���Y)  3(��)  -1(����)" << endl;
			cout<< "���a��J : ";
			cin >> n;
			cout <<endl;
			validInput = true;
		
			switch(n){
					case 1: 
					cout << "�A�X���O�ŤM" << endl;
					break;
					 
					case 2:
					cout << "�A�X���O���Y" << endl;
					break;
					 
					case 3:
					cout << "�A�X���O��" << endl;
					break;
					
					case -1:
					cout << endl <<"-------------------����-------------------" << endl;
					cout << "���a�@Ĺ " << a << "��" << endl;
					cout << "�q���@Ĺ " << b << "��" << endl;
					cout << "���a�ٳ� " << p << "��" << endl;
					cout << "�q���ٳ� " << q << "��" << endl << endl;
					cout << "==========================================="<< endl <<"�A���F " << c << "��" << endl << endl;
					validInput = false;
					break;
				 
					default: cout << "-----error-----�Ф��n�åX-----error-----"<< endl ;
					cout << "���a�ٳ� " << p << "��" << endl;
					cout << "�q���ٳ� " << q << "��" << endl << endl;
					validInput=false;
			}	
		
			m=1+rand()%3 ;
		
			if(validInput)
			{
		
				switch( m )
				{
					case 1: 
					cout << "�q���X���O�ŤM" << endl;
					break ;
					 
					case 2:
					cout << "�q���X���O���Y" << endl;
					break ;
				 
					case 3:
					cout << "�q���X���O��" << endl;
					break ;
				}
				if((3+n-m)%3==1)
				{
				cout << "********************Ĺ********************" << endl;
				q-- ;
				a++ ;
				}
				else if((3+n-m)%3==2)
				{
				cout << "********************��********************" << endl;
				p-- ;
				b++ ;
				}
				else 
				{
				cout << "*******************����*******************" <<endl;
				}
				cout << "���a�ٳ� " << p << "��" << endl;
				cout << "�q���ٳ� " << q << "��" << endl;
				cout << endl;
				
				if(p==0)
				{
					clothes = false ;
				}
				else if(q==0)
				{
					clothes = false ;
				}
				
			}
			if(q==0)
			{
				cout << endl <<"-------------------����-------------------" << endl;
				cout << "�q������F " << "                    you win" << endl << endl;
				cout << "���a�@Ĺ " << a << "��" << endl;
				cout << "�q���@Ĺ " << b << "��" << endl;				
				break ;
			}
			else if(p==0)
			{
				cout << endl <<"-------------------����-------------------" << endl;
				cout << "���a����F " << "                    you lost" << endl << endl;
				cout << "���a�@Ĺ " << a << "��" << endl;
				cout << "�q���@Ĺ " << b << "��" << endl;				
				break ;
			}
		} 
		c++ ;
	}
}
