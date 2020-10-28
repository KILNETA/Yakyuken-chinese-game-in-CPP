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
	
	cout<< "你要穿幾件 最多5件" << endl;
	cout<< "玩家輸入 : ";
	cin >> p ;
	cout << endl;
	clothes = true ;
	if (p>5)
	{
		cout<< "-----error-----別亂穿-----error-----" << endl;
		clothes = false ;
	}
	q=1+rand()%5;
	
	if(clothes)
	{
		cout<< "玩家穿 "<<p<<"件" << endl << endl;;
		cout<< "電腦穿 "<<q<<"件" << endl << endl;;
	}
	
	if(clothes)
	{
		while ( n != -1 )
		{	
			cout<< "請輸入  1(剪刀)  2(石頭)  3(布)  -1(結束)" << endl;
			cout<< "玩家輸入 : ";
			cin >> n;
			cout <<endl;
			validInput = true;
		
			switch(n){
					case 1: 
					cout << "你出的是剪刀" << endl;
					break;
					 
					case 2:
					cout << "你出的是石頭" << endl;
					break;
					 
					case 3:
					cout << "你出的是布" << endl;
					break;
					
					case -1:
					cout << endl <<"-------------------結束-------------------" << endl;
					cout << "玩家共贏 " << a << "場" << endl;
					cout << "電腦共贏 " << b << "場" << endl;
					cout << "玩家還剩 " << p << "件" << endl;
					cout << "電腦還剩 " << q << "件" << endl << endl;
					cout << "==========================================="<< endl <<"你玩了 " << c << "場" << endl << endl;
					validInput = false;
					break;
				 
					default: cout << "-----error-----請不要亂出-----error-----"<< endl ;
					cout << "玩家還剩 " << p << "件" << endl;
					cout << "電腦還剩 " << q << "件" << endl << endl;
					validInput=false;
			}	
		
			m=1+rand()%3 ;
		
			if(validInput)
			{
		
				switch( m )
				{
					case 1: 
					cout << "電腦出的是剪刀" << endl;
					break ;
					 
					case 2:
					cout << "電腦出的是石頭" << endl;
					break ;
				 
					case 3:
					cout << "電腦出的是布" << endl;
					break ;
				}
				if((3+n-m)%3==1)
				{
				cout << "********************贏********************" << endl;
				q-- ;
				a++ ;
				}
				else if((3+n-m)%3==2)
				{
				cout << "********************輸********************" << endl;
				p-- ;
				b++ ;
				}
				else 
				{
				cout << "*******************平手*******************" <<endl;
				}
				cout << "玩家還剩 " << p << "件" << endl;
				cout << "電腦還剩 " << q << "件" << endl;
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
				cout << endl <<"-------------------結束-------------------" << endl;
				cout << "電腦脫光了 " << "                    you win" << endl << endl;
				cout << "玩家共贏 " << a << "場" << endl;
				cout << "電腦共贏 " << b << "場" << endl;				
				break ;
			}
			else if(p==0)
			{
				cout << endl <<"-------------------結束-------------------" << endl;
				cout << "玩家脫光了 " << "                    you lost" << endl << endl;
				cout << "玩家共贏 " << a << "場" << endl;
				cout << "電腦共贏 " << b << "場" << endl;				
				break ;
			}
		} 
		c++ ;
	}
}
