#include "MenuHandler.cpp"

int main() {
    MenuHandler menuHandler;
    EnvironmentalManager manager;

    // 메뉴 표시 및 사용자 입력 처리
    menuHandler.displayMenu();
    menuHandler.processUserInput(manager);

    return 0;
}
