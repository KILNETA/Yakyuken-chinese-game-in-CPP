
// ���Y�� 

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>  

// ²�Ƶ{���X 

using namespace std;



int main()// �}�l ����{�� 
{
	
	// �]�w��l�� �P �ŧi�ܼƦW�� 
	
	int player_fist , computer_fist ; // �q�� & ���a�X�� 
	
	int player_clothes_input , computer_clothes; // �q�� & ���a ��A 
	
	int win_bout=0 ,lost_bout=0 , bout=0 ; // �� & �� ���� 
	
	int replay=-2 , start_input ; // ���� �}�l & ���� 
	
	int win_innings = 0 , lost_innings = 0 , innings=0 ; // �� & �� ����
	
	bool validInput , clothes_output , start_output ; // bool ���� �O �P �_ 
	
	srand( time(0) ); // �^���{�b �ɶ� ��Ѽ� 
	
	//�H�U�}�l�i�J�C���{�� 
	
	cout << "�w��C�� \"���y��\" �p�C��" << endl << endl ; // �w�� �P �W�h���� 
	cout << "�W�h:" << endl ;
	cout << "���a�P�q�� �i��1~5���A" << endl ;
	cout << "��ܦn��A�ƫ� �C���Y�}�l" << endl ;
	cout << "�q�� �Ѫ̲�@�� �Ӫ̤���" << endl << endl ;
	
	cout << "�п�J -1 �}�l�C��" << endl ;
	
	while(start_input != -1) //�P�_ �C���}�l 
	{
	cin >> start_input ;
	
	if(start_input == -1) //�� bool ���C���}�l
		{
			start_output = true ;
		}
	}//�P�_ �C���}�l
	
	cout << endl ;
	
	
	
	while( replay == -2 ) // �}�s�@���C�� �P�_ 
	{
		innings++ ; // �p�� �� �� 
		bout=0 ; // �k�s �p���O 
		win_bout=0 ;
		lost_bout=0 ;
		player_clothes_input=0 ;
		computer_clothes=0 ;
	
		cout<< "�A�n��X�� �̦h5��" << endl ; // ���a���A 
		cout<< "���a��J : " << endl ;
		
		cin >> player_clothes_input ;
		cout << endl;
		clothes_output = true ;
		
		if ( player_clothes_input > 5  ||  player_clothes_input < 1 ) // �P�_��A �O�_�b���T�Ȥ� �ô��ܿ��~ 
		{
			cout<< "-----error-----�O�ì�-----error-----" << endl << endl ;
			clothes_output = false ;
		}// �P�_��A �O�_�b���T�Ȥ� �ô��ܿ��~
		
		computer_clothes = 1 + rand() % 5 ; // �q�����A 
		
		if( clothes_output ) // �i�D���a �����A�� 
		{
			cout<< "���a�� "<< player_clothes_input<<"��" << endl << endl ;
			cout<< "�q���� "<< computer_clothes<<"��" << endl << endl ;
		}// �i�D���a �����A��
		
		
		if( clothes_output ) // �P�_��A �O�_�b���T�Ȥ� �ö}�l�q�� 
		{
			while ( player_fist != -1 ) // �P�_�O�_ ��󦹧� 
			{	
				bout++ ;
				
				cout<< "�п�J  1(�ŤM)  2(���Y)  3(��)  -1(����)" << endl ; //���a�X�� 
				cout<< "���a��J : " ;
				
				cin >> player_fist ;
				cout << endl ;
				validInput = true ; // ���]�X���X�W 
			
				switch(player_fist) // �P�_���a�X�������G 
				{ 
						case 1 : 
							cout << "�A�X���O�ŤM" << endl ;
							break ;
						 
						case 2 :
							cout << "�A�X���O���Y" << endl ;
							break ;
						 
						case 3 :
							cout << "�A�X���O��" << endl ;
							break ;
					
						case -1 : //���a��󦹧� 
							bout-- ;
							
							cout << endl << "-------------------����-------------------" << endl ;
							cout << "���a�@Ĺ " << win_bout << "��" << endl ;
							cout << "�q���@Ĺ " << lost_bout << "��" << endl ;
							cout << "���a�ٳ� " << player_clothes_input << "��" << endl ;
							cout << "�q���ٳ� " << computer_clothes << "��" << endl << endl ;
							cout << "==========================================="<< endl ;
							cout << "�����A���F " << bout << "��" << endl ;
							cout << "�w�C�� " << innings << "��" << endl << endl ;	
							cout << "�`�� "  << win_innings << " ��" << endl ;
							cout << "�`�� "  << lost_innings << " ��" << endl << endl ;	
							cout << "�п�J (-1 ���}�C��) (-2 �}�l�U�@��)" << endl ;
							
							cin >> replay ;
							cout << endl << endl ;
							validInput = false ; // �X�� ���X�W  
							break ;
					 
						default: 
							cout << "-----error-----�Ф��n�åX-----error-----" << endl << endl ;
							bout-- ;
							validInput = false ; // �X�� ���X�W  
				}// �P�_���a�X�������G
		
				computer_fist = 1 + rand() % 3 ; // �q���X�� 
		
				if( validInput )
				{
		
					switch( computer_fist ) // �P�_�q���X�������G 
					{
						case 1: 
							cout << "�q���X���O�ŤM" << endl ;
							break ;
					 	
						case 2:
							cout << "�q���X���O���Y" << endl ;
							break ;
				 	
						case 3:
							cout << "�q���X���O��" << endl ;
							break ;
					}// �P�_�q���X�������G
					
					if( ( 3 + player_fist - computer_fist ) % 3 == 1 ) // �P�_���� ��Ĺ�����G 
					{
					cout << "********************Ĺ********************" << endl ;
					computer_clothes-- ;
					win_bout++ ;
					}// �P�_���� ��Ĺ�����G 
					
					else if( ( 3 + player_fist - computer_fist ) % 3 == 2 ) // �P�_���� ��Ĺ�����G  
					{
					cout << "********************��********************" << endl ;
					player_clothes_input-- ;
					lost_bout++ ;
					}// �P�_���� ��Ĺ�����G 
					
					else  // �P�_���� ��Ĺ�����G  
					{
					cout << "*******************����*******************" <<endl ;
					}// �P�_���� ��Ĺ�����G 
					
					
					cout << "���a�ٳ� " << player_clothes_input << "��" << endl ; // ���ܩҳ� ��A�� 
					cout << "�q���ٳ� " << computer_clothes << "��" << endl ;
					cout << endl ;
					
					
					if( player_clothes_input == 0 ) // �P�_ ���L��A������� 
					{
						clothes_output = false ;
					}// �P�_ ���L��A������� 
					
					else if( computer_clothes == 0 ) // �P�_ ���L��A������� 
					{
						clothes_output = false ;
					}// �P�_ ���L��A������� 
					
				}
				if( computer_clothes == 0 ) // �P�_���� �ӱѪ����G  
				{
					cout << endl << "-------------------����-------------------" << endl;
					win_innings++ ; // �W�[ �`�ӧ��� 
					
					cout << "�q������F " << "                                        you win" << endl << endl;// �ӧ� 
					cout << "���a�@Ĺ " << win_bout << "��" << endl;
					cout << "�q���@Ĺ " << lost_bout << "��" << endl << endl;
					cout << "===========================================" << endl ;
					cout << "�����A���F " << bout << "��" << endl ;
					cout << "�w�C�� " << innings << "��" << endl << endl ;	
					cout << "�`�� "  << win_innings << " ��" << endl ;
					cout << "�`�� "  << lost_innings << " ��" << endl << endl ;
					cout << "�п�J (-1 ���}�C��) (-2 �}�l�U�@��)" << endl ; // �O�_�~��C��  
					
					cin >> replay ;	
					cout << endl << endl ;
					break ;
				}// �P�_���� �ӱѪ����G
				
				else if( player_clothes_input == 0 ) // �P�_���� �ӱѪ����G  
				{
					cout << endl << "-------------------����-------------------" << endl ;
					lost_innings++ ; // �W�[ �`�ѧ���  
					
					cout << "���a����F " << "                                        you lost" << endl << endl ; // �ѧ� 
					cout << "���a�@Ĺ " << win_bout << "��" << endl;
					cout << "�q���@Ĺ " << lost_bout << "��" << endl << endl;
					cout << "===========================================" << endl ;
					cout << "�����A���F " << bout << "��" << endl ;	
					cout << "�w�C�� " << innings << "��" << endl << endl;	
					cout << "�`�� "  << win_innings << " ��" << endl ;
					cout << "�`�� "  << lost_innings << " ��" << endl << endl ;
					cout << "�п�J (-1 ���}�C��) (-2 �}�l�U�@��)" << endl  ;  // �O�_�~��C�� 
					
					cin >> replay ;	
					cout << endl << endl ;
					break ;
					
				}// �P�_���� �ӱѪ����G
			}// �P�_�O�_ ��󦹧�
		}// �P�_��A �O�_�b���T�Ȥ� �ö}�l�q�� 
	}// �}�s�@���C�� �P�_
}// ���� ����{�� 
