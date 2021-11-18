#include "Menu.h"

	int crrNum = 1;
	int switch_on = 0;
	char del = 'd';
	bool on = false;
	string menuName = "";

int main() {
	
	Menu menu = Menu();

	do {
		cout << "번호를 입력하세요.'\n'"
			"1.메뉴 출력 '\n'"
			"2.메뉴 추가 '\n'"
			"3.메뉴 삭제 '\n'"
			"4.종료" << endl;
		cin >> switch_on;
		
		switch (switch_on){
			case 1:
				menu.printMenu();
				break;
			case 2:
				cout << "추가할 메뉴를 입력하세요.(최대 10글자)" << endl;
				cin >> menuName;
				menu.addMenu(crrNum, menuName);
				break;

			case 3:
				cout << "마지막으로 추가한 메뉴를 지우시겠습니까?(y/n)";
				cin >> del;
				menu.delMenu(del, crrNum);
				break;

			case 0:
				on = false;
				cout << "프로그램을 종료합니다.";
				break;

			default:
				"번호를 다시 입력하세요.";
				break;
		}
	} while (on == true);
	
	
	

	return 0;
}