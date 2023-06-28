# Calculator-API  

This is a simple calculator application built using the Crow C++ microframework. It provides a web API for performing basic arithmetic operations such as addition, subtraction, multiplication, and division.  

## Getting Started

To use the calculator app, follow these steps:  

1. Clone the repository or download the source code.
2. Build the application using a C++ compiler.
3. Run the compiled executable to start the calculator server.

## Usage  

The calculator app exposes four API endpoints for different arithmetic operations:  

* /add/value1/value2: Performs addition of _value1_ and _value2_.
* /subtract/value1/value2: Performs subtraction _value2_ from _value1_
* /multiply/value1/value2: Performs multiplication of _value1_ and _value2_
* /divide/value1/value2: Performs division of _value1_ by _value2_

Replace _value1_ and _value2_ in the URL path with the desired numeric values.  

Example usage:  

* To add two numbers, use the following URL: http://localhost:8080/add/3.5/2.1
* To subtract two numbers, use the following URL: http://localhost:8080/subtract/5.9/1.2
* To multiply two numbers, use the following URL: http://localhost:8080/multiply/2.5/4.2
* To divide two numbers, use the following URL: http://localhost:8080/divide/10/2

## Error Handling

The calculator app handles division by zero errors. If the divisor (_value2_) is zero in the _/divide_ endpoint, a **DIVIDE BY 0 Error!** message will be thrown. 

## Dependencies  
The calculator app relies on the following dependencies:  
* Crow C++ microframework

Make sure to install the necessary dependencies before building and running the application  

Feel free to customize and enhance this README file to suit your specific needs.

