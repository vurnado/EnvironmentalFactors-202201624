#include "EnvironmentalFactors.h"

void GreenhouseGas::displayEffects() const {
    cout << "- 지구 평균 온도 상승\n";
    cout << "- 더 빈번한 기상이변\n";
    cout << "- 북극과 남극의 빙하 감소\n";
}

void Deforestation::displayEffects() const {
    cout << "- 이산화탄소 흡수 감소로 기후 변화 가속\n";
    cout << "- 서식지 파괴로 인한 생물 다양성 감소\n";
}

void OceanPollution::displayEffects() const {
    cout << "- 해양 생태계 파괴\n";
    cout << "- 플라스틱 축적으로 생물 오염 증가\n";
}

void ResourceOveruse::displayEffects() const {
    cout << "- 자원 고갈과 생태계 파괴\n";
    cout << "- 식량 부족 문제 심화\n";
}
