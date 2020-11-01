
// 標頭檔 

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>  

// 簡化程式碼 

using namespace std;



int main()// 開始 執行程式 
{
	
	// 設定初始值 與 宣告變數名稱 
	
	int player_fist , computer_fist ; // 電腦 & 玩家出拳 
	
	int player_clothes_input , computer_clothes; // 電腦 & 玩家 衣服 
	
	int win_bout=0 ,lost_bout=0 , bout=0 ; // 勝 & 敗 場數 
	
	int replay=-2 , start_input ; // 控制 開始 & 結束 
	
	int win_innings = 0 , lost_innings = 0 , innings=0 ; // 勝 & 敗 局數
	
	bool validInput , clothes_output , start_output ; // bool 控制 是 與 否 
	
	srand( time(0) ); // 擷取現在 時間 當參數 
	
	//以下開始進入遊戲程序 
	
	cout << "歡迎遊玩 \"野球拳\" 小遊戲" << endl << endl ; // 歡迎 與 規則介紹 
	cout << "規則:" << endl ;
	cout << "玩家與電腦 可穿1~5件衣服" << endl ;
	cout << "選擇好衣服數後 遊戲即開始" << endl ;
	cout << "猜拳 敗者脫一件 勝者不變" << endl << endl ;
	
	cout << "請輸入 -1 開始遊戲" << endl ;
	
	while(start_input != -1) //判斷 遊戲開始 
	{
	cin >> start_input ;
	
	if(start_input == -1) //用 bool 讓遊戲開始
		{
			start_output = true ;
		}
	}//判斷 遊戲開始
	
	cout << endl ;
	
	
	
	while( replay == -2 ) // 開新一局遊戲 判斷 
	{
		innings++ ; // 計算 局 數 
		bout=0 ; // 歸零 計分板 
		win_bout=0 ;
		lost_bout=0 ;
		player_clothes_input=0 ;
		computer_clothes=0 ;
	
		cout<< "你要穿幾件 最多5件" << endl ; // 玩家穿衣服 
		cout<< "玩家輸入 : " << endl ;
		
		cin >> player_clothes_input ;
		cout << endl;
		clothes_output = true ;
		
		if ( player_clothes_input > 5  ||  player_clothes_input < 1 ) // 判斷衣服 是否在正確值內 並提示錯誤 
		{
			cout<< "-----error-----別亂穿-----error-----" << endl << endl ;
			clothes_output = false ;
		}// 判斷衣服 是否在正確值內 並提示錯誤
		
		computer_clothes = 1 + rand() % 5 ; // 電腦穿衣服 
		
		if( clothes_output ) // 告訴玩家 雙方衣服數 
		{
			cout<< "玩家穿 "<< player_clothes_input<<"件" << endl << endl ;
			cout<< "電腦穿 "<< computer_clothes<<"件" << endl << endl ;
		}// 告訴玩家 雙方衣服數
		
		
		if( clothes_output ) // 判斷衣服 是否在正確值內 並開始猜拳 
		{
			while ( player_fist != -1 ) // 判斷是否 放棄此局 
			{	
				bout++ ;
				
				cout<< "請輸入  1(剪刀)  2(石頭)  3(布)  -1(結束)" << endl ; //玩家出拳 
				cout<< "玩家輸入 : " ;
				
				cin >> player_fist ;
				cout << endl ;
				validInput = true ; // 假設出拳合規 
			
				switch(player_fist) // 判斷玩家出拳的結果 
				{ 
						case 1 : 
							cout << "你出的是剪刀" << endl ;
							break ;
						 
						case 2 :
							cout << "你出的是石頭" << endl ;
							break ;
						 
						case 3 :
							cout << "你出的是布" << endl ;
							break ;
					
						case -1 : //玩家放棄此局 
							bout-- ;
							
							cout << endl << "-------------------結束-------------------" << endl ;
							cout << "玩家共贏 " << win_bout << "場" << endl ;
							cout << "電腦共贏 " << lost_bout << "場" << endl ;
							cout << "玩家還剩 " << player_clothes_input << "件" << endl ;
							cout << "電腦還剩 " << computer_clothes << "件" << endl << endl ;
							cout << "==========================================="<< endl ;
							cout << "此局你玩了 " << bout << "場" << endl ;
							cout << "已遊完 " << innings << "局" << endl << endl ;	
							cout << "總勝 "  << win_innings << " 局" << endl ;
							cout << "總敗 "  << lost_innings << " 局" << endl << endl ;	
							cout << "請輸入 (-1 離開遊戲) (-2 開始下一場)" << endl ;
							
							cin >> replay ;
							cout << endl << endl ;
							validInput = false ; // 出拳 不合規  
							break ;
					 
						default: 
							cout << "-----error-----請不要亂出-----error-----" << endl << endl ;
							bout-- ;
							validInput = false ; // 出拳 不合規  
				}// 判斷玩家出拳的結果
		
				computer_fist = 1 + rand() % 3 ; // 電腦出拳 
		
				if( validInput )
				{
		
					switch( computer_fist ) // 判斷電腦出拳的結果 
					{
						case 1: 
							cout << "電腦出的是剪刀" << endl ;
							break ;
					 	
						case 2:
							cout << "電腦出的是石頭" << endl ;
							break ;
				 	
						case 3:
							cout << "電腦出的是布" << endl ;
							break ;
					}// 判斷電腦出拳的結果
					
					if( ( 3 + player_fist - computer_fist ) % 3 == 1 ) // 判斷此場 輸贏的結果 
					{
					cout << "********************贏********************" << endl ;
					computer_clothes-- ;
					win_bout++ ;
					}// 判斷此場 輸贏的結果 
					
					else if( ( 3 + player_fist - computer_fist ) % 3 == 2 ) // 判斷此場 輸贏的結果  
					{
					cout << "********************輸********************" << endl ;
					player_clothes_input-- ;
					lost_bout++ ;
					}// 判斷此場 輸贏的結果 
					
					else  // 判斷此場 輸贏的結果  
					{
					cout << "*******************平手*******************" <<endl ;
					}// 判斷此場 輸贏的結果 
					
					
					cout << "玩家還剩 " << player_clothes_input << "件" << endl ; // 提示所剩 衣服數 
					cout << "電腦還剩 " << computer_clothes << "件" << endl ;
					cout << endl ;
					
					
					if( player_clothes_input == 0 ) // 判斷 有無衣服全脫光者 
					{
						clothes_output = false ;
					}// 判斷 有無衣服全脫光者 
					
					else if( computer_clothes == 0 ) // 判斷 有無衣服全脫光者 
					{
						clothes_output = false ;
					}// 判斷 有無衣服全脫光者 
					
				}
				if( computer_clothes == 0 ) // 判斷此局 勝敗的結果  
				{
					cout << endl << "-------------------結束-------------------" << endl;
					win_innings++ ; // 增加 總勝局數 
					
					cout << "電腦脫光了 " << "                                        you win" << endl << endl;// 勝局 
					cout << "玩家共贏 " << win_bout << "場" << endl;
					cout << "電腦共贏 " << lost_bout << "場" << endl << endl;
					cout << "===========================================" << endl ;
					cout << "此局你玩了 " << bout << "場" << endl ;
					cout << "已遊完 " << innings << "局" << endl << endl ;	
					cout << "總勝 "  << win_innings << " 局" << endl ;
					cout << "總敗 "  << lost_innings << " 局" << endl << endl ;
					cout << "請輸入 (-1 離開遊戲) (-2 開始下一場)" << endl ; // 是否繼續遊玩  
					
					cin >> replay ;	
					cout << endl << endl ;
					break ;
				}// 判斷此局 勝敗的結果
				
				else if( player_clothes_input == 0 ) // 判斷此局 勝敗的結果  
				{
					cout << endl << "-------------------結束-------------------" << endl ;
					lost_innings++ ; // 增加 總敗局數  
					
					cout << "玩家脫光了 " << "                                        you lost" << endl << endl ; // 敗局 
					cout << "玩家共贏 " << win_bout << "場" << endl;
					cout << "電腦共贏 " << lost_bout << "場" << endl << endl;
					cout << "===========================================" << endl ;
					cout << "此局你玩了 " << bout << "場" << endl ;	
					cout << "已遊完 " << innings << "局" << endl << endl;	
					cout << "總勝 "  << win_innings << " 局" << endl ;
					cout << "總敗 "  << lost_innings << " 局" << endl << endl ;
					cout << "請輸入 (-1 離開遊戲) (-2 開始下一場)" << endl  ;  // 是否繼續遊玩 
					
					cin >> replay ;	
					cout << endl << endl ;
					break ;
					
				}// 判斷此局 勝敗的結果
			}// 判斷是否 放棄此局
		}// 判斷衣服 是否在正確值內 並開始猜拳 
	}// 開新一局遊戲 判斷
}// 結束 執行程式 
