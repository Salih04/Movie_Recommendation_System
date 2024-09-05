**Content-Based Movie Recommendation System**

This project is a content-based movie recommendation system built using Python and C++. The system recommends movies to users based on their preferences by analyzing movie features such as genre, director, actors, and plot descriptions.

**Features**
- Content-Based Filtering: Recommends movies based on the content similarity to what the user has liked in the past.
- Hybrid Implementation: Combines the strengths of Python for machine learning and data manipulation with C++ for efficient data processing.
- Customizable: Easily extendable to include more features or use other recommendation strategies.

**Technologies Used**
- Python: For machine learning, data processing, and recommendation logic.
- C++: For performance-critical operations and data handling.

**Libraries:**
- Python: pandas, scikit-learn, numpy .  
- C++: iostream, fstream, vector, sstream, algorithm, string , map.

**Installation**
1.	 Clone the repository:
   git clone https://github.com/Salih04 /movie-recommendation-system.git
   cd movie-recommendation-system

2.	Set up the Python environment:
python -m venv venv
source venv/bin/activate  # On Windows use `venv\Scripts\activate`
pip install -r requirements.txt

3.	Build the C++ components:
o	Navigate to the cpp directory and run the makefile or compile the C++ code using:
 	                    g++ -o main main.cpp -std=c++11
**Usage**
1.	Prepare the Dataset:
o	Ensure the movie dataset (e.g., CSV or JSON format) is placed in the data directory.
o	The dataset should include features like title, genres, movieId.
2.	Run the Recommendation System:
o	Execute the main script which combines Python and C++ components:
    python main.py
o	Alternatively, if you need to run specific C++ modules, compile and execute them as needed.
3.	Accessing Results:
o	Recommendations will be displayed in the console or saved to an output file, depending on your implementation.

**Contact**

Salih Camcı, salih.camci@bahcesehir.edu.tr

Yaman Karakoca, yaman.karakoca@bahcesehir.edu.tr

Project Link: https://github.com/Salih04/movie-recommendation-system


