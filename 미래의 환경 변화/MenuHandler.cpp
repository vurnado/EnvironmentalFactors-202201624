#include <iostream>
#include "EnvironmentalManager.cpp"

using namespace std;

class MenuHandler {
public:
    void displayMenu() {
        cout << "ȯ�� ��ȭ ������ �����ϼ���:\n";
        cout << "1. �½ǰ��� ���� ����\n";
        cout << "2. �긲 ����\n";
        cout << "3. �ؾ� ����\n";
        cout << "4. ���к��� �ڿ� ���\n";
        cout << "����: ";
    }

    void processUserInput(EnvironmentalManager& manager) {
        int choice;
        cin >> choice;
        manager.displayEffectsForChoice(choice);
    }
};
