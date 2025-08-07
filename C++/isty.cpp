include<bits/stdc++.h>
#include <unistd.h>
#include <sys/wait.h>
#include <semaphore.h>
#define MAX_LINES 5
using namespace std;
sem_t s1,s2;
int error_count;
int i1=0,i2=0;
string person1[MAX_LINES] = {
    "Hey! Long time no see. How have you been?",
    "I still can't get over how much I love iced coffee.",
    "Work has been hectic, but iced coffee keeps me going.",
    "By the way, did you try that new coffee shop?",
    "Let's grab some iced coffee this weekend!"
};
string person2[MAX_LINES] = {
    "I'm doing well! Life's been a rollercoaster.",
    "You know me—I always go for iced tea.",
    "Oops, I meant iced tea again!",
    "That coffee shop? Yes, I had iced tea there.",
    "Sure, iced tea—oops again—sounds perfect!"
};
void correct_errors(string &line) {
    int pos = line.find("iced tea");
    while(pos<line.length()){
        line.replace(pos,8,"iced coffee");
        error_count++;
        pos=line.find("iced tea",pos+11);
    }
}
int main() {
    sem_init(&s1,0,1);
    sem_init(&s2,0,0);
    if (fork() == 0) {
       while(i1<MAX_LINES)
    {
        sem_wait(&s1);
        cout << "Person 1: " << person1[i1] << endl;
        sleep(1);
        sem_post(&s2);
        i1++;
    }
    } else {
         while(i2<MAX_LINES)
    {
        sem_wait(&s2);
        correct_errors(person2[i2]);
        cout << "Person 2: " << person2[i2] << endl;
        sleep(1);
        sem_post(&s1);
        i2++;
    }
        wait(NULL);
    }
    cout << "\nConversation complete.\n";
        cout << "\nTotal corrections = " << error_count << endl;
        sem_destroy(&s1);
        sem_destroy(&s2);

    return 0;
}
