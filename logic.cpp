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

    void addTask(std::string desc, int prio) {
        Task* newTask = new Task();
        newTask->description = desc;
        newTask->priority = prio;
        newTask->next = head;
        head = newTask;

    }

    void displayTasks() {

        Task* current = head;
        while (current != nullptr) {
            cout << "Task: " << current->description << ", Priority: " << current->priority << endl;
            current = current->next;
        }
    }

};

