#include <iostream>
using namespace std;

class Task {
    public:
    string description;
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

    void addTask(string desc, int prio) {
        Task* newTask = new Task();
        (*newTask).description = desc;   //set the description of the new task
        (*newTask).priority = prio;         //set the priority of the new task
        (*newTask).next = head;        //point the next of the new task to the current head (basically going down the list)
        head = newTask;           //then set the head to the new task (the new task is now the first element in the list)

    }

    void displayTasks() {

        Task* current = head;
        while (current != nullptr) {
            cout << "task: " << (*current).description << ", priority: " << (*current).priority << endl;
            current = (*current).next;         //gets the address of the next task and sets it as the current task

        }
    }

    void deleteTasks(string target){

        Task* current = head;           //current is a pointer to the address of the pointer head (the first element in the list)
        Task* prev = nullptr;
        while (current != nullptr && (*current).description != target) {
            prev = current;            //set the previous to the current task
            current = (*current).next;      //set the current to the next task (the address of the next task) 
        }

        if (current == nullptr) {             //reached the end of the list without finding the target task
            cout << "Task not found." << endl;
            return;
        }

        if (prev == nullptr) {       //we are at the top of the list, here is the target 
            head = (*current).next;       // set the top to be the next 
        } 
        else {
            (*prev).next = (*current).next;   // we are in the middle so set the next of the prev to be the next of the current
        }

        delete current;              
        cout << "'" << target << "' deleted successfully." << endl;

    }

    
};
