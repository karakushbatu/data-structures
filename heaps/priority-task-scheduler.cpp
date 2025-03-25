#include <iostream>
#include <queue>
#include <string>
#include <vector>

struct Task {
    std::string name;
    int priority;

    Task(std::string n, int p) : name(n), priority(p) {}

    // Min-heap için operator overload (öncelik düşükse öne geçsin)
    bool operator<(const Task& other) const {
        return priority > other.priority;
    }
};

class TaskScheduler {
private:
    std::priority_queue<Task> taskQueue;
public:
    void addTask(const std::string& name, int priority) {
        taskQueue.push(Task(name, priority));
        std::cout << "Added task: " << name << " with priority " << priority << std::endl;
    }

    void processTask() {
        if (taskQueue.empty()) {
            std::cout << "No tasks to process." << std::endl;
            return;
        }
        Task current = taskQueue.top();
        taskQueue.pop();
        std::cout << "Processing task: " << current.name << " (priority " << current.priority << ")" << std::endl;
    }

    void showAllTasks() {
        std::priority_queue<Task> copy = taskQueue;
        std::cout << "\nCurrent Tasks (sorted by priority):\n";
        while (!copy.empty()) {
            Task t = copy.top();
            copy.pop();
            std::cout << "- " << t.name << " (priority " << t.priority << ")" << std::endl;
        }
    }

    bool isEmpty() const {
        return taskQueue.empty();
    }
};

int main() {
    TaskScheduler scheduler;

    scheduler.addTask("Compile project", 2);
    scheduler.addTask("Write report", 1);
    scheduler.addTask("Fix bugs", 3);

    scheduler.showAllTasks();

    std::cout << "\nProcessing tasks...\n";
    while (!scheduler.isEmpty()) {
        scheduler.processTask();
    }

    return 0;
}
