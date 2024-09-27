#ifndef RECOMMENDER_HPP
#define RECOMMENDER_HPP



#include <string>
#include <vector>
#include <map>


using namespace std;

class Recommender {
public:
	Recommender(const string& filepath);
	vector<string> getRecommendations(const string& movieTitle, int numRecommendations);
	void loadMovies(const string& filepath);
private:
	map<string, vector<string>> movieData;
	
};
