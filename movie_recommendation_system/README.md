# Movie Recommendation System #
## Overview
This project contains two separate implementations of a Movie Recommendation System, written in different programming languages:

Python Version: Developed by [Salih Camcı](https://github.com/Salih04).
C++ Version: Developed by [Yaman Karakoca](https://github.com/ykarakoca).
Both versions of the system operate independently and provide personalized movie recommendations based on user preferences, ratings, or other input data.

# Features

## Python Version
Uses libraries like pandas, sys, and scikit-learn.
Provides functionality for data preprocessing, similarity computation, and recommendation generation using **content-based filtering**.

## C++ Version
Implements efficient algorithms for movie recommendation.
Uses custom data structures and optimizations for faster performance.

## Setup Prerequisites
Python 3.11.9

## Required libraries
- pip install -U scikit-learn
- pip install pandas
  
## Running the Python version

The Python version is executed using a launch.json configuration file, which allows you to run and debug the program through an integrated terminal (e.g., in VS Code).
The system takes a movie title as an argument, passed through the launch.json configuration.

## Running the Python version:
- Open the project in your editor (e.g., VS Code).
- Ensure that your launch.json file contains the appropriate configuration:
  "args": ["Sabrina (1995)"]  // Add your arguments here
  
Run the project by selecting the Python: Current File configuration in the debugger and start the process. The program will take a movie (e.g., "Sabrina (1995)") as an argument for recommendations.

***Input Data***: Modify the args field in launch.json to pass in different movie titles or arguments as input.

### C++ Version Prerequisites:
A C++ compiler (e.g., g++, clang)
CMake (optional, if using for build)

### Compiling:
Navigate to the C++ directory and compile the code:
g++ -o movie_recommender movie_recommender.cpp

### Running the C++ version:
After compiling, run the executable:
./movie_recommender
***Input Data***: Ensure that the input file (e.g., a CSV or text file) is formatted as expected by the C++ code. You may need to modify the file_path in the source code.

# Future Improvements #
- Integrate both versions into a unified interface or API.
- Extend functionality with more advanced recommendation algorithms.
- Add a web interface for easier interaction with the system.

# Contributors #
[Salih Camcı](https://github.com/Salih04) - Python Version
[Yaman Karakoca](https://github.com/ykarakoca) - C++ Version
