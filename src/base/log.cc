#include "log.h"
#include <iostream>

namespace ev2li{
Logger::Logger(){
    std::cout << "Logger construct"<< std::endl;
}

Logger::~Logger(){
    
}

} /* end ns ev2li*/