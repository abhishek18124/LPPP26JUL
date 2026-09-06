#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main() {

	// pair<int, int> p1;

	// p1.first = 10;
	// p1.second = 20;

	// cout << p1.first << " " << p1.second << endl;

	// pair<string, int> p2;

	// p2.first = "india";
	// p2.second = 1947;

	// cout << p2.first << " " << p2.second << endl;

	// pair<string, double> p3 = {"abhishek", 8.3};

	// cout << p3.first << " " << p3.second << endl;

	// pair<string, double> p4 = make_pair("kanhaiya", 7.7);

	// cout << p4.first << " " << p4.second << endl;

	// pair<string, string> p5;

	// cin >> p5.first >> p5.second;

	// cout << p5.first << " " << p5.second << endl;

	vector<pair<string, string>> matches;

	matches.push_back({"chelsea", "arsenal"});
	matches.push_back({"barcelona", "valencia"});
	matches.push_back({"india-w", "pakistan-w"});
	matches.push_back({"india", "sl"});
	matches.push_back({"pak", "eng"});

	for (int i = 0; i < (int)matches.size(); i++) {
		pair<string, string> p = matches[i];
		cout << p.first << " " << p.second << endl;
	}

	cout << endl;

	for (pair<string, string> p : matches) {
		cout << p.first << " " << p.second << endl;
	}

	cout << endl;

	for (pair<string, string> p : matches) {
		string team1 = p.first;
		string team2 = p.second;
		cout << team1 << " " << team2 << endl;
	}

	cout << endl;

	for (auto [team1, team2] : matches) {
		cout << team1 << " " << team2 << endl;
	}

	return 0;

}