#ifndef __TIMER_HPP__
#define __TIMER_HPP__

#include <functional>
#include <chrono>
#include <thread>

class Timer {

public:

    Timer() = delete;

    static void every( long long ms, std::function<bool()> fn ) {

        do {

            std::this_thread::sleep_for( std::chrono::milliseconds(ms) );

        } while ( fn() );


    }

    static void after( long long ms, std::function<void()> fn ) {

        std::this_thread::sleep_for( std::chrono::milliseconds(ms) );

        fn();

    }

};

#endif
