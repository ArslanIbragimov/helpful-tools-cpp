#pragma once

#include <iostream>
#include <chrono>

#define BENCH_F(func)                               \
    {                                                                    \
        auto start = std::chrono::high_resolution_clock::now();          \
        func;                                                            \
        auto end = std::chrono::high_resolution_clock::now();            \
        auto duration = std::chrono::duration_cast<std::chrono::duration<double>>(end - start).count(); \
        std::cout << "Execution time: for function: " << #func << " - " << duration << " s\n";           \
    }
