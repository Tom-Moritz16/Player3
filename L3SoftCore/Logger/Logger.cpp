#include "Logger.h"
#include <iostream>

namespace L3SoftCore
{

bool SendLog(ELog log)
{
    std::cout << "SendLog(" << static_cast<int>(log) << ") stub implementation" << std::endl;
    return true;
}

} // L3SoftCore