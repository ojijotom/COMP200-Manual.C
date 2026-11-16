cmake_minimum_required(VERSION 4.4)
project(Comp200 C)

set(CMAKE_C_STANDARD 11)

add_library(Comp200 STATIC library.c
        sum-average.c
        addition.c
        n-termsequence.c
        primenumber1-n.c
        armstrong.c
        algebra.c
        perfectnumber.c
        strongnumber.c
        root-quadraticequation.c
        operand-operator.c
        factorial-nonrecursive.c
        factorial-recursive.c
        gcd-recursive.c
        gcd-nonrecursive.c)
