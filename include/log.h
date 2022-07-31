#pragma once
#include <memory>

namespace ev2li {
class Logger {
public:
    typedef std::shared_ptr<Logger> ptr;
    Logger();
    ~Logger();

private:
    
}; 
} /* end ns ev2li*/