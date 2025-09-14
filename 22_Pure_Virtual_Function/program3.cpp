// * An interface-like class with only pure virtual functions.

#include <iostream>

// This class acts like an interface
class ILogger {
public:
    virtual void logMessage(const char* message) = 0;
    virtual ~ILogger() {} // Virtual destructor is important for interfaces
};

class ConsoleLogger : public ILogger {
public:
    void logMessage(const char* message) override {
        std::cout << "[CONSOLE]: " << message << std::endl;
    }
};

void doSomething(ILogger& logger) {
    logger.logMessage("Doing something important.");
}

int main() {
    ConsoleLogger logger;
    doSomething(logger);
    return 0;
}
