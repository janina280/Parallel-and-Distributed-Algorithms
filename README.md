<h1 align="center"> Text Processing </h1> <br>
<p align="center">
</p>

## Table of Contents

- [Introduction](#introduction)
- [Programming language](#programming_language)
- [Framework](#framework)
- [Machine specs](#machine_specs)
- [Sequential execution times](#sequential-execution-times)

## Introduction

Counting the frequency of words in a large text file can be parallelized by processing different parts of the file on separate threads or processors.

## Programming language

* C++
  
## Framework

* STL Parallel
* MPI

## Machine specs

* Processor (CPU):  AMD Ryzen 7 7735HS with Radeon Graphics           3.20 GHz;

* RAM:16.0 GB ;

* SSD 512 GB;

## Sequential execution times

-10k words: 1911 microseconds

-64k words: 3222 microseconds

-100k words: 2716 microseconds

-500k words: 6279 microseconds

-1M words: 13604 microseconds

## Parallel execution times STL

-10k words: 14950 microseconds

-64k words: 14003 microseconds

-100k words: 14474 microseconds

-500k words: 30764 microseconds

-1M words: 58858 microseconds

## Parallel execution times MPI

-10k words:  12638 microseconds

-64k words:  12005 microseconds 

-100k words:  9040 microseconds

-500k words: 11242 microseconds

-1M word: 13504 microseconds 


