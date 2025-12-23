#include <iostream>
#include <random>

class Movie {
private:
    std::string _name;
    std::string _MPAA; 
    int _ratings[5] = {0};

public:
    
    // constructor
    Movie(std::string name) : _name(name) {}

    void set_mpaa(std::string mpaa) {_MPAA = mpaa;}
    void addRating(int rating) {
        if (rating < 1 || rating > 5) {
            std::cout << "Choose a ratng between 1 and 5";
        }

        _ratings[rating-1]+=1;
    }   

    int getAverage() {  
        // weighted mean
        int weighted_sum = 0;
        int total_people;
        for (int i = 0; i < 5; i++) {
            weighted_sum += _ratings[i] * i;
            total_people += _ratings[i];
        }

        return weighted_sum / total_people;
    }



};

int get_rand_num() {
     // Random number engine
    std::random_device rd;
    std::mt19937 gen(rd());  // Mersenne Twister engine

    // Distribution from 1 to 5 (inclusive)
    std::uniform_int_distribution<int> dist(1, 5);

    // Generate and print a random number
    int random_number = dist(gen);
    return random_number;
}




int main() {

    Movie movie("Ballerina");

    for (int i = 0; i < 20; i++) {
        int rating = get_rand_num();
        movie.addRating(rating);
    }

    int avg_rating = movie.getAverage();
    std::cout << avg_rating << std::endl;

    


    return 0;
}   
