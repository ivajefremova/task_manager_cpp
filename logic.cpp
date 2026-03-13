#include <iostream>
using namespace std;

class Task {
    public:
    std::string description;
    int priority;
    Task* next;
};

class TaskManager {
    private:
    Task* head;

    public:
    TaskManager() {
        head = nullptr;
    }

};

