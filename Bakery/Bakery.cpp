// Bakery.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <queue> 

using namespace std;

struct Process {
    int pid;
    int ptime;
};

int main()
{
    int index = 0;
    queue<Process> Queue;
    
    while (index < 10) {

        Process p;
        p.pid = index;
        p.ptime = 10;

        Queue.push(p);

        std::cout << index << std::endl;

        index++;
    }
    while (Queue.size()!=0) {

        Process tempp=Queue.front();
        cout << tempp.pid << " ";
        Queue.pop();


    }
}

