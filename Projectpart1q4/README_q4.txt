# C++ Telecom Data Analyzer and Spectrum Allocator

This C++ program is designed to analyze telecom data and allocate spectrum based on certain criteria. It can read and manipulate data from CSV files related to subscribers, spectrum ranges, and spectrum requests. Below, you'll find information on how to use this program.

## Prerequisites

To run this program, you need to have a C++ compiler installed on your system. The program uses standard C++ libraries, so no additional dependencies are required.

## Getting Started

1. Clone this repository to your local machine.

2. Compile the program using your preferred C++ compiler:

    ```shell
    g++ main.cpp -o telecom_spectrum_allocator
    ```

3. Run the program:

    ```shell
    ./telecom_spectrum_allocator
    ```

## Program Features

### Spectrum Range Analysis

- The program can read spectrum range data from a CSV file ("spectrumRange.csv").
- It allows you to search for data based on a specific date and provides details about the spectrum range, company, circle, and revenue.

### Subscriber Information

- You can also analyze subscriber data from a CSV file ("subscribers.csv").
- The program provides options to print all subscriber data or search for specific information based on a date, company, location, or the number of subscribers.

### Spectrum Request Management

- The program can manage spectrum allocation requests from a CSV file ("spectrumRequest.csv").
- It can allocate spectrum based on specific criteria and check if the request meets certain conditions.

### Save Future Spectrum Data

- The program saves future spectrum data in a new CSV file ("spectrumRangenew.csv").
- It can predict future trends and allocate spectrum accordingly.

## Usage

Follow the on-screen instructions to use different program features. The program will guide you through data input, analysis, and spectrum allocation.

## Source Files

- The program consists of a header file "Projectq1-5.h" that defines the structures and classes used in the program.
- The main program logic is in "main.cpp."



## Contributing

If you want to contribute to this project, please create a pull request with your proposed changes.

