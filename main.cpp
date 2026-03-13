#include <iostream>
#include "logic.cpp"  
using namespace std;

int main(){

    int number_of_tasks;
    cout << "enter the number of tasks you would like to manage: ";
    cin >> number_of_tasks;
    cin.ignore(); // clear the input buffer

    string task_description;
    int priority;

    TaskManager instance;

    for (int i = 0; i < number_of_tasks; i++) {
        cout << "enter task description: ";
        getline(cin, task_description);
        cout << "enter task priority: ";
        cin >> priority;
        cin.ignore(); // clear the input buffer

        instance.addTask(task_description, priority);
    }

    instance.displayTasks();

    return 0;
    
}