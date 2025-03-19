#include <iostream>
#include <thread>
#include <chrono>

using namespace std;


namespace engine
{
    void init() {
        cout << "Initializing...";
        this_thread::sleep_for(chrono::seconds(1));
    }
}   
