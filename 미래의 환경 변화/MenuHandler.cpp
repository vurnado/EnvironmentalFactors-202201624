#include <iostream>
#include "EnvironmentalManager.cpp"

using namespace std;

class MenuHandler {
public:
    void displayMenu() {
        cout << "환경 변화 요인을 선택하세요:\n";
        cout << "1. 온실가스 배출 증가\n";
        cout << "2. 산림 감소\n";
        cout << "3. 해양 오염\n";
        cout << "4. 무분별한 자원 사용\n";
        cout << "선택: ";
    }

    void processUserInput(EnvironmentalManager& manager) {
        int choice;
        cin >> choice;
        manager.displayEffectsForChoice(choice);
    }
};
