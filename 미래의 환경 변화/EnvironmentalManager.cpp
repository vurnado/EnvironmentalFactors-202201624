#include "EnvironmentalFactors.h"
#include <vector>
#include <memory>
#include <iostream>

using namespace std;

class EnvironmentalManager {
private:
    vector<unique_ptr<EnvironmentalFactor>> factors; // ȯ�� ���� ��ü �迭

public:
    EnvironmentalManager() {
        // ȯ�� ���� ��ü �ʱ�ȭ
        factors.push_back(make_unique<GreenhouseGas>());
        factors.push_back(make_unique<Deforestation>());
        factors.push_back(make_unique<OceanPollution>());
        factors.push_back(make_unique<ResourceOveruse>());
    }

    void displayEffectsForChoice(int choice) {
        try {
            if (choice < 1 || choice > 4) {
                throw InvalidChoiceException("�߸��� �Է��Դϴ�. 1~4 ������ ���ڸ� �Է��ϼ���.");
            }
            cout << "������ ������ ����Ǵ� ���:\n";
            factors[choice - 1]->displayEffects();
        }
        catch (const InvalidChoiceException& e) {
            cerr << "����: " << e.what() << endl;
        }
        catch (...) {
            cerr << "�� �� ���� ������ �߻��߽��ϴ�." << endl;
        }
    }
};
