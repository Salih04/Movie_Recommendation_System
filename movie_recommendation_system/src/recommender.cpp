#include "recommender.hpp"
#include<iostream>
#include <fstream>
#include <sstream>
#include <algorithm>


Recommender::Recommender(const string& filepath) {
	loadMovies(filepath);
}
void Recommender::loadMovies(const string& filepath) {
    ifstream file(filepath);
    string line, movieId, title, genre;

    while (getline(file, line)) {
        stringstream ss(line);

        // Read movieId, title, and genre
        getline(ss, movieId, ',');
        getline(ss, title, ',');
        getline(ss, genre, ',');

        // Trim any leading/trailing whitespace (optional)
        title.erase(title.find_last_not_of(" \n\r\t") + 1);
        genre.erase(genre.find_last_not_of(" \n\r\t") + 1);

        // Debug print
        cout << "Loading movie: " << title << ", Genre: " << genre << endl;

        movieData[title] = { genre };
    }
}

vector<string> Recommender::getRecommendations(const string& movieTitle, int numRecommendations) {
    vector<string> recommendations;

    // Check if the movie exists
    auto it = movieData.find(movieTitle);
    if (it == movieData.end()) {
        recommendations.push_back("Movie not found: " + movieTitle);
        return recommendations;
    }

    // Find the genre of the given movie
    string genre = it->second[0];

    // Recommend movies with the same genre
    for (const auto& pair : movieData) {
        if (pair.first != movieTitle && pair.second[0] == genre) {
            recommendations.push_back(pair.first);
        }
        if (recommendations.size() >= numRecommendations)
            break;
    }

    // If not enough recommendations were found, notify the user
    if (recommendations.empty()) {
        recommendations.push_back("No recommendations available for this movie.");
    }

    return recommendations;
}
