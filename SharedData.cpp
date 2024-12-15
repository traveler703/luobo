#include "SharedData.h"

SharedData* SharedData::_instance = nullptr;

SharedData* SharedData::getInstance()
{
    if (_instance == nullptr) {
        _instance = new SharedData();
    }
    return _instance;
}

SharedData::SharedData()
{
    
}

SharedData::~SharedData()
{
    if (_instance) {
        delete _instance;
    }
}
