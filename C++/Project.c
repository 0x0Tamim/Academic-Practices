#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[100];
    int currentSemester;
    char coursesTaken[10][50];
    float cgpa;
    char sex[10];
    char session[20];
    struct Student* next;
};

struct Student* head = NULL;


struct Student* createStudent();
void insertAtBeginning();
void insertAtEnd();
void insertAtPosition();
void searchRecord();
void updateRecord();
void deleteRecord();
void displayRecords();
void reserializeIDs();
void freeMemory();

int main() {
    int choice;

    do {
        printf("\nStudent Information Management:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Search record\n");
        printf("5. Update record\n");
        printf("6. Delete record\n");
        printf("7. Display records\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                insertAtBeginning();
                break;
            case 2:
                insertAtEnd();
                break;
            case 3:
                insertAtPosition();
                break;
            case 4:
                searchRecord();
                break;
            case 5:
                updateRecord();
                break;
            case 6:
                deleteRecord();
                break;
            case 7:
                displayRecords();
                break;
            case 8:
                freeMemory();
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 8);

    return 0;
}

struct Student* createStudent() {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    if (newStudent == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    printf("Enter student name: ");
    fgets(newStudent->name, sizeof(newStudent->name), stdin);
    newStudent->name[strcspn(newStudent->name, "\n")] = '\0';

    printf("Enter current semester: ");
    scanf("%d", &newStudent->currentSemester);
    getchar();

    printf("Enter CGPA: ");
    scanf("%f", &newStudent->cgpa);

    printf("Enter sex: ");
    scanf("%s", newStudent->sex);

    printf("Enter session: ");
    scanf("%s", newStudent->session);

    printf("Enter number of courses taken (max 10): ");
    int numCourses;
    scanf("%d", &numCourses);
    getchar();
    for (int i = 0; i < numCourses; i++) {
        printf("Enter course %d: ", i + 1);
        fgets(newStudent->coursesTaken[i], sizeof(newStudent->coursesTaken[i]), stdin);
        newStudent->coursesTaken[i][strcspn(newStudent->coursesTaken[i], "\n")] = '\0';
    }

    for (int i = numCourses; i < 10; i++) {
        newStudent->coursesTaken[i][0] = '\0';
    }

    newStudent->next = NULL;
    return newStudent;
}

void insertAtBeginning() {
    struct Student* newStudent = createStudent();
    newStudent->next = head;
    head = newStudent;
    reserializeIDs();
    printf("Student record inserted at the beginning.\n");
}

void insertAtEnd() {
    struct Student* newStudent = createStudent();
    if (head == NULL) {
        head = newStudent;
    } else {
        struct Student* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newStudent;
    }
    reserializeIDs();
    printf("Student record inserted at the end.\n");
}

void insertAtPosition() {
    int position;
    printf("Enter the position to insert the record: ");
    scanf("%d", &position);
    getchar();

    if (position < 0) {
        printf("Invalid position.\n");
        return;
    }

    if (position == 0) {
        insertAtBeginning();
        return;
    }

    struct Student* newStudent = createStudent();
    struct Student* temp = head;


    for (int i = 0; i < position-2 ; i++) {
        if (temp == NULL) {
            printf("Position out of bounds.\n");
            free(newStudent);
            return;
        }
        temp = temp->next;
    }


    newStudent->next = temp->next;
    temp->next = newStudent;
    reserializeIDs();
    printf("Student record inserted at position %d.\n", position);
}


void searchRecord() {
    int id;
    printf("Enter student ID to search: ");
    scanf("%d", &id);

    struct Student* temp = head;
    while (temp != NULL) {
        if (temp->id == id) {
            printf("Student found:\n");
            printf("ID: %d\n", temp->id);
            printf("Name: %s\n", temp->name);
            printf("Semester: %d\n", temp->currentSemester);
            printf("CGPA: %.2f\n", temp->cgpa);
            printf("Sex: %s\n", temp->sex);
            printf("Session: %s\n", temp->session);
            printf("Courses: ");
            for (int i = 0; i < 10 && temp->coursesTaken[i][0] != '\0'; i++) {
                printf("%s ", temp->coursesTaken[i]);
            }
            printf("\n\n");
            return;
        }
        temp = temp->next;
    }
    printf("Student with ID %d not found.\n", id);
}

void updateRecord() {
    int id;
    printf("Enter student ID to update: ");
    scanf("%d", &id);
    getchar();

    struct Student* temp = head;
    while (temp != NULL) {
        if (temp->id == id) {
            printf("Enter new CGPA: ");
            scanf("%f", &temp->cgpa);
            getchar();

            printf("Enter new semester: ");
            scanf("%d", &temp->currentSemester);
            getchar();

            printf("Student record updated.\n");
            return;
        }
        temp = temp->next;
    }
    printf("Student with ID %d not found.\n", id);
}

void deleteRecord() {
    int id;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    struct Student *temp = head, *prev = NULL;

    if (temp != NULL && temp->id == id) {
        head = temp->next;
        free(temp);
        printf("Student record deleted.\n");
        return;
    }

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Student with ID %d not found.\n", id);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Student record deleted.\n");
}

void reserializeIDs() {
    struct Student* temp = head;
    int id = 1;
    while (temp != NULL) {
        temp->id = id++;
        temp = temp->next;
    }
}

void displayRecords() {
    struct Student* temp = head;
    if (temp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\nStudent Records:\n");
    while (temp != NULL) {
        printf("ID: %d\n", temp->id);
        printf("Name: %s\n", temp->name);
        printf("Semester: %d\n", temp->currentSemester);
        printf("CGPA: %.2f\n", temp->cgpa);
        printf("Sex: %s\n", temp->sex);
        printf("Session: %s\n", temp->session);
        printf("Courses: ");
        for (int i = 0; i < 10 && temp->coursesTaken[i][0] != '\0'; i++) {
            printf("%s ", temp->coursesTaken[i]);
        }
        printf("\n\n");
        temp = temp->next;
    }
}

void freeMemory() {
    struct Student* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("All records have been freed.\n");
}
