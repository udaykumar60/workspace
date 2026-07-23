#include <stdio.h>
#include <string.h>

#define MAX_TASKS 50
#define TASK_LEN 100

// Structure to hold task details
struct Task {
    char description[TASK_LEN]; // String to store what the task is
    int is_done;                // 0 for incomplete, 1 for complete
};

// Function prototypes 
// 'list' acts as a pointer to the start of the array
// 'count' is passed as a pointer when we need to modify the original value
void addTask(struct Task *list, int *count);
void viewTasks(struct Task *list, int count);
void markDone(struct Task *list, int count);

int main() {
    struct Task todoList[MAX_TASKS]; // Array of Task structures
    int taskCount = 0;               // Tracks how many tasks are currently in the list
    int choice;

    while (1) {
        printf("\n--- TASK MANAGER (Pointer Version) ---");
        printf("\n1. Add Task\n2. View Tasks\n3. Mark Task Done\n4. Exit");
        printf("\nChoice: ");
        scanf("%d", &choice);
        
        // Clean the input buffer to prevent fgets from skipping in addTask
        getchar(); 

        if (choice == 1) {
            // Pass the array (decayed to pointer) and the address of taskCount
            addTask(todoList, &taskCount);
        } 
        else if (choice == 2) {
            // Only need to pass the value of taskCount since we aren't changing it
            viewTasks(todoList, taskCount);
        } 
        else if (choice == 3) {
            markDone(todoList, taskCount);
        }
        else if (choice == 4) {
            printf("Exiting...\n");
            break;
        }
    }
    return 0;
}

// 'list' points to todoList[0], 'count' points to the taskCount variable in main
void addTask(struct Task *list, int *count) {
    if (*count < MAX_TASKS) {
        printf("\nEnter the new task: ");
        
        // fgets reads the string including spaces
        // list[*count] accesses the specific Task struct at the current index
        fgets(list[*count].description, TASK_LEN, stdin);
        
        // strcspn finds the newline character added by fgets and replaces it with a null terminator (0)
        list[*count].description[strcspn(list[*count].description, "\n")] = 0;
        
        // Set new task as not done
        list[*count].is_done = 0;
        
        // Use the pointer to increment the actual taskCount variable back in main
        (*count)++; 
        printf("Task added!\n");
    } else {
        printf("List full!\n");
    }
}

// Displays all tasks currently in the array
void viewTasks(struct Task *list, int count) {
    if (count == 0) {
        printf("\nYour list is empty.\n");
        return;
    }
    printf("\n--- YOUR TASKS ---");
    for (int i = 0; i < count; i++) {
        // Ternary: if is_done is true (1), print 'X', else print ' '
        printf("\n%d. [%c] %s", i + 1, list[i].is_done ? 'X' : ' ', list[i].description);
    }
    printf("\n");
}

// Marks a specific task as completed
void markDone(struct Task *list, int count) {
    int index;
    viewTasks(list, count);
    if (count == 0) return;

    printf("\nEnter task number to mark as done: ");
    scanf("%d", &index);

    // Validate the task number exists (human-readable index 1 to count)
    if (index > 0 && index <= count) {
        // Subtract 1 to match the 0-based array index
        list[index - 1].is_done = 1;
        printf("Task %d updated!\n", index);
    } else {
        printf("Invalid task number.\n");
    }
}