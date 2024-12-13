#pragma once
#ifndef ENVIRONMENTALFACTORS_H
#define ENVIRONMENTALFACTORS_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <stdexcept>

using namespace std;

// 추상 클래스입니다
class EnvironmentalFactor {
public:
    virtual void displayEffects() const = 0; // virtual 함수입니다
    virtual ~EnvironmentalFactor() = default;
};

// 각 요인을 나타내는 클래스입니다
class GreenhouseGas : public EnvironmentalFactor {
public:
    void displayEffects() const override;
};

class Deforestation : public EnvironmentalFactor {
public:
    void displayEffects() const override;
};

class OceanPollution : public EnvironmentalFactor {
public:
    void displayEffects() const override;
};

class ResourceOveruse : public EnvironmentalFactor {
public:
    void displayEffects() const override;
};

// 예외 클래스입니다
class InvalidChoiceException : public runtime_error {
public:
    explicit InvalidChoiceException(const string& msg) : runtime_error(msg) {}
};

#endif 
