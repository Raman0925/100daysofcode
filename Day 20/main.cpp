#include "logger_factory.hpp"


int  main(){

    Ilogger* debugLogger = LoggerFactory::createLogger(LogLevel::DEBUG);
    Ilogger* infoLogger = LoggerFactory::createLogger(LogLevel::Info);
    Ilogger* errorLogger = LoggerFactory::createLogger(LogLevel::ERROR);

    debugLogger->log("This is a debug log msg");
    infoLogger->log("This is a info log msg");
    errorLogger->log("This is a error log msg");

    delete debugLogger;
    delete infoLogger;
    delete errorLogger;
    return 0;
}
