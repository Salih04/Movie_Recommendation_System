#include <iostream>
#include "recommender.hpp"
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

// Function to read a CSV file
vector<vector<string>> readCSV(const string& filename) {
    vector<vector<string>> data;
    ifstream file(filename);
    string line;

    while (getline(file, line)) {
        vector<string> row;
        stringstream lineStream(line);
        string cell;

        while (getline(lineStream, cell, ',')) {
            row.push_back(cell);
        }
        data.push_back(row);
    }
    return data;
}


using namespace std;
int main() {
    /*
    vector<vector<string>> movies = readCSV("C:/Users/DELL-5470/source/repos/recommendationSystem/movies.csv");
    // Display the first few rows
    for (const auto& row : movies) {
        for (const auto& cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }*/
	Recommender recommender("C:/Users/DELL-5470/source/repos/recommendationSystem/movies.csv");
	string movie = "Toy Story (1995)";
	vector<string> recommendations = recommender.getRecommendations(movie, 10);

	cout << "Recommendations for " << movie << " : " << endl;
	for (const auto& rec : recommendations) {
		cout << " - " << rec << endl;
	}




	return 0;
}
