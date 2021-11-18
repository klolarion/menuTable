#include <iostream>
using namespace std;

class Menu {
private:
	struct menu_str{
		int num = 0;;
		string name = "Empty Menu";
	};
	menu_str menu_arr[10];
	menu_str* m;
public:

	void start() {		
		m = (menu_str*)malloc(sizeof(menu_str) * 10);

		for (int i = 0; i < 10; i++) {
			memset(&m[i], 0, sizeof(menu_str));
			memset(&m[i], 0, sizeof(menu_str));
		}		
	}

	void printMenu() {
		for (int i = 0; i < 10; i++) {
			if (m[i].name._Equal("Empty Menu") {
				break;
			}							
			printf("%d, %s", m[i].num, m[i].name);
		}
	}

	int addMenu(int &crrNum, string &menuName) {
		
		m[crrNum - 1].num = crrNum;
		m[crrNum].name = menuName;
		return 0;
	}

	int delMenu(char &del, int &crrNum) {
		if (del) {
			m[crrNum - 1].num = crrNum-1;
			m[crrNum].name = "Empty Menu";			
		}
		return 0;
	}
	
};