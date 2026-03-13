# C++ Task Manager (Linked List)

A lightweight, interactive application built in C++ that manages tasks using a custom-built **Singly Linked List** data structure.
It asks the user to enter tasks and set a priority number. Then the program lists them sorted by priority. Then the user is asked if they want to delete a Task. The program searches through the linked list and can delete the task in any place (top, bottom or middle of the list).
In logic.cpp we have the classes Task and TaskMenager. 
TaskMenager has 3 methods:
  1. addTask
  2. listTasks
  3. deleteTasks
They are used in main.cpp

## Features
- **Dynamic Memory Management**: Uses the Linked List to allocate and deallocate tasks in real-time.
- **Interactive Menu**: Allows users to input task descriptions (including spaces) and priority levels.
- **Custom Deletion Logic**: Features a pointer-bridging algorithm to remove tasks from the middle, head, or end of the list without memory leaks.

## Technical Stack
- **Language**: C++
- **Tools**: Git, VS Code

