#include "Menu.h"

	int crrNum = 1;
	int switch_on = 0;
	char del = 'd';
	bool on = false;
	string menuName = "";

int main() {
	
	Menu menu = Menu();

	do {
		cout << "��ȣ�� �Է��ϼ���.'\n'"
			"1.�޴� ��� '\n'"
			"2.�޴� �߰� '\n'"
			"3.�޴� ���� '\n'"
			"4.����" << endl;
		cin >> switch_on;
		
		switch (switch_on){
			case 1:
				menu.printMenu();
				break;
			case 2:
				cout << "�߰��� �޴��� �Է��ϼ���.(�ִ� 10����)" << endl;
				cin >> menuName;
				menu.addMenu(crrNum, menuName);
				break;

			case 3:
				cout << "���������� �߰��� �޴��� ����ðڽ��ϱ�?(y/n)";
				cin >> del;
				menu.delMenu(del, crrNum);
				break;

			case 0:
				on = false;
				cout << "���α׷��� �����մϴ�.";
				break;

			default:
				"��ȣ�� �ٽ� �Է��ϼ���.";
				break;
		}
	} while (on == true);
	
	
	

	return 0;
}