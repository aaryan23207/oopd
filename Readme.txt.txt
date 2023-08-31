**Readme.txt**



This program reads data from a CSV file named "india_data.csv" to analyze investment performance based on interest rates, inflation, and investment years. The program calculates the actual money received and the value of money obtained after adjusting for inflation. Follow the instructions below to build and run the program:

**1. Compilation:**
Compile the program using a C++ compiler such as g++.

```bash
g++ -o ass1q1.cpp
```

**2. Input File Format:**
The input data is expected to be in CSV format with the following columns:
- Serial Number
- Year
- Interest Rate (%)
- Inflation (%)
- Government
- Continent

Example row: `1,2020,5.0,3.0,GovernmentName,Asia`

**3. Running the Program:**
After compilation, run the program by executing the compiled binary.

```bash
./ass1q1
```

**4. Program Execution:**
Upon running the program, you will be prompted to enter the invested amount and the year of investment. The program will then read the data from "india_data.csv" and perform calculations based on the provided input.

**5. Output:**
The program will display two calculated values:
- **Actual Money Received:** This is the final amount considering the interest earned over the specified investment period.
- compute and print how much value the money obtained after adding interest had in the year it was invested.

**6. Notes:**
- Ensure that the "india_data.csv" file is present in the same directory as the compiled binary.
- The program assumes that the CSV file is correctly formatted and does not perform extensive error checking.
- The interest rates and inflation percentages should be provided as numeric values without the percentage symbol.

**7. Code Attribution:**
The code provided in the program ("ass1q1.cpp") and ("ass1q2") was written by Aaryan singhwal. 
