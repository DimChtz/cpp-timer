# cpp-timer
A simple timer for C++.

# How to use
#### Print something after 2 seconds
```cpp
#include <iostream>
#include "timer.hpp"

int main() {

  Timer::after(2000, []() {
    std::cout << "Done after 2 seconds !!!\n";
  });

  return 0;
}
```
#### Print something every 2 seconds ( 5 times in total )
```cpp
#include <iostream>
#include "timer.hpp"

int main() {

  Timer::every(2000, []() {
    static int laps = 1;
    std::cout << "Laps: << laps << !!!\n";
    return laps < 5;
  });

  return 0;
}
```
