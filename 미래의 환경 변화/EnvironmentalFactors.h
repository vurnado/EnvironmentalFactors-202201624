#pragma once
#ifndef ENVIRONMENTALFACTORS_H
#define ENVIRONMENTALFACTORS_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <stdexcept>

using namespace std;

// �߻� Ŭ�����Դϴ�
class EnvironmentalFactor {
public:
    virtual void displayEffects() const = 0; // virtual �Լ��Դϴ�
    virtual ~EnvironmentalFactor() = default;
};

// �� ������ ��Ÿ���� Ŭ�����Դϴ�
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

// ���� Ŭ�����Դϴ�
class InvalidChoiceException : public runtime_error {
public:
    explicit InvalidChoiceException(const string& msg) : runtime_error(msg) {}
};

#endif 
