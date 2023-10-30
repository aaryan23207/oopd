# C++ Spectrum Request Combiner and Allocator

This C++ program is designed to combine and sort spectrum allocation requests from multiple CSV files. It also allows you to allocate spectrum based on specific criteria. Below, you'll find information on how to use this program.

## Prerequisites

To run this program, you need to have a C++ compiler installed on your system. The program uses standard C++ libraries, so no additional dependencies are required.

## Getting Started

1. Clone this repository to your local machine.

2. Compile the program using your preferred C++ compiler:

    ```shell
    g++ main.cpp -o spectrum_allocator
    ```

3. Run the program:

    ```shell
    ./spectrum_allocator
    ```

## Program Features

### CSV File Combining and Sorting

- The program reads data from two input CSV files ("spectrumRequest.csv" and "MVNOSpectrum.csv") containing requests for spectrum allocation.
- It combines the data and sorts the requests by date in ascending order.
- The sorted data is saved in an output CSV file named "combined_sorted.csv."

### Spectrum Allocation

- The program allows you to allocate spectrum based on specific criteria.
- You can choose to allocate spectrum to licensed companies or Mobile Virtual Network Operators (MVNOs).
- Spectrum is allocated to locations based on usage density.
- You can view past requests and allocate spectrum for new requests.

## Usage

Follow the on-screen instructions to use different program features. The program will guide you through data input, allocation, and viewing past requests.

## Source Files

- The program consists of multiple source files, including "ProjectQ6.h."
- You can find the main program logic in "main.cpp."
- The header file "ProjectQ6.h" defines the structures and classes used in the program.



## Contributing

If you want to contribute to this project, please create a pull request with your proposed changes.

## Contact

If you have any questions or need assistance, please feel free to contact the author:

Author: Aaryan singhwal
MT23207

