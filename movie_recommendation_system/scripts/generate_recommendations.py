import pandas as pd
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.metrics.pairwise import cosine_similarity
import sys

# Load the dataset
movies = pd.read_csv('data/movies.csv') 

# Combine features into a single string
#movieId eklemedik çünkü o bir int biz stringleri combine'lıyoruz
#print(movies.columns)
movies['combined_features'] = movies['genres'] + ' ' + movies['title'] 

# Create the TF-IDF Vectorizer
vectorizer = TfidfVectorizer()
tfidf_matrix = vectorizer.fit_transform(movies['combined_features'])

movie_title = sys.argv[1]   

# Check if the movie exists in the DataFrame
matching_movies = movies[movies['title'].str.strip() == movie_title.strip()]
movie_index = matching_movies.index[0]
print(f"Movie Index: {movie_index}")

# Compute similarity
similarity_scores = cosine_similarity(tfidf_matrix[movie_index], tfidf_matrix).flatten()

# Get top recommendations
top_indices = similarity_scores.argsort()[-6:-1][::-1]
recommendations = movies.iloc[top_indices]['title'].values

# Print recommendations
for rec in recommendations:
    print(rec)

