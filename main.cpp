#include <iostream>
#include "logic.cpp"  
using namespace std;

int main(){

    int number_of_tasks;
    cout << "enter the number of tasks you would like to manage: ";
    cin >> number_of_tasks;


    string task_description;
    int priority;

    TaskManager instance;

    for (int i = 0; i < number_of_tasks; i++) {
        cout << "enter task description: ";
        cin >> task_description;
        cout << "enter task priority: ";
        cin >> priority;
   
        instance.addTask(task_description, priority);
    }
    
}