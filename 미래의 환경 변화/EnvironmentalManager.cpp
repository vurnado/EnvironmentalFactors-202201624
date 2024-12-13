#include "EnvironmentalFactors.h"
#include <vector>
#include <memory>
#include <iostream>

using namespace std;

class EnvironmentalManager {
private:
    vector<unique_ptr<EnvironmentalFactor>> factors; // 환경 요인 객체 배열

public:
    EnvironmentalManager() {
        // 환경 요인 객체 초기화
        factors.push_back(make_unique<GreenhouseGas>());
        factors.push_back(make_unique<Deforestation>());
        factors.push_back(make_unique<OceanPollution>());
        factors.push_back(make_unique<ResourceOveruse>());
    }

    void displayEffectsForChoice(int choice) {
        try {
            if (choice < 1 || choice > 4) {
                throw InvalidChoiceException("잘못된 입력입니다. 1~4 사이의 숫자를 입력하세요.");
            }
            cout << "선택한 요인의 예상되는 결과:\n";
            factors[choice - 1]->displayEffects();
        }
        catch (const InvalidChoiceException& e) {
            cerr << "오류: " << e.what() << endl;
        }
        catch (...) {
            cerr << "알 수 없는 오류가 발생했습니다." << endl;
        }
    }
};
