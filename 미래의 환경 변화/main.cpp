#include "MenuHandler.cpp"

int main() {
    MenuHandler menuHandler;
    EnvironmentalManager manager;

    // �޴� ǥ�� �� ����� �Է� ó��
    menuHandler.displayMenu();
    menuHandler.processUserInput(manager);

    return 0;
}
