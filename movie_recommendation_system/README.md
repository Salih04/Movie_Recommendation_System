# Movie Recommendation System #
## Overview
This project contains two separate implementations of a Movie Recommendation System, written in different programming languages:

Python Version: Developed by [Salih Camcı](https://github.com/Salih04).
C++ Version: Developed by [Yaman Karakoca](https://github.com/ykarakoca).
Both versions of the system operate independently and provide personalized movie recommendations based on user preferences, ratings, or other input data.

# Features

## Python Version:
Uses libraries like pandas, numpy, and scikit-learn.
Provides functionality for data preprocessing, similarity computation, and recommendation generation using collaborative filtering.

## C++ Version:
Implements efficient algorithms for movie recommendation.
Uses custom data structures and optimizations for faster performance.
Each version has its own set of dependencies and instructions for setup and execution.

## Setup
Python Version
Prerequisites:
Python 3.x

## Required libraries: 
Install dependencies by running:
pip install -r requirements.txt
Running the Python version:

### To generate movie recommendations, execute the following command:
python movie_recommender.py

***Input Data***: The input file should be in CSV format with movies.csv. Modify the data_path in the script to point to your dataset if any error occurs.

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
Integrate both versions into a unified interface or API.
Extend functionality with more advanced recommendation algorithms.
Add a web interface for easier interaction with the system.

# Contributors #
Salih Camcı (https://github.com/Salih04) - Python Version
Yaman Karakoca (https://github.com/ykarakoca) - C++ Version
